#!/usr/local/bin/python

from serial import Serial, SerialException
# Import the necessary packages and modules
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D
import numpy as np
import plotly.plotly as py
import math
import re

# NOTE: You won't be able to program your Arduino or run the Serial
# Monitor while the Python script is running.
cxn = Serial("/dev/ttyACM0", baudrate=9600)
dataX = []
dataY = []
dataZ = []

fig = plt.figure()
ax = fig.add_subplot(111, projection='3d')

while True:
    result = str(cxn.readline());
    #result comes in the form distance value, angle top servo, angle bottom servo
    #print(result)
    results = re.findall('\d+', result)
    print(results)
    print('ooooooooooooooooooooo')
    #print(results) #now results should be list of the three values
    if len(results) == 4: #sometimes the number of values in results from serial is less than 3
        pot_val = float(results[0]) #the distance sensor value
        theta_one = float(results[1]) #top servo
        theta_two = float(results[2]) #bottom servo
        sign = int(results[3])
        if sign == 1:
            #hypot1 = 8.43225+((781979)/(-1.59472*10**16 + (3.42521*10**13)*pot_val + (2.6*10**6)*(1./3)**(3.43*10**19 - (1.59*10**17)*pot_val + (1.712*10**14)*pot_val**2))**(1/3))
            #print(hypot1)
            hypot1 = .00272109*(2612+math.sqrt((1.95858*10**7)-(36750*pot_val))) #calculates the distance from sensor
            print('----------')
            print(hypot1)
            print('----------')

            X = math.sin(math.radians(theta_one))*hypot1*math.cos(math.radians(theta_two))
            Y = math.sin(math.radians(theta_one))*hypot1*math.sin(math.radians(theta_two)) #B is the y distance if tilt
            Z = math.cos(math.radians(theta_one))*hypot1 #C is the
            print(X)
            print('oooooooooooooooooooo')
            print(Y)
            print('aaaaaaaaaaaaaaaaaaaaaaa')
            print(Z)

            dataX.append(X) #the z value
            dataY.append(Y) #the y value
            dataZ.append(Z) #the x value

        elif sign == 2:
            ax.scatter(dataX, dataY, dataZ)

            ax.set_xlabel('X Label')
            ax.set_ylabel('Y Label')
            ax.set_zlabel('Z Label')

            plt.show()

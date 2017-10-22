#!/usr/local/bin/python

from serial import Serial, SerialException
# Import the necessary packages and modules
import matplotlib.pyplot as plt
import numpy as np
import math
import re

# The Serial constructor will take a different first argument on
# Windows. The first argument on Windows will likely be of the form
# 'COMX' where 'X' is a number like 3,4,5 etc.
# Eg.cxn = Serial('COM5', baudrate=9600
#
# NOTE: You won't be able to program your Arduino or run the Serial
# Monitor while the Python script is running.
cxn = Serial("/dev/ttyACM0", baudrate=9600)

while(True):
    try:
        cmd_id = int(input("Please enter a command ID (1 - read potentiometer, 2 - read the button:")) #Please enter a command ID (1 - read potentiometer, 2 - read the button: "
        if int(cmd_id) > 2 or int(cmd_id) < 1:
            print("Values other than 1 or 2 are ignored.")
        else:
            cxn.write([int(cmd_id)])
            while cxn.inWaiting() < 1:
                pass
            result = str(cxn.readline());
            #print(result)
            result = int(re.search(r'\d+', result).group())

            #theta = angle measure from the top servo
            hypot1 = math.sqrt((result-399.54)/-3.675)
            print(data_to_plot)
            A = math.acos(theta)*hypot1 #A is the x
            B = math.asin(theta)*hypot1 #B is the y
            dataA = []
            dataB = []
            if A <= 16 and A >= 1:
                dataA.append(A)
                dataB.append(B)
                print(dataA)
                print(dataB)
                # Prepare the data
            to_plot = np.linspace(18, 18)
            # Plot the data
            plt.scatter(dataA, dataB, color='darkgreen', label="shapes on shapes")
            # Add a legend and show the plot
            plt.legend()
            plt.show()
            #print(result)
    except ValueError:
        print("You must enter an integer value between 1 and 2.")

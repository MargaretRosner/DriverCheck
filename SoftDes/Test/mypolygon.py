import turtle
bob = turtle.Turtle()
print(bob)


# bob.fd(100)#moves the turtle forward fd = distance in pixels
# bob.bk(100)#moves backwards
# bob.lt(30)#moves left turn in degrees
# bob.rt(60)#moves right turn in degrees
#
# #square
# bob.fd(100)
# bob.lt(90)
# bob.fd(100)
# bob.lt(90)
# bob.fd(100)
# bob.lt(90)
# bob.lt(100)
#
#
# def square(t,length):
#     for i in range(4):
#         t.fd(length)
#         t.lt(90)
#
# square(bob,50)
# square(bob,20)
#
#
# def polygon(t,length,n):
#     for i in range(n):
#         t.fd(length)
#         t.lt(360/n)
#
# polygon(bob,50,3)
# polygon(bob,100,5)
#
# import math
# def circle(t,r,n):
#     for i in range(n):
#         circumference = 2*math.pi*r
#         length = circumference/n
#         t.fd(length)
#         t.lt(360/n)
# circle(bob,30,40)
#
# #
# #
# #
import math
def trianglethingy(t,length,n):
    # t.lt(90)

    for i in range(n):
        angle = 180/n
        t.fd(length)
        t.lt(180-angle)
        t.fd(length)
        t.lt(180-angle)
        t.fd(length)
        t.rt(180-angle)



trianglethingy(bob,100,5)

turtle.mainloop()

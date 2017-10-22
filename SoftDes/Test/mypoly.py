import turtle
bob = turtle.Turtle()
print(bob)




def trianglethingy(t,length,n):
    for i in range(n):
        angle = 360/2
        t.fd(length)
        t.lt(angle)

    for i in range(n):
        t.fd(length)
        t.lt(angle/2)
        t.fd(length)
        t.rt(angle/2)


        trianglethingy(bob,30,40)

turtle.mainloop()

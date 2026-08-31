import turtle
import colorsys

t= turtle.Turtle()
s= turtle.Screen()

s.bgcolor("black")
t.speed(0)
t.width(2)

h= 0

for i in range(360):
    c= colorsys.hsv_to_rgb(h,1,1)
    h+= 0.005
    t.color(c)
    t.forward(i*3)
    t.left(59)

turtle.done()

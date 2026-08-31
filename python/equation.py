# Solve the quadratic equation ax**2 + bx + c = 0
import cmath

a = int(input("Enter a number for a:"))
b = int(input("Enter a number for b:"))
c = int(input("Enter a number for c:"))
d = (b**2) - (4*a*c)
root1 = (-b-cmath.sqrt(d))/(2*a) 
root2 = (-b+cmath.sqrt(d))/(2*a)

print('The solution are {0} and {1}'.format(root1,root2))

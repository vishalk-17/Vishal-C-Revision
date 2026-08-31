import math

print("Equation is : ax^2 + bx + c = 0")

a = int(input("Enter a: "))
b = int(input("Enter b: "))
c = int(input("Enter c: "))

d = b**2 - 4*a*c
D = math.sqrt(abs(d))

if d == 0:
    print("Roots are equal")
    print("r1 = r2 =", -b / (2 * a))

elif d > 0:
    print("Roots are Real")

    r1 = (-b + D) / (2 * a)
    r2 = (-b - D) / (2 * a)

    print("r1 =", r1)
    print("r2 =", r2)

else:
    print("Roots are Imaginary")

    real_part = -b / (2 * a)
    imag_part = D / (2 * a)

    print("r1 =", real_part, "+", imag_part, "i")
    print("r2 =", real_part, "-", imag_part, "i")
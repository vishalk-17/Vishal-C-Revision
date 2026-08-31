#input a number and find the weather the last digit is divisible by 5  or not
number = int(input("Enter a number:"))
if number % 10 == 0 or number % 10 == 5:
    print("The last digit of the number is divisible by 5")

else:
    print("the last digit if the number is not divisible by 5")




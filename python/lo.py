num = int(input("Enter a number: "))

# Sum of digits
temp = num
sum_digits = 0

while temp > 0:
    digit = temp % 10
    sum_digits += digit
    temp //= 10

print("Sum of digits =", sum_digits)
#palindrome check
temp = num
reverse = 0

while temp > 0:
    digit = temp % 10
    reverse = reverse * 10 + digit
    temp = temp // 10

if num == reverse:
    print(num, "is a Palindrome Number")
else:
    print(num, "is not a Palindrome Number")

# Prime number check
if num > 1:
    prime = True
    for i in range(2, int(num**0.5) + 1):
        if num % i == 0:
            prime = False
            break

    if prime:
        print(num, "is a Prime Number")
    else:
        print(num, "is not a Prime Number")
else:
    print(num, "is not a Prime Number")

# Armstrong number check
temp = num
power = len(str(num))
armstrong_sum = 0

while temp > 0:
    digit = temp % 10
    armstrong_sum += digit ** power
    temp //= 10

if armstrong_sum == num:
    print(num, "is an Armstrong Number")
else:
    print(num, "is not an Armstrong Number")
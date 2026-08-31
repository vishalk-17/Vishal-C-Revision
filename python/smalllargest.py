# Enter three numbers and find the largest and smallest number

# Input three numbers from user
n1 = int(input("Enter the first number: "))
n2 = int(input("Enter the second number: "))
n3 = int(input("Enter the third number: "))

# Logic to find the largest number
if n1 >= n2 and n1 >= n3:
    largest = n1
elif n2 >= n1 and n2 >= n3:
    largest = n2
else:
    largest = n3

# Logic to find the smallest number
if n1 <= n2 and n1 <= n3:
    smallest = n1
elif n2 <= n1 and n2 <= n3:
    smallest = n2
else:
    smallest = n3

# Display the results
print(f"\nNumbers entered: {n1}, {n2}, {n3}")
print(f"Largest number: {largest}")
print(f"Smallest number: {smallest}")



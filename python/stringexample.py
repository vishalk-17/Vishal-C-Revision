'''print the character in python'''
# n = input("Enter the String :")
# print(n)

'''reverse the string witout slicing '''
# s = "vishal"
# rev = ""

# for ch in s:
#     rev = ch + rev

# print(rev)

''' reverse the string using slicing'''
# s= "abba"
# reverse = s[::-1]

# print(reverse)

# '''palindrome String check'''

# s = input("Enter the String: =")
# reverse = s[::-1]

# if s == reverse:
#     print("Palindrome")
# else:
#     print("Not Palindrome")


'''string operation'''
s = "Python Programming"

# Length
print(len(s))         

# Access a character
print(s[0])            

# Slicing
print(s[0:6])         

# Convert case
print(s.upper())    
print(s.lower())       

# Replace text
print(s.replace("Python", "Java"))


# Check for text
print("Python" in s)
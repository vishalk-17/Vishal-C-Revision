#function basic example
#def greet():
    #print("hello")
#greet()


"""addition program
def add(a, b):
   print(a+b)
n = int(input("enter the first number: "))
m = int(input("enter the second number: "))
add(n,m)"""

''' Function with Parameters

def greet(name):
    print("Hello,", name)

greet("Vishal")
greet("Rahul")
'''


""" Function with Return Value
def mul(a, b):
    return a * b

result = mul(10, 20)
print(result)"""

''' multiple  parameters

def student(name,course):
    print("Student Name is :", name)
    print("Studnet Course:", course)
student("vishal","mca")'''

'''default parameter
def greet(name="Guest"):
    print("Hello", name)

greet()
greet("Vishal")
'''

'''keyword parameter
def student(name, age):
    print(name, age)

student(age=23, name="Vishal")
'''

'''Arbitrary Arguments (*args)
def total(*numbers):
    print(max(numbers))

total(1, 2, 3)
total(10, 20, 30, 40)
'''

'''Keyword Arbitrary Arguments (**kwargs)
def details(**info):
    print(info)

details(name="Vishal", age=23, city="Lucknow")
'''

'''variable  arugments
def varr_char(*args):
    for i in args:
        print(i)
varr_char('abc','mno','pur')
varr_char(3,4,5)
varr_char("bbd","lko","soca","mca")        
'''
# def details(**info):
#    for i in info:
#       print(i,":",info[i])

# details(Name="Vishal", Age=23, City="Lucknow")
# details(course="MCA", Cgpa=9.0, Status="Pass")

# def details(**info):
#    for i,j in info.items():
#       print(i,":",j)

# details(Name="Vishal", Age=23, City="Lucknow")
# details(course="MCA", Cgpa=9.0, Status="Pass")

'''  mix'''
    
# def demo(name="Guest", *numbers, **info):

#     print("Name:", name)

#     print("Numbers:")
#     total = 0
#     for num in numbers:
#         total += num
#     print("Sum =", total)

#     print("Details:")
#     for key, value in info.items():
#         print(key, ":", value)

#     return total


# result = demo(
#     "Vishal",
#     10, 20, 30, 40,
#     age=23,
#     city="Lucknow",
#     course="MCA"
# )

# print("Returned Value =", result)


'''additon in variable arugment'''

# def total(*numbers):
#     print(sum(numbers))

# total(1, 2, 3)
# total(10, 20, 30, 40)


'''makrs percentage in variable length arugment'''

def percentage(math, science, *other_marks):
    total_marks = math + science + sum(other_marks)
    subjects = 2 + len(other_marks)

    percent = (total_marks / (subjects * 100)) * 100
    return percent

# Math and Science are mandatory
result = percentage(80, 90)

print("Percentage =", result, "%")


#using **kwargs
def percentage(math, science, **kwargs):
    total = math + science

    for marks in kwargs.values():
        total += marks

    subjects = 2 + len(kwargs)

    return total * 100 / (subjects * 100)


percent = percentage(
    math=80,
    science=90,
    english=75,
    hindi=85,
    computer=70
)

print("Percentage =", percent, "%")

        
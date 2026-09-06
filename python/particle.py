def student(name="Unknown", age=0, *marks, **details):
    print("Name:", name)
    print("Age:", age)
    print("Marks:", marks)
    print("Details:", details)


# 1. Default Arguments
student()


# 2. Keyword Arguments
student(name="Vishal", age=23)


# 3. *args
student("Vishal", 23, 80, 85, 90)


# 4. **kwargs
student("Vishal", 23, course="MCA", city="Lucknow")


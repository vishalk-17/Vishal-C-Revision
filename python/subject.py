subject_code = input("Enter Subject Code: ")

match subject_code.upper():
    case "CS101":
        print("Subject Name: Programming in Python")
    case "CS102":
        print("Subject Name: Data Structures")
    case "CS103":
        print("Subject Name: Database Management System")
    case "CS104":
        print("Subject Name: Operating System")
    case "CS105":
        print("Subject Name: Computer Networks")
    case "CS106":
        print("Subject Name: Software Engineering")
    case _:
        print("Invalid Subject Code")
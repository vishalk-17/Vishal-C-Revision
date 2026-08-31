num = int(input("Enter a number: "))

match len(str(abs(num))):
    case 1:
        print("1 Digit Number")
    case 2:
        print("2 Digit Number")
    case 3:
        print("3 Digit Number")
    case 4:
        print("4 Digit Number")
    case 5:
        print("5 Digit Number")
    case 6:
        print("6 Digit Number")
    case 7:
        print("7 Digit Number")
    case 8:
        print("8 Digit Number")
    case _:
        print("More than 8 digits")





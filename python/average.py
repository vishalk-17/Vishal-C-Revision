math  = int(input("Enter a math marks:"))
physics = int(input("Enter a physics marks:"))
chemistry = int(input("Enter a chemistry marks:"))
english = int(input("Enter a english marks:"))
hindi = int(input( "Enter a hindi marks:"))

sum = math+physics+chemistry+english+hindi
average = sum/5
if average >90:
    print("Grade A")
elif average >80:
    print("Grade B")
elif average >70:
    print("Grade C")
elif average >60:
    print("Grade D")
elif average >50:
    print("Grade E")
else:
    print("Grade F")

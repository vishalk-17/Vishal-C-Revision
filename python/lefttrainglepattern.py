#lefttraingle pattern
n = int(input("Enter the number of rows:"))
for m in range(1,n+1):
    for n in range(1,m+1):
       print("*", end=" ")   
    print()
for i in range(1,n+1):
    for j in range(n,i-1,-1):
        print("*",end=" ")
    print()    
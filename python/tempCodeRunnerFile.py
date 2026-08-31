n = int(input("Enter thee number of rows:"))

s = n-1
for i in range(1,n+1):
    print(' '*s,end=" ")
    s = s-1
    #print("*"*i)
   
#print()
    for j in range(1,2*i):
        print("*",end=" ")
    print()
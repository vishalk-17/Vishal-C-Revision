n = int(input("Enter thee number of rows:"))

s = n-1
for i in range(1,n+1):
    print(' '*s,end="")
    s = s-1
    
    for j in range(1,i+1):
        print(j,end="")
        if j==i:
            for j in range(i-1,0,-1):
                print(j,end="")
    print()
n = int(input("Enter the number: "))
i = 1
cnt=0
while(i<=n):
    if(n%i == 0):
        cnt+=1
    i+=1
if(cnt == 2):
    print("No. is prime")
elif(cnt ==3):
    print(" 3 factor")            
elif(cnt ==4):
    print(" 4 factor")
else:
    print("Unknown")         
    
n = int(input("Enter the number: "))
sum = 0
while(n>0):

     r = n%10
     sum = sum*10+r
     n = n//10    
print("Reverse of number is = ",sum)    
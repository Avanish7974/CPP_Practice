i = 1
n = int(input("Enter the number : "))
fact = 1
sum_fact =0
while(i<=n):
    if(i%2==0):
        sum_fact = sum_fact-fact*1
    else:
        sum_fact= sum_fact+fact*1
    i += 1
print("The value is : ",sum_fact)

i = 1
n = int(input("Enter the num of time to run loop : "))
sum_even = 0
sum_odd = 0
while(i<=n):
    


    if(i%2 == 0):
        sum_even = sum_even + i
        print("Even ", i)
    else:
        sum_odd = sum_odd + i
        print("Odd",i)
    i += 1    
     
print("Sum of Even number : ",sum_even)
print("Sum of Odd number : ",sum_odd)


# i = 1
# n = int(input("Enter the number : "))
# fact = 1
# sum_fact =0
# while(i<=n):
#     fact=fact*i
#     sum_fact=sum_fact+fact
#     i+=1
# print("Factorial of nmber",fact)
# print("Sum of factorial",sum_fact)  
n = int(input("Enter the number: "))
fact = 1
sum_fact = 0

for i in range(1, n + 1):
    fact *= i  # Calculate factorial
    if i % 2 == 0:
        sum_fact -= fact  # Subtract factorial if i is even
    else:
        sum_fact += fact  # Add factorial if i is odd

print("The value is:", sum_fact)

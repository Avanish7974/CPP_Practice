# a=int(input("Enter the a number: "))
# b=int(input("Enter the b number: "))                                        
# c=int(input("Enter the c number: "))
# d=(b*b-4*a*c)**0.5
# r1=(-b+d)/2*a
# r2=(-b-d)/2*a
# if(r1==r2):
#     print("Roots are equal")
# else:
#     print("Roots unequal")    

# Function 
# A program is divided into small function that small function is called function
# in function there is reserved keyword that is def

# Function divided into 4 types 
# 1. no return no argument
# 2. no return with argument
# 3. return no argument
# 4. return with argument
# # paramete and argument not same

# # Local variable and global variable
# When we declare any variable within the scope of a function then such type of variable is known as local variable and scope of the local variable is only inside the function....
# When we declare any variable outside the function is known as global variable and the scope of a global variable is outside the function as well as inside the function

# # Syntax of a function 
# #def myfunc() :
#    #statement of function

def myfunc():
    a=6
    b=7
    c=a+b
    print("add= ",c)
myfunc()     
# Function ko call karte samay jo value detee hai usse argument kahte hai 
def myfunc(x,y):
    a=x
    b=y
    c=a+b
    print("add= ",c)
myfunc(10,10)
# Default argument
# def myfunc(x,y):
#     a=x
#     b=y
#     c=a+b
#     print("add= ",c)
# myfunc(10,10)



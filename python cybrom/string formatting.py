# # String formatting in python
# username=input("username")
# password = input("Your PAssword")
# msg = "Welcome username={} and password = {} ".format(username,password)
# msg1 = "Welcome username={0} and password = {1} ".format(username,password)
# msg2 = "Welcome username={unm} and password = {psw} ".format(psw=password,unm=username)
# print(msg)
# print(msg1)
# print(msg2)
# global variable
glob_var=20

def globals():
    print(glob_var)
globals()   
print(glob_var)
loc_var=50

def globals():
    loc_var=20
    print(loc_var)
globals()   
print(loc_var) 

# what is string 

# Any sequence of characters within either single quotes or double quotes is cosidered as a string 
s = 'i0 am string but new'
s1 = "I am string"
S2 = '''I am 
 string but multiple line'''
print(s)
print(s1)
print(S2)
l =len(s)
print(l)
# Slicing of string [start : stop : step]
print(s[5])
print(s[0:6])
print(s[0:10:2])
print(s[::-1])
print(s.upper())
print(S2.lower())
print(s1.capitalize())
# wap to reverse the string without using slicing using while loop and function
# wap to remove the white space present in string usin loop and function [;]
x=lambda y=5:y*y
print(x(1)) 
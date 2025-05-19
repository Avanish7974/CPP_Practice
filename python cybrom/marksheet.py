
# # WAP to print a marksheet of any student of three subject input taken from user but condition is marks should be 
# 1. 0 to 100
# 2. Student can pass only if pass in all subjects
# 3. passing marks is 33
# 4. If student pass show their devision

phy = float(input("Enter Physics marks : "))
che = float(input("Enter Chemistry marks :  "))
mat = float(input("Enter Maths marks :  "))
total = phy+che+mat
if(phy<0 or phy>100 or che<0 or che>100 or mat<0 or mat>0):
    print("Invalid Marks phy",phy,"Invalid Marks che",che,"Invalid Marks mat",mat)
# elif((phy<33 and che>=33 and mat>=33)or (phy>=33 and che<33 and mat>=33)or( phy>=33 and che>=33 and mat<33)):
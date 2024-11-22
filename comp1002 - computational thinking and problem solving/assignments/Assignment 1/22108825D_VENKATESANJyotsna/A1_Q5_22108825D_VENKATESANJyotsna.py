"""
Please enter the value a: 2
Please enter the value b: 4
Please enter the value c: 2
There is only one root:  -1.0
"""

"""
Please enter the value a: 1
Please enter the value b: -3
Please enter the value c: -4
There are two distinct real roots: ( 4.0 , -1.0 )
"""

a=int(input("Please enter the value a: "))
b=int(input("Please enter the value b: "))
c=int(input("Please enter the value c: "))
disval=b**2-4*a*c
root1=0
root2=0
if disval>0:
    root1=(-b+disval**(1/2))/2*a
    root2=(-b-disval**(1/2))/2*a
    print("There are two distinct real roots: (", root1, ",", root2,")")
elif disval==0:
    root3=-b/(2*a)
    print("There is only one root: ", root3)
else:
    print("Invalid input. (The roots are imaginary)")    

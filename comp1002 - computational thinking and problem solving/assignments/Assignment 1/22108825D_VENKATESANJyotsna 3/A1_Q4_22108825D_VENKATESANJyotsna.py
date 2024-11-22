"""
Please enter a decimal number (an integer number in base 10).200
Quotient  25
Remainder  0
Quotient  3
Remainder  1
Quotient  0
Remainder  3

The octal number is:  310
"""

"""
Please enter a decimal number (an integer number in base 10).440
Quotient  55
Remainder  0
Quotient  6
Remainder  7
Quotient  0
Remainder  6

The octal number is:  670
"""


dec= int(input("Please enter a decimal number (an integer number in base 10)."))
octa=0
while dec!=0:
    quo=int(dec/8)
    print("Quotient ", quo)
    rem=dec%8
    print("Remainder ", rem)
    dec=int(dec/8)
    octa=int(str(rem)+str(octa))

print("\nThe octal number is: ", octa)
    

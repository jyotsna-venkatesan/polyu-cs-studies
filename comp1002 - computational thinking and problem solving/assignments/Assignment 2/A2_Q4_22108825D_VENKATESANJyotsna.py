#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Fri Oct 21 22:21:22 2022

@author: jay
"""

def function1():
    """
    s is a variable that stores the string.
    c is the character that we need to search for in string s.
    count is a vaariable that stores the number of times c has appeared in s.
    countlist is a list that stores the indices of the appearances of c in s.
    We use a for loop and increment the value of i by 1 to go through each character in the string.
    We compare each character of the string with the variable c, and if they are equal, we increment the value of count by 1.
    We, also, add the index of the found character to s (we add one to the index as the required list needs the indices to be one-based).
    Then, we print the output and then call the function.
    """
    s=input("Enter text: ")
    c=input("Input a character to be searched: ")
    count=0
    countlist=[]
    for i in range (0,len(s)):
        if s[i]==c:
            count+=1
            countlist=countlist+[i+1]
    print("The character ",c, " in the text occurred ", count, " times at ", countlist)


function1()
print("The docstring: ")
print (function1.__doc__)


"""
OUTPUT:
    Enter text: Never Too late To Start. Please go ahead with us.

    Input a character to be searched: t
    The character  t  in the text occurred  4  times at  [13, 20, 23, 44]
    The docstring: 

        s is a variable that stores the string.
        c is the character that we need to search for in string s.
        count is a vaariable that stores the number of times c has appeared in s.
        countlist is a list that stores the indices of the appearances of c in s.
        We use a for loop and increment the value of i by 1 to go through each character in the string.
        We compare each character of the string with the variable c, and if they are equal, we increment the value of count by 1.
        We, also, add the index of the found character to s (we add one to the index as the required list needs the indices to be one-based).
        Then, we print the output and then call the function.
    
"""
            
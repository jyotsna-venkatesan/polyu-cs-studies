
def myMax(l1):
    """
    myMax() Desciption:
        maxnum is a variable that stores the highest value in the list. 
        maxnum is initially stored as the first element of the list and not stores as zero because unless it is done so, the function does not work for negative numbers.
        the while loop compares each value in the list with the maxnum, and if the value of the element is more than maxnum, the new value of maxnum becomes the element's value
        we add one to the location as the requirement of the program is to return the location of the element starting from 1.
    """
    maxnum=l1[0]
    location=0
    i=0
    while i<len(l1):
        if (l1[i]>=maxnum):
            maxnum=l1[i]
            location=i+1
        i=i+1
    return maxnum, location

def mySort(l1):
    """
    mySort() Description:
        we store the list in a teritary variable called l2 so that we do not tamper with the list.
        in the while loop, we find the maximum value using function myMax() and add the maximum value of the list to another new list called l1sorted
        we then, pop the element with the maximum value out of the list so that we can re-do the iteration and find the next highest value in the list.
        we break the loop if the length of l1sorted is the same as the inputed list in order to avoid a list index out of range error.
    """
    l2=l1
    l1sorted=[]
    while len(l1sorted)<=lenl:
        maxnum,location=myMax(l2)
        location=location-1
        l1sorted=l1sorted + [maxnum]
        l2.pop(location)
        if len(l1sorted)==lenl:
            break
    return l1sorted


l=eval(input("Please enter a list of different numbers seperated by ',' : "))
l=list(l)
lenl=len(l)
maxnum,location=myMax(l)
print("The maximal number is ", maxnum)
print("Its location index is ", (location))
lsorted=mySort(l)
print("A list of sorting values in descending order: ", lsorted)
print (myMax.__doc__)
print(mySort.__doc__)

"""
OUTPUT: 
    Please enter a list of different numbers seperated by ',' : 1,-3,4.5,5,18,-1,3,-4
    The maximal number is  18
    Its location index is  5
    A list of sorting values in descending order:  [18, 5, 4.5, 3, 1, -1, -3, -4]

        myMax() Desciption:
            maxnum is a variable that stores the highest value in the list. 
            maxnum is initially stored as the first element of the list and not stores as zero because unless it is done so, the function does not work for negative numbers.
            the while loop compares each value in the list with the maxnum, and if the value of the element is more than maxnum, the new value of maxnum becomes the element's value
            we add one to the location as the requirement of the program is to return the location of the element starting from 1.
        

        mySort() Description:
            we store the list in a teritary variable called l2 so that we do not tamper with the list.
            in the while loop, we find the maximum value using function myMax() and add the maximum value of the list to another new list called l1sorted
            we then, pop the element with the maximum value out of the list so that we can re-do the iteration and find the next highest value in the list.
            we break the loop if the length of l1sorted is the same as the inputed list in order to avoid a list index out of range error.
        

"""







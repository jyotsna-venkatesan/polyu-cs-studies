import csv
def myMedian(x):
    x.sort()
    lenx=len(x)
    if lenx%2==0:
        y=(lenx-1)//2
        median=x[y]
    elif lenx%2!=0:
        z1=float(x[(lenx-1)//2])
        z2=float(x[((lenx)//2)+1])
        median=(z1+z2)/2
    return median

   
input_file = open("iris2021.csv", "r")
file = csv.DictReader(input_file)
Petal_Width=[]
Species=[]
for col in file:
    Species.append(col['Species'])
    Petal_Width.append(col['Petal.Width'])
 
virginica=[]
setosa=[]
versicolor=[]
len_of_file=len(Petal_Width)
for i in range(0,len_of_file):
    if Species[i]=="virginica":
        virginica.append(Petal_Width[i])
    if Species[i]=="setosa":
        setosa.append(Petal_Width[i])
    if Species[i]=="versicolor":
        versicolor.append(Petal_Width[i])
        
print("The median of Petal Width for virginica is ", myMedian(virginica))
print("The median of Petal Width for versicolor is ", myMedian(versicolor))
print("The median of Petal Width for setosa is ", myMedian(setosa))

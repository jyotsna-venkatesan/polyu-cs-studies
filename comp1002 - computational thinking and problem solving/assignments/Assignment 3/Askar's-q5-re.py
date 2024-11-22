import csv
def myMedian(x_list):
    x_list.sort()
    if len(x_list) % 2 != 0:
        x = int((len(x_list)-1)//2)
        return x_list[x]
    else:
        x_1 = float(x_list[(len(x_list)-1)//2])
        x_2 = float(x_list[((len(x_list))//2)-1])
        result = (x_1+x_2)/2
        return result
    
infile = open("iris2021.csv", "r")
file_read = csv.DictReader(infile)
petal_width = []
category = []
for j in file_read:
    category.append(j["Species"])
    petal_width.append(j["Petal.Width"])

virginica = []
setosa = []
verisicolor = []
size_of_file = len(petal_width)
for i in range(0,size_of_file):
    if category[i] == "virginica":
        virginica.append(petal_width[i])
    elif category[i] == "setosa":
        setosa.append(petal_width[i])
    elif category[i] == "versicolor":
        verisicolor.append(petal_width[i])
        

print("The median of Petal Width for Viriginica is", myMedian(virginica))
print("The median of Petal Width for Verisicolor is", myMedian(verisicolor))
print("The median of Petal Width for Setosa is", myMedian(setosa))

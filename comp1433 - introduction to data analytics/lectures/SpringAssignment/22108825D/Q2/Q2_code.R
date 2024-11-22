install.packages("ggplot2")
library(ggplot2)

# (a) Load the data
employees <- read.csv("/Users/jay/Documents/Jay/university/year-1/sem-2/comp1433/SpringAssignment/Assignment Data/employees.csv")


# (a) Create new column for Yearly Salary
employees$Salary_Per_Year <- employees$Monthly_Salary * 12


# (b) Calculate average salary for men and women
avg_male_sal <- aggregate(Salary_Per_Year ~ Gender, data = employees, FUN = mean)[1,2]
avg_female_sal <- aggregate(Salary_Per_Year ~ Gender, data = employees, FUN = mean)[2,2]


# (b) Print averages
cat("The average salary per year for male employees is ", avg_male_sal, "\n")
cat("The average salary per year for female employees is ", avg_female_sal, "\n")


# (c) Create histogram
uni_year_of_experience <- unique(c(employees[[3]]))
bin <- length(uni_year_of_experience)
ggplot(employees)+
  geom_histogram(mapping=aes(x=Years_of_Experience),color = "black",fill="grey",bins=bin) +
  xlab("Years of Experience") + 
  ylab("Frequency")+  ggtitle("The distribution of years of experience among all employees")


# (d) Create Scatterplot
ggplot(employees, aes(x = Years_of_Experience, y = Monthly_Salary, color = Gender)) + 
  geom_point() +
  xlab("Years of Experience") +
  ylab("Monthly Salary") +
  ggtitle("The relationship between years of experience and monthly salary ")

# File:   Basic_Plot.R
# Course: COMP1433 & 1003 Lecture 7

# PLOT DATA WITH PLOT() ####################################
?plot  # Help for plot()

# Example 1: Plot sine and cosine functions ################################
x <- pretty(c(-10,10), 1000)
y1 <- cos(x)
y2 <- sin(x)
plot(x, y1, type="p", pch=19, col="red", xlab="x", ylab="y") # "p" for points,  "l" for lines, "b" for both points and lines
lines(x, y2, type="b", pch=19, col="blue") # use help(plot) to find more information about the plot
legend("topleft", c("sin(x)","cos(x)"), fill=c("red", "blue")) # Add a legend

dev.off() # Clear plots

# Example 2: Plot Normal Distributions ####################################
x <- pretty(c(-3,3), 1000)
y1 <- dnorm(x, m=0, sd=1)
y2 <- dnorm(x, m=1, sd=0.8)
plot(x, y2, type="b", pch=19, col="red", xlab="z-scores", ylab="Density", ylim=c(0,0.5))
lines(x, y1, type="b", pch=19, col="blue")
legend("topleft", c("N(0,1)","N(1,0.64)"), fill=c("blue", "red")) # Add a legend

dev.off() # Clear plots

# Example 3: Plot Iris Dataset ####################################
# LOAD DATASETS PACKAGES 
library(datasets)  # Load/unload base packages manually

# LOAD and EXPLORE YOUR DATA 
str(iris)
head(iris)
plot(iris)  # Entire data frame
plot(iris$Species)  # Categorical variable
plot(iris$Petal.Length)  # Quantitative variable
plot(iris$Petal.Width)   # Quantitative variable
plot(iris$Species, iris$Petal.Length)  # Cat x quant
plot(iris$Species, iris$Petal.Width)  # Cat x quant

# Plot with options
plot(iris$Petal.Length, iris$Petal.Width,
     col = iris$Species, # iris$Species set the color according to species
     pch = 16,    # Use solid circles for points
     main = "Iris: Petal Length vs. Petal Width",
     xlab = "Petal Length",
     ylab = "Petal Width")
legend("topleft", c("setosa","versicolor", "virginica"), fill=c("black", "pink", "lightgreen")) # Add a legend

plot(iris$Sepal.Length, iris$Sepal.Width,
     col = iris$Species, # iris$Species set the color according to species
     pch = 16,    # Use solid circles for points
     main = "Iris: Sepal Length vs. Sepal Width",
     xlab = "Sepal Length",
     ylab = "Sepal Width")

# 3D Plots
library(scatterplot3d)

x <- iris$Sepal.Length
y <- iris$Sepal.Width
z <- iris$Petal.Length

scatterplot3d(x, y, z, pch = 16)
grps <- as.factor(iris$Species) 

# Change color by groups
# add grids and remove the box around the plot
# Change axis labels: xlab, ylab and zlab
colors <- c("#999999", "#E69F00", "#56B4E9")
scatterplot3d(x, y, z, pch = 16, color = colors[grps],
              grid = TRUE, box = FALSE, xlab = "Sepal length", 
              ylab = "Sepal width", zlab = "Petal length")

# CLEAN UP #################################################
# Clear packages
detach("package:datasets")

# Clear plots
dev.off()  

# Clear console
cat("\014")  # ctrl+L


# Load the iris dataset
irisData <- read.csv("/Users/jay/Documents/Jay/university/year-1/sem-2/comp1433/SpringAssignment/Assignment Data/iris.csv", header = FALSE)


# Euclidean distance
E_Distance <- function (X1, Y1, X2, Y2){
  dist<-sqrt((X2 - X1)^2+(Y2 - Y1)^2)
  return(dist)
}

irisRow <- nrow(iris)
k <-3
distanceList<-matrix(nrow=max_iterations, ncol=k)
centroids <- matrix(c(1.4, 0.1, 1.3, 0.2, 1.7, 0.1), nrow = 3, byrow = TRUE)


# K-means clustering algorithm
max_iterations <- 100
for(a in 1: max_iterations){
  irisData <- data.frame()
  for (j in 1: irisRow){
    PetalWidth <- iris$Petal.Width[j]
    PetalLength <- iris$Petal.Length[j]
    tempData <- c(1,E_Distance(PetalLength, PetalWidth, centroids[1,1], centroids[1,2]))
    for (i in 2: k){
      if (E_Distance(PetalLength, PetalWidth, centroids[i,1], centroids[i,2])<tempData[2]){
        tempData <- c(i, E_Distance(PetalLength, PetalWidth, centroids[i,1], centroids[i,2]))
      }
    } 
    irisData<- rbind(irisData, c(tempData[1], tempData[2], PetalLength, PetalWidth))
  }
  for (i in 1: k){
    irisSubset<- subset(irisData, irisData[,1] ==i)
    meanDistance <- mean( irisSubset[,2])
    distanceList[a,i] <- meanDistance
    centroids[i, ] <- c(mean( irisSubset[,3]), mean( irisSubset[,4]))
  }
}
names(irisData) <- c("Clusters","Distance","PetalLength","PetalWidth")
C1<- c(distanceList[,1])
C2 <- c(distanceList[,2])
C3 <- c(distanceList[,3])

# Scatter Plot
scatterColor <- c("red","green","blue")
ggplot(data=irisData)+
  geom_point(mapping=aes(
    x = PetalLength,
    y = PetalWidth,
    color = scatterColor[Clusters]))+
  labs(title="Scatter plot for all the data samples",
       x="Petal Length",
       y="Petal Width",
       color="Legend")+
  scale_color_manual(labels=c("1","2","3"), values=scatterColor)


# Line Plot 
ggplot(data.frame(iteration,C1,C2,C3), aes(c(1:100))) +
  geom_line(aes(y = C1))+
  geom_line(aes(y = C2)) +
  geom_line(aes(y = C3))+
  labs(title="Mean Distance to the Cluster Centroids",x="Training Iteration",y="Mean distance")


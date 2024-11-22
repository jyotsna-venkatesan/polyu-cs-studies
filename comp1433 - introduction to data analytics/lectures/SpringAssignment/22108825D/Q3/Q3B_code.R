install.packages("ggplot2")
library(ggplot2)

# Set seed
set.seed(42)

# Theoretical probabilities=
theory_sim <- c(NA)
for (i in 0:100) {
  theory_sim[i] <- choose((i + 20 - 1), (20 - 1)) * (0.5^20) * ((1 - 0.5)^i)
}

# Simulate the negative binomial distribution
x <- 1:100
n <- 10000
r <- 20
p <- 0.5
negative_sim <- rnbinom(n, size = r, prob = p)
negative_bin <- rep(0, length(x))
for (i in 1:length(x)) {
  negative_bin[i] <- sum(negative_sim == x[i]) / length(negative_sim)
}


negative_bin_df <- data.frame(x = 1:100, 
                              negative_bin = negative_bin, 
                              theory_sim = theory_sim)

# Scatter plot of simulated negative binomial distribution
library(ggplot2)
ggplot(negative_bin_df, aes(x)) +
  geom_point(aes(y = negative_bin), color = "red") +
  geom_point(aes(y = theory_sim), color = "blue") +               
  ggtitle("Simulated vs Theoretical Negative Binomial Distribution") +
  xlab("Number of Failures until 20th Success") +
  ylab("Probability") +
  scale_color_manual(labels = c("Simulated", "Theoretical"), 
                     values = c("red", "blue"))

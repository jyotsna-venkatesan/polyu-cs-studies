# Parameters
r <- 104
p_nine <- 1/20

# 9 lives
probability_nine <- sum(rnbinom(10000,9,0.05)>=104) /length(rnbinom(10000,9,0.05))

# 1 life
probability_one <- sum(rnbinom(10000,1,0.05)>=104) /length(rnbinom(10000,1,0.05))


# Print the result
cat("The probability that Montgomery will survive for another 2 years given that he has 9 life left is", probability_nine)
cat("The probability that Montgomery will survive for another 2 years given that he has 1 life left is", probability_one)



# Section 2.1 Exercises

## Problem 1

Find the closed formula for each of the following sequences by relating them to a well known sequence. Assume the first term given is $a_1$.

1. $2,5,10,17,26,...$
2. $0,2,5,9,14,20,...$
3. $8,12,17,23,30,...$
4. $1,5,23,119,719,...$

**Solution to part 1:** In this sequence, the difference between the second element and the first is $3$, the difference between the third and second is $5$, the difference between the fourth and the third is $7$, and so on. Each time, the difference between two elements increases by $2$. So, the recursive definition for the sequence is $a_n = a_{n-1} + ((a_{n-1} - a_{n-2}) + 2) and the next term is $37$.

**Solution to part 2:** In this case, the difference between each 2 elements increases by $1$ instead of by 2. So, the recursive definition for the sequence is $a_n = a_{n-1} + ((a_{n-1} - a_{n-2}) + 1)$ and the next term is $27$.

**Solution to part 3:** Again, the difference increases by $1$ each time. The recursive definition is the same as for part 2, $a_n = a_{n-1} + ((a_{n-1} - a_{n-2}) + 1)$, and the next term is $38$.

**Solution to part 4:** If we add one to each of the terms, we find the factorials except starting with $2$. So, the closed formula for the sequence is $a_n = (n + 1)! - 1$ and the next term is $5,039$.

## Problem 2

For each sequence given below, find a closed formula for $a_n$, the $n$th term of the sequence (assume the first terms are $a_0$\) by relating it to another sequence for which you already know the formula. In each case, briefly say how you got your answers.

1. $4, 5, 7, 11, 19, 35, …$
2. $0, 3, 8, 15, 24, 35, …$
3. $6, 12, 20, 30, 42, …$
4. $0, 2, 7, 15, 26, 40, 57, …$ (Cryptic Hint: these might be called “house numbers”)

**Solution to part 1:** The difference between 2 consecutive elements doubles each time, so the closed formula is

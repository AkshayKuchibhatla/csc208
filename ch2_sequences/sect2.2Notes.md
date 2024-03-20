# 2.2 Arithmetic and Geometric Sequences

This section is about finding the closed formulas for certain kinds of sequences.

## Arithmetic Sequences

If the terms of a sequence differ by a constant, we say the sequence is **arithmetic**. If the initial term ($a_0) of the sequence is $a$ and the **common difference** is $d$, the we have the following formulas:

**Recursive definition:** $a_n = a_{n-1} + d$ with $a_0 = a$.

**Closed formula:** $a_n = a + dn$.

## Geometric Sequences

A sequence is called **geometric** if the ratio between successive terms is constant. Suppose the initial term $a_0$ is $a$ and the **common ratio** is $r$. Then we have the following formulas:

**Recursive definition:** $a_n = 4a_{n-1}$ with $a_0 = a$

**Closed formula:** $a_n = a \cdot r^n$.

## Sums of Arithmetic and Geometric Sequences

Let's look at the sequence $(T_n)_{n \ge 1}$ which starte $1, 3, 6, 10, 15, ...$. These are the **triangular numbers** because each number represents the number of dots needed to form a full equilateral triangle:

![Image visualizing triangular numbers](triangular_numbers.png)

These numbers do not form an arithmetic sequence. Their differences, however, do: $2,3,4,5,6,...$. This means that the $n$th term of the sequence $(T_n)$ is the sum of the first $n$ terms in the sequence $1,2,3,4,5,...$. $(T_n)$ is the **sequence of partial sums** of the sequence $1,2,3,...$ (*partial* sums because we are not taking the sum of all infinitely many terms).

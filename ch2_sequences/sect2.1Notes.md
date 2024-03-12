# 2.1 Describing Sequences

## Definition

A **sequence** is an ordered list of numbers. They are different from sets because sets do not need to be ordered. Because we care about the order of the elements in a sequence, we can represent the elements with the following variables:

$$a_0, a_1, a_2, a_3, a_4, a_5, ...$$

This is a sequence containing all the natural numbers. To refer to the entire sequence at once, we can write $(a_n)_{n \in \mathbf N}$ or $(a_n)_{n \ge 0}$ or just $(a_n)$. The numbers in these subscripts are called **indices**.

A sequence can also be thought of as a type of function. In the sequence $(a_n)_{n \ge 0}$ is a function with domain $\mathbf N$ where $a_n$ is the image of natural number $n$.

## Formulas

We often describe sequences by writing out the first few terms. However, the problem is that no number of initial terms can say for certain that what type of sequence we are dealing with, so there are some other ways to specify a sequence:

**Closed formula:** A closed formula for a sequence $(a_n)_{n \in \mathbf N}$ is a formula for $a_n$ using a fixed finite number of operations on $n$. It's like a formula for $n$, just as if you were defining a function with $n$ as the domain.

**Recursive definition:** A recursive definition, also known as an **inductive definition** for a sequence $(a_n)_{n \in \mathbf N}$ consists of a ***recurrence relation***: an equation relating a term of the sequence to previous terms (terms with smaller index) and an ***initial condition***: a list of a few terms of the sequence (one less than the number of terms in the recurrence relation).

Here are some closed formulas for sequences:

$a_n = n^2 + 3n + 14 \\$
$a_n = \log(n) \\$
$a_n = -\frac {n-2}{n} \\$

Here are some recursive definitions for sequences:

$a_{n}=3a_{n-1}$ with $a_{0}=1 \\$
$a_{n}=a_{n-1}+a_{n-2}+a_{n-3}$ with $a_{0}=1, a_{1}=3, a_{2}=5 \\$

## Common sequences

Here are some common sequences:

The **square numbers**. Sequence $(s_n)_{n \ge 1}$ has a closed formula $s_n = n^2$:
$1,4,9,16,25,36,49,...$

The **triangular numbers**. The sequence $(T_n)_{n \ge 1}$ has a closed formula $T_n = \frac{n(n+1)}{2}$:
$1,3,6,10,15,21,...$

The **powers of 2**. The sequence $(a_n)_{n \ge 0}$ with the closed formula $a_n = 2^n$:
$1,2,4,8,16,32,64,...$

The **Fibonacci numbers**, defined recursively by $F_n = F_n-1 + F_n-2$ with $F_1 = F_2 = 1$:
$1,1,2,3,5,8,13,...$

## Partial sums and products

Some sequences naturally arise as the sum of terms of another sequence.

Given any sequence $(a_n)_{n \in \mathbf N}$, we can always form a new sequence $(b_n)_{n \in \mathbf N}$ by:

$b_n = a_0 + a_1 + a_2 + ... + a_n$.

Since the terms of $(b_n)$ are the sums of the initial part of the sequence $(a_n)$ ways call $(b_n)$ the ***sequence of partial sums*** of $(a_n)$. Soon we will see that it is sometimes possible to find a closed formula for $(b_n)$ from the closed formula for $(a_n)$.

To simplify writing out these sums, we often use notation like $\sum_{k=1}^{n}a_k$.

This simply means add up the $a_k$'s where $k$ changes from 1 to $n$.

If we want to multiply the terms to get a partil product, instead, we could write $\prod_{k=1}^{n}a_k$. For example, $\prod_{k=1}^{n}k = n!$.

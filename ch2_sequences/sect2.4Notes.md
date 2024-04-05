# 2.4 Solving Recurrence Relations

## Introduction

It is noticably easier to find the recursive formula for a sequence than the closed formula. However, taking a recursive formula and turning it into one is called ***solving a recurrence relation***.

**Note:** A recursive formula plus the first term of the sequence gives us the recurrence relation.

## Telescoping

Let's say that we are given the following recurrence relation that we have to turn into a closed formula:

$$a_n = a_{n - 1} + n$$

Subtracting $a_{n - 1}$ from both sides gives us $a_n - a_{n - 1} = n$. To make a closed formula out of this equation, we have to essentially "stack" it on top of itself repeatedly, changing $n$ each time:

$$
\begin{align*}
    a_1 - a_0 &= 1 \\
    a_2 - a_1 &= 2 \\
    a_3 - a_2 &= 3 \\
    a_4 - a_3 &= 4 \\
    &\vdots\\
    a_n - a_{n - 1} &= n
\end{align*}
$$

Then, we can add all of these eqations. This gives us $1+2+3+4+ \cdots +n$ on the right side, which can be simplified to $\frac{n(n+1)}{2}$.

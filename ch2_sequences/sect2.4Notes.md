# 2.4 Solving Recurrence Relations

## Introduction

It is noticably easier to find the recursive formula for a sequence than the closed formula. However, taking a recursive formula and turning it into one is called ***solving a recurrence relation***.

**Note:** A recursive formula plus the first term of the sequence gives us the recurrence relation.

## Telescoping

Let's say that we are given the following recurrence relation that we have to turn into a closed formula:

$$a_n = a_{n - 1} + n$$
with
$$a_0 = 4$$

Subtracting $a_{n - 1}$ from both sides gives us $a_n - a_{n - 1} = n$. To make a closed formula out of this equation, we have to essentially "stack" it on top of itself repeatedly, changing $n$ each time:

$$
\begin{array}{cccccccccc}
    a_1 - a_0 & = & 1 & \\
    a_2 - a_1 & = & 2 & \\
    a_3 - a_2 & = & 3 & \\
    a_4 - a_3 & = & 4 & \\
    &\vdots\\
    a_n - a_{n - 1} & = & n & \\
\end{array} \\
$$

Then, we can add all of these eqations:

$$
\begin{array}{cccccccccc}
    & \cancel{a_1} & - & a_0 & = & 1 & \\
    & \cancel{a_2} & - & \cancel{a_1} & = & 2 & \\
    & \cancel{a_3} & - & \cancel{a_2} & = & 3 & \\
    & \cancel{a_4} & - & \cancel{a_3} & = & 4 & \\
    &&&&\vdots\\
    & \cancel{a_{n-1}} & - & \cancel{a_{n-2}} & = & n - 1 & \\
    + & a_n & - & \cancel{a_{n - 1}} & = & n & \\
    \hline \\
    & a_n & - & a_0 & = & 1+2+\cdots+n
\end{array} \\
$$

The $1+2+3+4+ \cdots +n$ on the right side can be simplified to $\frac{n(n+1)}{2}$. Therefore, $a_n = a_0 + \frac{n(n+1)}{2}$. This process of cancelation to reach a sum is called **telescoping**.

Telescoping works for solving recurrence relations where $a_n = a_{n-1} + f(n)$ and $\sum{k=1}{n}f(k)$ has a known closed formula. You can always rewrite such relations as $a_n - a_{n-1} = f(n)$ and then cancel out to $a_n-a_0$.

However, telescoping does NOT work with recursive relations such as $a_n = 3a_{n-1} + 2$ because the left side will not telescope. For such relations, we can use **iteration**.

## Iteration

Let's use iteration to solve the same recurrence relation from before:

$$a_n = a_{n - 1} + n$$
with
$$a_0 = 4$$

$a_2 = a_1 + 2$, and $a_1 = a_0 + 1$. So, we can substitute one equation into the other:

$$
a_2 = (a_0 + 1) + 2
$$

This process can keep on going:

$$
a_3 = ((a_0 + 1) + 2) + 3 \\
a_4 = (((a_0 + 1) + 2) + 3) + 4 \\
a_n = ((((a_0 + 1) + 2) + 3) + \cdots + n - 1) + n
$$

We still needed the formula for the sum $1+2+3+\cdots+n$. Let's solve a relation for which telescoping doesn't work:

$$
a_n = 3a_{n-1} + 2
$$

with

$$
a_0 = 1
$$

We can start up by iterating and building up to index $n$:

$$
\begin{array}{cccccccccc}
a_1 & = & 3a_0 + 2 \\
a_2 & = & 3(3a_0 + 2) + 2 \\
a_3 & = & 3(3(3a_0 + 2) + 2) + 2 \\
& \vdots & \\
a_n & = & 3(3(3(3 \cdots (3a + 2) + 2) + 2) \cdots + 2) + 2
\end{array}
$$

It looks complicated, but we can simplify it by distributing all the 3s:

$$
\begin{array}{cccccccccc}
a_1 & = & 3a_0 + 2 \\
a_2 & = & 3^2a_0 + 2*3 + 2 \\
a_3 & = & 3^3a_0 + 2*3^2 + 2*3 + 2 \\
& \vdots & \\
a_n & = & 3(3^{n-1}a_0 + 2*3^{n-2} \cdots + 2) + 2 \\
    & = & 3^na_0 + 2*3^{n-1} + 2*3^{n-2} + \cdots + 2*3 + 2
\end{array}
$$

All these terms have 2 in them. Together, this forms a geometric sequence with 3 as the common ratio. We can add these up using the formula:

$$
\begin{array}{cccccccccc}
S_n & = & \frac{a(r^n - 1)}{r - 1} \\ \\
S_n & = & \frac{2(3^n - 1)}{3 - 1} \\
S_n & = & \frac{2*3^n - 2}{2} \\
S_n & = & 3^n - 1 \\
\end{array}
$$

So, the closed formula is $a_n = 3^n - 1$.

## The Characteristic Root Technique

Suppose we want to solve a recurrence relation expressed as a combination of the two previous terms, such as $a_n = a_{n-1} + 6a_{n-2}$.

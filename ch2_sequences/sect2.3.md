# Section 2.3 Exercises

## Problem 2

Use polynomial fitting to find the formula for the $n$ th term of the sequence $(a_n)_{n \ge 0}$, which starts,

$$
0,2,6,12,20,...
$$

First, we have to find the degree of the sequence. Taking the differences gives us the following:

$$
2,4,6,8,...
$$

The second differences are as follows:

$$
2,2,2,...
$$

So, this is a $\Delta^2$-constant sequence. Therefore, its closed formula will be a second-degree polynomial or a quadratic. We can start with the following:

$$
a_n = an^2 + bn + c
$$

In the sequence, $a_0 = 0$, so we can plug this into the equation to find $c$:

$$
\begin{align*}
    a_0 = 0 = a(0)^2 + b(0) + c
    c = 0
\end{align*}
$$

Now, we have to find $a$ and $c$, we first find $a_1$ and $a_2$:

$$
a_1 = 2 = a + b
a_2 = 6 = 4a + 2b
$$

This gives us two linear equations. We can solve for $a$ and $b$ as follows:

$$
\begin{array}{cccccccccc}
    & 6 & = & 4a & + & 2b \\
    - & 4 & = & 2a & + & 2b \\
    \hline
    & 2 & = & 2a\\
    a = 1 \\
\end{array} \\

\begin{align*}
    a + b &= 2 \\
    1 + b &= 2 \\
    b &= 1 \\
\end{align*}
$$

Therefore, $a = 1$, $b = 1$, and $c = 0$. The closed formula for the sequence is $a_n = n^2 + n$.

## Problem 4

Use polynomial fitting to find the formula for the $n$ th term of the sequence $(a_n)_{n \ge 0}$, which starts,

$$
3,6,12,22,37,58,...
$$

First differences:

$$
3,6,10,15,21,...
$$

Second differences:

$$
3,4,5,6,...
$$

Third differences:

$$
1,1,1,...
$$

This sequence is a $\Delta^3$-constant sequence. Its closed formula will be a cubic polynomial.

## Problem 12

In their down time, ghost pirates enjoy stacking cannonballs in triangular based pyramids (aka, tetrahedrons), like those pictured here:

![Picture for problem 12](Problem2.3.12Picture.png)

Note, these are solid tetrahedrons, so there will be some cannonballs obscured from view (the picture on the right has one cannonball in the back not shown in the picture, for example)

The pirates wonder how many cannonballs would be required to build a pyramid 15 layers high (thus breaking the world cannonball stacking record). Can you help?

1. Let $P(n)$ denote the number of cannonballs needed to create a pyramid $n$ layers high. So $P(1) = 1$, $P(2) = 4$, and so on. Calculate $P(3)$, $P(4)$, and $P(5)$.
2. Use polynomial fitting to find a closed formula for $P(n)$. Show your work.
3. Answer the pirate's question: how many cannonballs do they need to make a pyramid 15 layers high?
4. Bonus: Locate this sequence in Pascal's triangle. Why does that make sense?

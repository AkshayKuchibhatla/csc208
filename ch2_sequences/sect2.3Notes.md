# 2.3 Polynomial Fitting

## Background

Question: How many squares of all sizes are on a chess board? To answer this, we will have to start counting:

- In a $1 \times 1$ chess board, there is only one size of square: one with sidelength $1$. There is one of these squares, therefore there is $1$ square on a $1 \times 1$ board.
- In a $2 \times 2$ chess board, there are 4 squares of sidelength 1 and 1 square of sidelength 2. That's 5 squares in total.
- In a $3 \times 3$ chess board, there are 9 squares of sidelength 1, 4 squares of sidelength 2 and 1 sqare of sidelength 3. That's 14 squares in total.

Continuing this, we get the following sequence:

$$1,5,14,30,55,91,140,...$$

This is not an arithmetic or geometric sequence. In fact, it is hard to find any sort of pattern in it. However, if you take the differences between terms in the sequence, there's a different story:

$$4,9,16,25,36,49,64,...$$

So, each term is the sum of the squares of all numbers from 1 to its index. Now, if you take the differences of *this* sequence, which would be known as finding the ***second differences*** of the original sequence, you get the following:

$$5,7,9,11,13,15,...$$

This is an arithmetic sequence, because the sequence of *its* differences, which would also be the ***third differences*** of the original sequence, is constant at 2. The fact that the original sequence had third differences constant makes it a $\Delta ^3$-constant. The sequence $1,4,9,16,...$ has second differences constant, so we would call that a $\Delta ^2$-constant sequence. In general, we would call any sequence that has $k$th differences constant a **$\Delta ^k$-constant sequence**.

## Relationship

Knowing this, we can conclude the following:

- $\Delta ^0$-constant sequences are constant to begin with, so their closed formula is simply the constant sequence.
- $\Delta ^1$-constant sequences have a common difference, therefore they are arithmetic sequences. Finding their closed formulas is also easy.

$\Delta ^2$-constant sequences, on the other hand, are different. Their closed formulas seem to usually be quadratic functions. For example, the sequence of the squares, $1,4,9,16,25,...$, is a $\Delta ^2$-constant sequence with a closed formula of $a_n = n^2$. The triangular numbers, which are also a $\Delta ^2$-constant sequence, have a closed formula of $a_n = \frac{n(n+1)}{2}$, which becomes a quadratic equation when you distribute the top.

This relationship is similar to derivatives in calculus: If a function has a second derivative, then it must be quadratic. If it has a third derivative, it must be cubic.

## Rule

All of this correlation leads us to one rule:

**Finite differences:** The closed formula for a sequence will be a degree $k$ polynomial if and only if the sequence is $\Delta ^k$-constant (i.e., the $k$th sequence of differences is constant).

This means that the sequence for the number of squares on a chess board, $1,5,14,30,55,91,140,...$, which is a $\Delta ^3$-constant sequence, will have a closed formula that is a cubic function.

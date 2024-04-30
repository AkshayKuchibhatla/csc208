# Chapter 3.2 Exercises

## Problem 1

### Consider the statement "for all integers $a$ and $b$, if $a + b$ is even then $a$ and $b$ are even."

#### Part (1a)

Write the contrapositive of the statement.

> "For all integers $a$ and $b$, if either $a$ or $b$ is not even then $a + b$ is not even."

#### Part (1b)

Write the converse of the statement.

> "For all integers $a$ and $b$, if $a$ and $b$ are even then $a + b$ is even."

#### Part (1c)

Write the negation of the statement.

> "For all integers $a$ and $b$, if $a + b$ is even then either $a$ or $b$ is not even."

#### Part (1d)

Is the original statement true or false? Prove your answer.

> We can prove this via proof by contrapositive:
>
> Assume that $a$ and $b$ are NOT even. Instead, $a$ is odd while $b$ is even. This would mean that $a = 2k + 1$ while $b = 2k$ for some number $k$. Now, let's add them:
>
> $a + b = 4k + 1$
>
> $4k + 1$ is not even, therefore we have a proof by contrapositive: if either $a$ or $b$ is odd, then $a + b$ is not even.

#### Part (1e)

Is the contrapositive of the original statement true or false? Prove your answer.

> Yes it is. I just did...

#### Part (1f)

Is the converse of the original statement true or false? Prove your answer.

> "For all integers $a$ and $b$, if $a$ and $b$ are even then $a + b$ is even."
>
> This can be proved using a direct proof. If $a$ and $b$ are even, then $a = 2k$ and $b = 2l$ for some numbers $k$ and $l$. This would mean that the following:
>
> $a + b = 2k + 2l = 2(k + l)$
>
> Therefore $a + b$ is an even number. We have a direct proof.

#### Part (1g)

Is the negation of the original statement true or false? Prove your answer.

> "For all integers $a$ and $b$, if $a + b$ is even then either $a$ or $b$ is not even."
>
> Let's say $a + b = 2k$ for some integer $k$. $b$ is even, and $b = 2l$ for some integer $l$, but $a$ is not even. $a = 2m + 1$ for some integer $m$. Therefore, $a + b = 2l + 2m + 1$, and $2(l + m) + 1 = 2k$. However, this cannot be possible, as $2(l + m) + 1$ is an odd number while $2k$ is an even number. Therefore, the negation of the statement has been disproved by contradiction.

## Problem 2

### For each of the statements below, say what method of proof you should use to prove them. Then say how the proof starts and how it ends. Bonus points for filling in the middle

#### Part (2a)

There are no integers $x$ and $y$ such that $x$ is a prime greater than 4 and $x = 6y + 3$.

> We can prove this by contradiction:
>
>Let's say $x$ *is* a prime number greater than 4 and $x = 6y + 3$. This would mean that $x = 3(2y +1)$. However, $x$ is supposed to be a prime number, yet this shows that it has a factor other than 1 and itself. Therefore, we have a contradiction, and the statement is proved.

#### Part (2b)

For all integers $n$, if $n$ is a multiple of 3, then $n$ can be written as the sum of consecutive integers.

> We can use a direct proof for this statement:
>
> Let's say an integer $n = k + (k - 1) + (k - 2)$. Also, $n = 3l$ for some number $l$. This gives us the following:
>
> $3l = k + (k - 1) + (k - 2)$
> $3l = 3k - 3$
> $3l = 3(k - 1)$
>
> This proves that the sum of 3 consecutive integers is always a multiple of 3. Therefore, any integer $n$ if $n$ is a multiple of 3 can be rewritten as the sum of 3 consecutive integers. The statement has been proved via direct proof.

#### Part (2c)

For all integers $a$ and $b$, if $a^2 + b^2$ is odd, then $a$ or $b$ is odd.

> We can prove this using proof by contrapositive:
>
> The contrapositive is "For all integers $a$ and $b$, if $a$ and $b$ are even then $a^2 + b^2$ is even. Let's say that $a = 2k$ for some integer $k$, and let's say that $b = 2l$ for some integer $l$. This would mean the following:
>
> $a^2 + b^2 = (2k)^2 + (2l)^2$
> $a^2 + b^2 = 4k^2 + 4l^2$
> $a^2 + b^2 = 2(2k^2 + 2l^2)$
>
> $a^2 + b^2$ has been proved even. Therefore, the statement has been proved via proof by contrapositive.

## Problem 3

### Consider the statement: for all integers $n$ if $n$ is even then $8n$ is even

#### Part (3a)

Prove the statement. What sort of proof are you using?

> We can use a direct proof:
>
> Let's say we have an integer $n$, and $n$ is even. $n = 2k$ for some integer $k$. This means that $8n = 16k = 2(8k)$. Therefore, $8n$ is even, and we have a direct proof.

#### Part (3b)

Is the converse true? Prove or disprove.

> The converse is "For all integers $n$ if $8n$ is even then $n$ is even."
>
> If this were true, then the contrapositive would also be true: "For all integers $n$ if $n$ is odd then $8n$ is odd."
>
> Let's say $n = 2k + 1$ for some integer $k$. This would mean that $8n = 8(2k + 1) = 2(4(2k + 1))$. However, This would mean that $8n$ is even even when $n$ is odd. The contrapositive is false, therefore the logically equivalent original statement is also false.

## Problem 4

### The game TENZI comes with 40 six-sided dice (each numbered 1 to 6). Suppose you roll all 40 dice

#### Part (4a)

Prove that there will be at least seven dice that land on the same number.

> We can prove this using the pigeon hole principle:
>
> If 40 dice are being roled and each die can only fall on one of 6 sides, even if all 40 dice are split equally between landing on those 6 sides, the following number of dice will land on the same side:
>
> $\frac{40}{6} = 6.67$
>
> Rounding up, that means at least 7 dice will fall on one side.

#### Part (4b)

How many dice would you have to roll before you were guaranteed that some four of them would all match or all be different? Prove your answer.

> If we roll 10 dice, but at most only 3 of them are matching rolls, then we would have only 3 different values. Hoewever, this would mean that there are only $3 \cdot 3 = 9$ dice, so there must be 4 different values, giving 4 dice that are all different.

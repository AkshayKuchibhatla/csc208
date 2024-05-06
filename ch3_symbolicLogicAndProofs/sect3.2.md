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

## Problem 5

### Prove that for all integers $n$, it is the case that $n$ is even if and only if $3n$ is even. That is, prove both implications: if $n$ is even, then 3$n$ is even, and if 3$n$ is even, then $n$ is even

> The first of the two implications can be proved using a direct proof:
>
> Let's say that $n$ is even, meaning $n = 2k$ for some integer $k$. This would mean that $3n = 6k$, or $3n = 2(3k)$. Therefore, $3n$ is even and we have a direct proof.
>
> The second implication can be proved through its contrapositive: "If $n$ is odd, then $3n$ is odd." Here's how:
>
> Let's say $n = 2k + 1$ for some integer $k$. $3n = 3(2k + 1)$. Because both $3$ and $2k + 1$ are odd numbers, and the product of two odd numbers can never be an even number, we have a proof by contrapositive.

## Problem 6

### Prove that $\sqrt{3}$ is irrational

> An irational number is a real number that cannot be expressed as a ratio of integers. So, we can prove that $\sqrt{3}$ is irrational using proof by contradiction:
>
> Suppose that $\sqrt{3}$ is rational. This would mean that $\sqrt{3}$ is a ratio of integers $a$ and $b$:
>
> $\sqrt{3} = \frac{a}{b}$
>
> Assume that $a$ and $b$ are the expression of $\sqrt{3}$ in lowest terms.
>
> $3 = \frac{a^2}{b^2}$
>
> $3b^2 = a^2$
>
> This would mean that $a$ is a multiple of 3, so $a = 3k$ for some integer $k$. Subbing this into the equation gives us the following:
>
> $3b^2 = 9k^2$
>
> $b^2 = 3k^2$.
>
> $b = k\sqrt{3}$
>
> $Thus $b$ is a multiple of $\sqrt{3}$. We can also prove that $a$ is divisble be $\sqrt{3}$. However, this would mean that $\frac{a}{b}$ is not in lowest terms, which is a contradiction. Thus $sqrt{2}$ is irrational.

## Problem 7

### Consider the statement: for all integers $a$ and $b$, if $a$ is even, and $b$ is a multiple of 3, then $ab$ is a multiple of 6

### Part (7a)

Prove the statement. What sort of proof are you using?

> We can prove this using a direct proof:
>
> Let's say $a$ is even, and $a = 2k$ for some integer $k$. Furthermore, $b = 3l$ for some integer $l$. This gives us the following:
>
> $ab = (2k)(3l)$
>
> $ab = 6kl$
>
> $ab$ is a multiple of 6, and we have a direct proof.

#### Part (7b)

State the converse. Is it true? Prove or disprove.

> The converse: "For all integers $a$ and $b$, if $ab$ is a multiple of 6, then $a$ is even and $b$ is a multiple of 3.
>
> We can prove this via its contrapositive: "For all integers $a$ and $b$, if $a$ is odd and $b$ is not a multiple of 3, then $ab$ is not a multiple of 6. Here's how:
>
> $a = 2k + 1$ for some integer $k$, and $b = 3l + 1$ for some integer $l$.
>
> $ab = (2k + 1)(3l + 1)$
>
> $ab = 6kl + 2k + 3l + 1$
>
> $6kl + 2k + 3l + 1$ is not a multiple of 6 because we can't pull 6 out of that expression using the distributive property. Therefore, we have a proof by contrapositive.

## Problem 8

### Prove the statement: For all integers $n$, if $5n$ is odd, then $n$ is odd. Clearly state the style of proof you are using

> We can prove this using its contrapositive: "For all integers $n$, if $n$ is even, then $5n$ is even." Here's how:
>
> Let's say $n$ is even. $n = 2k$ for some integer $k$. Therefore, $5n = 10k$, or $5n = 2(5k)$. Therefore, $5n$ is even and we have a proof by contrapositive.

## Problem 9

### Prove the statement: For all integers $a$, $b$ and $c$, if $a^2 + b^2 = c^2$, then $a$ or $b$ is even

> This can be proved through its contrapositive: "For all integers $a$ and $b$, if $a$ and $b$ are odd, then $a^2 + b^2 \ne c^2$." Here's how:
>
> $a = 2k + 1$ and $b = 2l + 1$ for any integers $k$ and $l$. This gives us the following:
>
> $a^2 + b^2 = c^2$
>
> $(2k + 1)^2 + (2l + 1)^2 = c^2$
>
> $4k^2 + 4k + 1 + 4l^2 + 4l + 1 = c^2$
>
> $4k^2 + 4l^2 + 4k + 4l + 2 = c^2$
>
> The expression $4k^2 + 4l^2 + 4k + 4l + 2$ cannot be factored to a squared polynomial, therefore there can be no integer $c$ such that $c^2 = 4k^2 + 4l^2 + 4k + 4l + 2$. Therefore, the statement has been proved via contrapositive.

## Problem 10

### Suppose that you would like to prove the following implication "For all numbers $n$, if $n$ is prime then $n$ is solitary." Write out the beginning and end of the argument if you were to prove the statement in the following ways. You do not need to provide details for the proofs (since you do not know what solitary means). However, make sure that you provide the first few and last few lines of the proofs so that we can see that logical structure you would follow

#### Part (10a)

Directly

> Suppose $n$ is prime....This would mean that $n$ is solitary, therefore we have a direct proof.

#### Part (10b)

By contrapositive

> The contrapositive of this statement is "For all numbers $n$, if $n$ is not solitary then it is not prime."
>
> If $n$ is not solitary, that means that $n$ is so-and-so...but that would mean that $n$ is divisible by a number other than itself, then it is not prime. Therefore, we have proved the contrapositive.
>

#### Part (10c)

By contradiction

> Let's say that $n$ is prime, but $n$ is not solitary. This would mean so-and-so...but if $n$ is not a ratio of any two integers, that means that it is not prime, therefore we have a proof by contradiction.

## Problem 11

### Suppose you have a collection of 5-cent stamps and 8-cent stamps

#### Part (11a)

Prove that if you only use an even number of both types of stamps, the amount of postage you make must be even.

> This can be proved via a direct proof:
>
> You own $n$ 5-cent stamps and $m$ 8-cent stamps. $n = 2k$ and $m = 2l$ for integers $k$ and $l$. Therefore, the total amount of postage you make would be $5n + 8m$. This gives us the following:
>
> $5n + 8m = 10k + 16l = 2(5k + 8l)$
>
> Therefore we have an even amount of postage.

#### Part (11b)

Suppose you made an even amount of postage. Prove that you used an even number of at least one of the types of stamps.

> This can be proved via contradiction:
>
> The statement would be false if you made an even number of postage, but you used an odd number for both the stamps.
>
> Let's say $n$ is the number of 5-cent stamps you used and $m$ is the number of 8-cent stamps you used. $n = 2k + 1$ and $m = 2l + 1$ for some integers $k$ and $l$. The total postage is $5n + 8m$, which gives us the following:
>
> $5n + 8m = 5(2k + 1) + 8(2l + 1)$
>
> $5n + 8m = 10k + 5 + 16l + 8$
>
> $5n + 8m = 2(5k + 8l + 4) + 5$
>
> An even number plus and odd number is an odd number; the total postage is odd, which goes against the original premise. Therefore, we have a proof by contradiction.

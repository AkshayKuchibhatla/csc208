# 3.2 Proofs

## Proof by contradiction

### Theorem 3.2.1

**There are infinitely many primes.**

**Proof:** Suppose this were not the case. That is, suppose there are only finitely many primes. Then there must be a last, largest prime, call it $p$. Consider the following number:

$$
N = p! + 1 = (p \cdot (p-1) \cdots 3 \cdot 2 \cdot 1) + 1
$$

$N$ is definitely larger than $p$, and it's not divisible by any number less than or equal to $p$, since that set of numbers just divides $p!$. Prime factorization of $N$ contains prime numbers larger than $p$, possibly even $N$ itself. This is an example of **proof by contradiction**.

Proof by contradiction is one of the standard styles of mathematical proof. In such proofs, the proof itself is an argument. It's a sequence of statements, with the last one being the conclusion. Let's go through the proof from the example above step by step:

1. Suppose there are only finitely many primes. *[this is a premise. Note the use of “suppose.”]*
2. There must be a largest prime, call it $p$. *[follows from line 1, by the definition of “finitely many.”]*
3. Let $N = p! + 1$. *[basically just notation, although this is the inspired part of the proof; looking at $p! + 1$ is the key insight.]*
4. $N$ is larger than $p$ *[by the definition of $p!$]*.
5. $N$ is not divisible by any number less than or equal to $p$. *[by definition, $p!$ is divisible by each njmber less than or equal to $p$, so $p!+1$ is not.]*
6. The prime factorization of $N$ contains prime numbers greater than $p$. *[since $N$ is divisible by each prime number in the prime factorization of $N$, and aby line 5.]*
7. Therefore $p$ is not the largest prime because by line 6, $N$ is divisible by a prime larger than $p$.
8. This is a contradiction.
9. Our only premise led to a contradiction, so the premise is false. There are infinitely many primes.

## Direct Proof

The **direct proof** is the simplest form of proof. It is particularly useful for proving inplications. The following is the general format for proving $P \implies Q$:
Assume $P$. Explain, explain, ...,explain. Therefore $Q$.

**Example:** For all integers $n$, if $n$ is even, then $n^2$ is even.

Let $n$ be an arbitrary integer. Assume that $n$ is even. Suppose $n$ is even. Then $n = 2k$ for some integer $k$. Now $n^2 = (2k)^2 = 4k^2 = 2(2k^2)$. Since $2k^2$ is an integer, $n^2$ is divisible by $2$ and therefore even.

In the above proof, the format was to assume the existence of an arbritrary even integer $n$, then to explain what it meant for $n$ to be even, and then see what that meant for $n^2$. This is the format of a direct proof.

## Proof by Contrapositive

The implication $P \implies Q$ is logically equivalent to its contrapositive $\lnot Q \implies \lnot P$. So, proving that contrapositive is essentially the same as proving the original statement. The format for proof of $P \implies Q$ by contrapositive goes roughly as follows:

Assume $\lnot Q$. Explain, explain, ... explain. Therefore $\lnot P$.

**Example:** Prove: for all integers $a$ and $b$, if $a + b$ is odd, then $a$ is odd or $b$ is odd.

**Proof:** Let $a$ and $b$ be integers. Assume that $a$ and $b$ are even. Then $a = 2k$ and $b = 2l$ for some integers $k$ and $l$. Now $a + b = 2k + 2l = 2(k + l)$. Since $k + l$ is an integer, we can see that $a + b$ is even, completing the proof.

**Note:** The assumption that $a$ and $b$ are even is actually the negation of $a$ or $b$ is odd. This is an example of De Morgan's law.

## Proof by Contradiction

Some statements can't be rephrased as implications. For example, "$\sqrt{2}$ is irrational."

In such cases, we can use **proof by contradiction**. Let's say we have to prove the statement $P$. What if we proved $\lnot P \implies Q$ where $Q$ was false? This would mean that $\lnot P$ is false, which makes $P$ true.

**Example:** Prove that there are no integers $x$ and $y$ such that $x^2 = 4y + 2$.

Suppose there *are* integers $x$ and $y$ such that $x^2 = 4y + 2 = 2(2y+1)$. So $x^2$ is even, meaning $x$ is even. So $x = 2k$ for some integer $k$. $x^2 = 4k^2$. This gives us $4k^2 = 2(2y+1)$, so $2k^2 = (2y+1)$. But $2k^2$ is even, and $2y + 1$ is odd, so these cannot be equal. Thus we have a contradiction, so there must not be any integers $x$ and $y$ such that $x^2 = 4y + 2$.

## Proof by (counter) Example

This is most useful for proving statements that say "for all," because if you can find one example that does not apply to the rule that is supposed to apply "for all," then you've disproved the claim.

**Example:** Above we proved, "for all integers $a$ and $b$, if $a + b$ is odd, then $a$ is odd or $b$ is odd." Is the converse true?

The converse is the statement "for all integers $a$ and $b$, if $a$ is odd or $b$ is odd, then $a + b$ is odd." We can prove that this is false by starting with the symbols:

$$
\forall a \forall b ((O(a) \lor O(b)) \implies O(a + b)).
$$

We want to prove the negation:

$$
\lnot \forall a \forall b ((O(a) \lor O(b)) \implies O(a + b)).
$$

Simplify using the rules from the previous sections:

$$
\exists a \exists b ((O(a) \lor O(b)) \lor \lnot O(a + b)).
$$

Now, to prove the converse false, we just have to find two integers $a$ and $b$ so that $a$ is odd or $b$ is odd, but $a + b$ is even. One pair is 7 and 9. Both of these are odd, yet $7 + 9 = 16$ is not odd.

## Proof by Cases

One final useful technique is **proof by cases**. The idea of proof by cases is to prove that $P$ is true by proving that $Q \implies P$ and $\lnot Q \implies P$ for some statement $Q$. So no matter what, whether or not $Q$ is true, we know that $P$ is true. This also applies if there are statements for $Q$. If there are statements $Q_1, Q_2, ..., Q_n$ and we can shot that $Q_1 \implies P$, $Q_2 \implies P$ and so on all the way to $Q_n \implies P$, then we can conclude $P$. The key is that we want to be sure that all cases are true.

**Example:** Prove that for any integer $n$, the number $(n^3 - n)$ is even.

There are two cases here: if $n$ is even or if $n$ is odd.

Case 1: $n$ is even. Then $n = 2k$ for some integer $k$. This gives us

$$
\begin{align*}
    n^3 - n &= 8k^3 - 2k \\
            &= 2(4k^2-k)
\end{align*}
$$,

and since $4k^2 - k$ is an integer, this says that $n^3 - n$ is even.

Case 2: $n$ is odd. Then $n = 2k + 1$ for some integer $k$. This gives us

$$
\begin{align*}
    n^3 - n &= (2k + 1)^3 - (2k + 1) \\
            &= 8k^3 + 6k^2 + 6k + 1 - 2k - 1 \\
            &= 2(4k^3 + 3k^2 + 2k)
\end{align*}
$$

and since $2(4k^3 + 3k^2 + 2k)$ is an integer, we see that $n^3 - n$ is even again.

Since $n^3 - n$ is even in both exhaustive cases, we see that $n^3 - n$ is indeed always even.

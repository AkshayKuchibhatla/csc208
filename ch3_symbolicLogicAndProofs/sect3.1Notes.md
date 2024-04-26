# 3.1 Propositional Logic

A **proposition** is a statement. **Propositional logic** deals with the logic of how statements interact with one another. This section discusses some major concepts related to propositional logic.

## Logical Equivalence

The concept of logical equivalence states that two molecular statements $P$ and $Q$ are  logically equivalent so long as $P$ is true exactly when $Q$ is true. In other words, $P$ and $Q$ have the same truth value under any assignment of truth values to their atomic parts, or they have the same truth tables.

## De Morgan's Laws

$\lnot(P \land Q)$ is logically equivalent to $\lnot P \lor \lnot Q$.

$\lnot(P \lor Q)$ is logically equivalent to $\lnot P \land \lnot Q$.

## Implications are Disjunctions

$P \implies Q$ is logically equivalent to $\lnot P \lor Q$.

**Example:** "If the sky is blue, then it is daytime" is equivalent to, "The sky is not blue or (else) it is daytime."

## Double Negation

$\not\not P$ is logically equivalent to $P$.

This is pretty self-explanatory.

## Negation of an Implication

The natation of an implication is a certain conjunction:

$\lnot(P \implies Q)$ is logically equivalent to $P \land \not Q$.

In other words, the only way for an implication to be false is if the hypothesis is true but the conclusion is still false.

## Deductions

Consider the following statement:

If Edith eats her vegetables, then she can have a cookie. Edith ate her vegetables. Therefore Edith gets a cookie.

Let $P$ denote "Edith eats her vegetables" and $Q$ denote "Edith gets a cookie." Here is the logical form:

$$
\begin{array}{ccccccccc}
& P & \implies & Q \\
& & P & \\
\hline
& \therefore & Q &\\
\end{array}
$$

This is an example of the **deduction rule**, an argument form which is always valid.

## Predicate Logic

Not every statement uses solely logical connectives. Take the following one for example:

All primes greater than 2 are odd. We can write this logically as follows:

$$
\forall x((P(x) \land x > 2) \implies O(x))
$$

Where $P(x)$ denotes whether $x$ is prime and $O(x)$ denotes whether $x$ is odd. These are not propositions, because their truth value depends on the input $x$. Better to think of $P$ and $Q$ as denoting *properties* of their input. The technical term or these is **predicates** and the logic related to them is **predicate logic**, which is an extension of propositional logic.

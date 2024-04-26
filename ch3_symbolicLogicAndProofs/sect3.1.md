# Section 3.1 Exercises

## Problem 1

Consider the statement about a party, “If it's your birthday or there will be cake, then there will be cake.”

1. Translate the above statement into symbols. Clearly state which statement is $P$ and which is $Q$.
2. Make the truth table for the statement.
3. Assuming the statement is true, what (if anything) can you conclude if there will be cake?
4. Assuming the statement is true, what (if anything) can you conclude if there will NOT be cake?
5. Suppose you found that the statement was a lie. What can you conclude?

**Part 1:** $P$: It is your birthday. $Q$: There will be cake. Statement: $(P \implies Q) \lor (Q \implies Q)$.

**Part 2:** Truth table:

``` txt
+-----+-----+--------------------------+
|  p  |  q  |  ((p => q) or (q => q))  |
|-----+-----+--------------------------|
|  1  |  1  |            1             |
|  1  |  0  |            1             |
|  0  |  1  |            1             |
|  0  |  0  |            1             |
+-----+-----+--------------------------+
```

**Part 3:** If the statement is true, then it means one thing if there will be cake: that there will be cake. Because $Q$ *always* implies itself, this statement is a **tautology**.

**Part 4:** If the statement is true, then it means one thing if there will NOT be cake: That there will not be cake. Isn't that interesting?

**Part 5:** If the statement that cannot logically be false is false, then that means two things: First, if it's your birthday, there will not be cake. Second, if there will be cake, there will not be cake. Mind-blowing.

## Problem 3

Make a truth table for the statement $\lnot P \land (Q \implies P). What can you conclude about $P$ and $Q$ if you know the statement is true?

Truth table:

``` txt
+-----+-----+-------------------+
|  p  |  q  |  ~p and (q => p)  |
|-----+-----+-------------------|
|  1  |  1  |         0         |
|  1  |  0  |         0         |
|  0  |  1  |         0         |
|  0  |  0  |         1         |
+-----+-----+-------------------+
```

## Problem 5

Geoff Poshingten is out at a fancy pizza joint, and decides to order a calzone. When the waiter asks what he would like in it, he replies, “I want either pepperoni or sausage. Also, if I have sausage, then I must also include quail. Oh, and if I have pepperoni or quail then I must also have ricotta cheese.”

1. Translate Geoff's order into logical symbols.
2. The waiter knows that Geoff is either a liar or a truth-teller (so either everything he says is false, or everything is true). Which is it?
3. What, if anything, can the waiter conclude about the ingredients in Geoff's desired calzone?

**Part 1:** $P$: Pepperoni. $Q$: Sausage. $R$: Quail. $S$: Ricotta cheese. Statement: $(Q \implies R) \lor ((P \lor R) \implies S)$.

**Part 2:** If Poshingten is lying, that means two things:

1. If he has sausage, he must not also include quail.
2. If he has pepperoni or quail, he must not also have ricotta cheese.
3. He does not want peperoni or sausage and in reality he is delusional.

**Part 3:** The waiter may need additional information before she can come to a conclusion.

## Problem 7

 Are the statements $P \implies (Q \lor R)$ and $(P \implies Q) \lor (P \implies R)$ logically equivalent?

Two statements are logically equivalent if their truth tables are the same:

$P \implies (Q \lor R)$:

``` txt
+-----+-----+-----+---------------+
|  p  |  q  |  r  |  p=>(q or r)  |
|-----+-----+-----+---------------|
|  1  |  1  |  1  |       1       |
|  1  |  1  |  0  |       1       |
|  1  |  0  |  1  |       1       |
|  1  |  0  |  0  |       0       |
|  0  |  1  |  1  |       1       |
|  0  |  1  |  0  |       1       |
|  0  |  0  |  1  |       1       |
|  0  |  0  |  0  |       1       |
+-----+-----+-----+---------------+
```

``` txt
+-----+-----+-----+--------------------+
|  p  |  q  |  r  |  (p=>q) or (p=>r)  |
|-----+-----+-----+--------------------|
|  1  |  1  |  1  |         1          |
|  1  |  1  |  0  |         1          |
|  1  |  0  |  1  |         1          |
|  1  |  0  |  0  |         0          |
|  0  |  1  |  1  |         1          |
|  0  |  1  |  0  |         1          |
|  0  |  0  |  1  |         1          |
|  0  |  0  |  0  |         1          |
+-----+-----+-----+--------------------+
```

Because the truth tables are same, the statements are logically equivalent.

## Problem 9

Use De Morgan's Laws, and any other logical equivalence facts you know to simplify the following statements. Show all your steps. Your final statements should have negations only appear directly next to the sentence variables or predicates (,$P$,$Q$,$E(x)$ etc.), and no double negations. It would be a good idea to use only conjunctions, disjunctions, and negations.

1. $\lnot((\lnot P \land Q) \lor \lnot(R \lor \lnot S))$
2. $\lnot((\lnot P \implies \lnot Q) \land (\lnot Q \implies R))$
3. For both parts above, verify your answers are correct using truth tables. That is, use a truth table to check that the given statement and your proposed simplification are actually logically equivalent.

**Part 1:**

$$
\lnot((\lnot P \land Q) \lor \lnot(R \lor \lnot S)) \\
\lnot(\lnot P \land Q) \land (R \lor \lnot S) \\
(P \lor \lnot Q) \land (R \lor \not S) \\
(Q \implies P) \land (S \implies R) \\
$$

**Part 2:**

$$
\lnot((\lnot P \implies \lnot Q) \land (\lnot Q \implies R)) \\
\lnot((P \implies Q) \land (\lnot Q \implies R)) \\
\lnot(P \implies Q) \lor \lnot(\lnot Q \implies R) \\
\lnot(P \lor \lnot Q) \lor \lnot(Q \lor R) \\
(\lnot P \land Q) \lor (\lnot Q \land \lnot R) \\
$$

**Part 3:**

Table for $\lnot((\lnot P \implies \lnot Q) \land (\lnot Q \implies R))$ and $(\lnot P \land Q) \lor (\lnot Q \land \lnot R)$:

``` txt
+-----+-----+-----+-----------------------------------------+-----------------------------+
|  p  |  q  |  r  |  ~((~p implies ~q) and (~q implies r))  |  (~p and q) or (~q and ~r)  |
|-----+-----+-----+-----------------------------------------+-----------------------------|
|  1  |  1  |  1  |                    0                    |              0              |
|  1  |  1  |  0  |                    0                    |              0              |
|  1  |  0  |  1  |                    0                    |              0              |
|  1  |  0  |  0  |                    1                    |              1              |
|  0  |  1  |  1  |                    1                    |              1              |
|  0  |  1  |  0  |                    1                    |              1              |
|  0  |  0  |  1  |                    0                    |              0              |
|  0  |  0  |  0  |                    1                    |              1              |
+-----+-----+-----+-----------------------------------------+-----------------------------+
```

Table for $\lnot((\lnot P \land Q) \lor \lnot(R \lor \lnot S))$ and $(Q \implies P) \land (S \implies R)$:

``` txt
+-----+-----+-----+-----+-------------------------------+-----------------------------------+
|  p  |  q  |  r  |  s  |  ~((~p and q) or ~(r or ~s))  |  (q implies p) and (s implies r)  |
|-----+-----+-----+-----+-------------------------------+-----------------------------------|
|  1  |  1  |  1  |  1  |               1               |                 1                 |
|  1  |  1  |  1  |  0  |               1               |                 1                 |
|  1  |  1  |  0  |  1  |               0               |                 0                 |
|  1  |  1  |  0  |  0  |               1               |                 1                 |
|  1  |  0  |  1  |  1  |               1               |                 1                 |
|  1  |  0  |  1  |  0  |               1               |                 1                 |
|  1  |  0  |  0  |  1  |               0               |                 0                 |
|  1  |  0  |  0  |  0  |               1               |                 1                 |
|  0  |  1  |  1  |  1  |               0               |                 0                 |
|  0  |  1  |  1  |  0  |               0               |                 0                 |
|  0  |  1  |  0  |  1  |               0               |                 0                 |
|  0  |  1  |  0  |  0  |               0               |                 0                 |
|  0  |  0  |  1  |  1  |               1               |                 1                 |
|  0  |  0  |  1  |  0  |               1               |                 1                 |
|  0  |  0  |  0  |  1  |               0               |                 0                 |
|  0  |  0  |  0  |  0  |               1               |                 1                 |
+-----+-----+-----+-----+-------------------------------+-----------------------------------+
```

The truth tables are the same, therefore the simplified versions are logically equivalent.

## Problem 11

Tommy Flanagan was telling you what he ate yesterday afternoon. He tells you, “I had either popcorn or raisins. Also, if I had cucumber sandwiches, then I had soda. But I didn't drink soda or tea.” Of course you know that Tommy is the worlds worst liar, and everything he says is false. What did Tommy eat?

Justify your answer by writing all of Tommy's statements using sentence variables ($P$, $Q$, $R$, $S$, $T$), taking their negations, and using these to deduce what Tommy actually ate.

**Solution:** $P$: Tommy ate popcorn. $Q$: Tommy ate raisins. $R$: Tommy ate cucumber sandwiches. $S$: Tommy had soda. $T$: Tommy had tea.

Translating this into variables gives us $(P \lor Q) \land (R \implies S) \land \lnot(S \lor T)$. However, if everything Tommy said is a lie, that means that each statement is a lie, which gives us $\lnot(P \lor Q) \land \lnot(R \implies S) \land (S \lor T)$. Now, we have to simplify it:

$$
\lnot(P \lor Q) \land \lnot(R \implies S) \land (S \lor T)
(\not P \land \not Q) \land \lnot(\lnot R \lor S) \land (S \lor T)
(\not P \land \not Q) \land (R \land \lnot S) \land (S \lor T)
$$

## Problem 13

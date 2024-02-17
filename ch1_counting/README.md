# Chapter 1: Counting

## 1.1 Addative and Multiplicative Principles

### Addative principle

Supose that at the restaurant Red Dogs and Donuts, there are 14 varieties of donuts and 16 varieties of hot dogs. If you want either a donut or a dog, how many options do you have?

The solution is easy; just add 14 and 16. This problem is an example of the **addative principle**:

The **addative principle** states that if even $A$ can occur in $m$ ways, and even $B$ can occur in $n$ *disjoint* ways, then the event "$A$ or $B$" can occur in $m + n$ different ways.

In this case, event $A$ is picking a hotdog at random. There are 14 ways that this can take place. Event $B$ entails picking a donut at random. If you pick either a hotdog or a donut at random, there are 30  items you could possibly end up with.

Note that for the addative principle to work, events $A$ and $B$ have to be *disjoint*, i.e. it should be impossible for both events to take place at the same time.

### Multiplicative Principle

Suppose that you are going to have some fro-yo. You can pick one of 6 yogurt choices along with one of 4 toppings. How many choices do you have in total?

Using the addative principle and considering each of the 6 yogurt choices to be a seperate event with 4 possiblilties, we can add $6+6+6+6=24$. However, it is much easier to multiply $6*4$. This is an example of the **multiplicative principle**:

The **multiplicative principle** states that if event $A$ can occur in $m$ ways, and each possibility for $A$ allows for exactly $n$ ways for event $B$, then the event "$A$ and $B$" can occur in $m*n$ ways.

### Counting With Sets

So far, we have described events using numbers that describe all possible occurences of those events. However, it is also possible to represent events as sets. Here is an example:

Suppose you have 9 shirts and 5 pairs of pants. How many outfits can you possibly wear? Using the multiplicative principle, we can multiply $9*5$ to get $45$. Now, let's use sets instead. The set $X$ contains all possible shirts, so $|X|=9$. The set $Y$ contains all possible pairs of pants, so $|Y|=5$. Then, we can do $|X|*|Y|=45$.

On the other hand, suppose you have to pick one article of clothing at random. This time, we can use the addative principle to do $|X|+|Y|=14$.

The **addative principle (with sets)** states that given two sets $A$ and $B$, if $A \cap B = \emptyset$ (i.e. $A$ and $B$ have no elements in common), then $A \cup B = |A| + |B|$.

For the multiplicative principle, on the other hand, we have to represent "$A$ and $B$" as ordered pairs of $(x,y)$. Doing so, we get the following rule:

The **cartesian product** states that given sets $A$ and $B$, we can form the set $A * B = {(x,y):x \in A \land y \in B}$.

The **multiplicative principle (with sets)** states that given two sets $A$ and $B$, we have $|A*B| = |A|*|B|$.

### Addative Principle with overlapping sets

Suppose we want to find $|A \cup B|$ and we know that $|A| = 20$ and $|B| = 15$. We also know that the two sets are *not* disjoint, and that $|A \cap B| = 5$. Using basic subraction, we can deduce that $|A \backslash B| = 20 - 5 = 15$ and that $|B \backslash A| = 15 - 5 = 10$. If we just use the normal addative principle, we get $|A| + |B| = 20 + 15 = 35$. However, this means that we are 5 off from the answer. This disparity gives us the **cardinality of a union**:

The **cardinality of union (using 2 sets)** states that for any finite sets $A$ and $B$, $|A \cup B| = |A| + |B| - |A \cap B|$.

This principle can also be applied to 3 sets:

The **cardinality of union (using 3 sets)** states that for any finite sets $A$, $B$ and $C$, $|A \cup B \cup C| = |A| + |B| + |C| - |A \cap B| - |A \cap C| - |B \cap C| + |A \cap B \cap C|$.

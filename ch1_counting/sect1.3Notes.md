# Section 1.3 Combinations and Permutations

## Permutations

A **permutation** is a possible rearranging of objects.

### Example problem 1.3.1

How many permutations are there of the letters $a$, $b$, $c$, $d$, $e$, $f$?

**Answer:** Since there are 6 letters, the answer is $6! = 6*5*3*2*1 = 720$ possible arrangements.

**Note:** There are always $n!$ permutations of $n$ distinct elements.

### $k$-permutations of $n$ elements

$P(n,k) is the number of $k$-permutations of $n$ elements. In other words, it is the number of ways to **arrange** $k$ objects chosen from $n$ distinct objects.

$$
P(n,k) = \frac{n!}{(n-k)!}
$$

Which is also equal to...

$n*(n-1)(n-2)...*(n-(k-1))$

## Combinations

So now we know how to arrange or *permute* objects from a set, but what about selecting $k$ objects from $n$? This can be done in ${n \choose k}$ ways. For each of those $k$ elements, we can arrange them in $k!$ ways. Using the multiplicative principle gives us this formula:

$$
P(n,k) = {n \choose k} * k!
$$

Since we alsready have a closed formula for $P(n,k)$, we can just subsitiute that in:

$$
P(n,k) = \frac{n!}{(n-k)!} = P(n,k) = {n \choose k} * k!
$$

If we divide both sides by $k!$, you can get a formula for ${n \choose k}$:

$$
{n \choose k} = \frac{n!}{(n-k)!k!}
$$

## Conclusion

We can conclude that while $P(n,k)$ counts *permutations*, which is about aranging objects, ${n \choose k}$ counts *combinations*, which is about selecting objects.

### Example 1.3.5

You decide to have a dinner party. Even though you are incredibly popular and have 14 different friends, you only have enough chairs to invite 6 of them.

1. How many choices do you have for which 6 friends to invite?

2. What if you need to decide not only which friends to invite but also where to seat them along your long table? How many choices do you have then?

**Solution for part 1:** ${14 \choose 6} = \frac{14!}{(14-6)!6!} = 3003$ choices for inviting 6 friends.

**Solution for part 2:** As said in part 1, there are $3003$ choices for inviting the friends. Along your table, there are $6! = 720$ ways of arranging the 6 friends. Using the multiplicative principle, we can multiply these two events together to find the total number of arrangements for all groups of friends: $720 * 3003 = 2162160$ choices.

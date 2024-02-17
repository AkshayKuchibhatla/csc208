# Section 1.1 Exercises

## Problem 1

Your wardrobe consists of 5 shirts, 3 pairs of pants, and 17 bow ties. How many different outfits can you make?

Using the multiplicative principle and considering set $A$ to represent the possible shirts, set $B$ to represent the possible pairs of pants and set $C$ to represent the possible bow ties, we can do $|A|*|B|*|C| = 5*3*17 = 255$ different outfits.

## Problem 2

For your college interview, you must wear a tie. You own 3 regular (boring) ties and 5 (cool) bow ties.

1. How many different choices do you have for neckwear?
2. You realize that the interview is for clown college, so you should probably wear both a regular tie and a bow tie. How many choices do you have now?
3. For the rest of your outfit, you have 5 shirts, 4 skirts, 3 pants, and 7 dresses. You want to select either a shirt to wear with a skirt or pants, or just a dress. How many outfits do you have to choose from?

**Solution to part 1:** Addative principle, set $A$ = regular ties; set $B$ = bow ties; $|A|+|B| = 5+3 = 8$ choices for neckwear.

**Solution to part 2:** Multiplicative principle, set $A$ = regular ties; set $B$ = bow ties; $|A|*|B| = 5*3 = 15$ choices.

**Solution to part 3:** Shirt with skirt OR pants = $5 * (4+3) = 35$ choices; 7 dresses = 7 choices; $7 + 35 = 42$ total choices.

## Problem 5

Suppose you have sets $A$ and $B$ with $|A| = 10$ and $|B| = 15$.

1. What is the largest possible value for $|A \cap B|$?
2. What is the smallest possible value for $|A \cap B|$?
3. What are the possible values for $|A \cup B|$?

**Soulution to part 1:** The largest possible value for $|A \cap B|$ would be $10$, because the sets can only have as many elements in common as the size of the smaller set.

**Solution to part2:** The smallest possible value for $|A \cap B|$ would be $0$, in which case $|A \cap B| = \emptyset$. This is because the smallest possible overlap between two sets is no overlap at all.

**Solution to part 3:** $|A \cup B| = |A| + |B| - |A \cap B|$. $|A| + |B| = 10 + 15 = 25$, and $0 \le |A \cap B| \le 10$. Therefore, $15 \le |A \cup B| \le 25$.

If $|A| = 8$ and $|B| = 5$, what is $|A \cup B| + |A \cap B|$?

## Problem 6

$|A \cup B| = 8 + 5 - |A \cap B|$; $|A \cup B| + |A \cap B| = 8 + 5 = 13$;

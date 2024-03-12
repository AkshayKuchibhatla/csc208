# Section 1.2 Exercises

## Problem 1

Let the set $S = \{1, 2, 3, 4, 5, 6\}$.

1. How many subsets are there total?
2. How many subsets have ${2, 3, 5}$ as a subset?
3. How many subsets contain at least one odd number?
4. How many subsets contain exactly one even number?

**Solution to part 1:** We can replace each element with a choice: should that element be included in a hypothetical subset? Yes or no? This leaves us with 2 options per element and $2^6=64$ different subsets.

**Solution to part 2:** This problem guarantees that the elements $\{2, 3, 5\}$ will definitely be in our subsets. A choice only remains for the remaining 3 elements, giving us $2^3=8$ different subsets that contain $\{2, 3, 5\}$.

**Solution to part 3:** We know that there are $2^6$ different subsets in total. However, because there are 3 even numbers in the set, there are $2^3=8$ possible subsets that contain only even numbers and no odd numbers. We can subtract this from the total number of subsets to get $2^6-2^3=64-8=56$ different subsets that contain at least one odd number.

**Solution to part 4:** $3*2^3 = 24$. Pick one even number, then say yes or no to all the odd numbers.

## Problem 2

Let set $S = \{1,2,3,4,5,6\}$.

1. How many subsets are there of cardinality 4?
2. How many subsets of cardinality 4 have $\{2,3,5\}$ as a subset?
3. How many subsets oc cardinality 4 contain at least one odd number?
4. How many subsets of cadinality 4 contain exactly one even number?

**Solution to part 1:** ${6 \choose 4} = 15$ subsets.

**Solution to part 2:** ${3 \choose 1} = 3$ subsets. After putting $\{2,3,5\}$ into the subset, one more element out of the remaining 3 elements is needed to complete the subset.

**Solution to part 3:** ${6 \choose 4} = 15 $ subsets. Since half the numbers in the set are odd, a subset of cardinality 4 must contain at least one odd number.

**Solution to part 4:** ${3 \choose 1} = 3$ subsets. Select 1 of the 3 even numbers. The remaining three odd numbers of $S$ must all be in the set.

## Problem 3

Let set $A = \{1,2,3,...,9\}$.

1. How many subsets of $A$ are there? That is, find $|P(A)|.$ Explain.
2. How many subsets of $A$ contain exactly 5 elements? Explain.
3. How many subsets of $A$ contain only even numbers? Explain.
4. How many subsets of $A$ contain an even number of elements? Explain.

**Solution to part 1:** We can consider each element of the set to be a choice whether or not to include it in the subset. That gives us 2 choices per element. $2^9 = 512$ possible sets.

**Solution to part 2:** ${9 \choose 5} = 126$ subsets.

**Solution to part 3:** We can replace each even number in set $A$ with 2 choices: whether to include that element in the set or not. Since there are 4 even elements ($2,4,6,8$), that gives us $2^4 = 16$.

**Solution to part 4:** The largest possible even subset of $A$ would be 8 elements long. So, combining all the subsets with even cardinalities gives us ${9 \choose 0} + {9 \choose 2} + {9 \choose 4} + {9 \choose 6} + {9 \choose 8} = 1 + 36 + 126 + 84 + 9 = 255$ subsets.

## Problem 4

How many 9-bit strings (that is, bit strings of length 9) are there which:

1. Start with the sub-string 101? Explain.
2. Have weight 5 (i.e., contain exactly five 1’s) and start with the sub-string 101? Explain.
3. Either start with 101 or end with 11 (or both)? Explain.
4. Have weight 5 and either start with 101 or end with 11 (or both)? Explain.

**Solution to part 1:** $2^6 = 64$ strings.

**Solution to part 2:** ${6 \choose 3} = 20$.

**Solution to part 3:** There are $2^6 = 64$ strings that start with 101. There are $2^7 = 128$ strings that end in 11. Finally, there are $2^4 = 16$ strings that meet both requirements. So, $64+128+16=208$ strings.

**Solution to part 4:** There are ${6 \choose 3} = 20$ strings that start with 101 and have a weight of 5. There are ${7 \choose 3} = 35$ strings with weight 5 that end with 11. There are ${4 \choose 2} = 6$ strings with weight 5 that meet both criteria.

## Problem 5

You break your piggy-bank to discover lots of pennies and nickels. You start arranging these in rows of 6 coins.

1. You find yourself making rows containing an equal number of pennies and nickels. For fun, you decide to lay out every possible such row. How many coins will you need?

2. How many coins would you need to make all possible rows of 6 coins (not necessarily with equal number of pennies and nickels)?

**Solution to part 1:** Each of the six coins in each row can be represented using 3 choices of whether each of the first 3 coins in the row will be either a penny or a nickel. We only use these choices for the first 3 coins because after the first 3 are selected, we know that the other 3 will just be the other type of coin so that the numbers of each coin are equal. 3 choices gives us $2^3 = 8$ different arrangements for a row where there is an equal number of pennies and nickels. We need 6 coins for each of these rows, so $6*8=48$ coins.

**Solution to part 2:** Each of the six coins in a row can be represented by a choice of whether it will be a penny or nickel. With 2 options per choice, that gives us $2^6=64$ different rows. We need 6 coins per row, so that gives us $64*6=384$ coins.

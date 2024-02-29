# Section 1.3 Exercises

## Problem 1

A pizza parlor offers 10 toppings.

1. How many 3-topping pizzas could they put on their menu? Assume double toppings are not allowed.

2. How many total pizzas are possible, with between zero and ten toppings (but not double toppings) allowed?

3. The pizza parlor will list the 10 toppings in two equal-sized columns on their menu. How many ways can they arrange the toppings in the left column?

**Solution to part 1:** ${10 \choose 3} = \frac{10!}{(10-3)!3!} = 120$ 3-topping pizzas.

**Solution to part 2:** If we take each topping to be a choice of yes or no of whether we want that topping in the pizza or not, that's 10 choices with 2 options each for a total of $2^10 = 1024$ possible pizzas.

**Solution to part 3:**This question is asking for all the different ways to arrange 5 toppings. That's $5! = 120$ different ways.

## Problem 5

Suppose you wanted to draw a quadrilateral using the dots below as vertices (corners). The dots are spaced one unit apart horizontally and two units apart vertically.

![Picture needed to understand problem 5](Quadrilateral_question.png)

1. How many quadrilaterals are possible?
2. How many are squares?
3. How many are rectangles?
4. How many are parallelograms?
5. How many are trapezoids? (Here, as in calculus, a trapezoid is defined as a quadrilateral with at least one pair of parallel sides. In particular, parallelograms are trapezoids.)
6. How many are trapezoids that are not parallelograms?

**Solution to part 1:** A quadrilateral is any combination of 4 dots, 2 of which are on one line and 2 of which are on the other. This is the minimum requirement for a quadrilateral. So, we can take all the possible selection of 2 dots from each line and multiply them to get all possible quadrilaterals using the multiplicative principle:

$$
{10 \choose 2} * {10 \choose 2} = 45^2 = 2025
$$

There are $2025$ quadrilaterals possible.

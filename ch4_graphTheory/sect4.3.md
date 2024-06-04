# 4.3 Planar Graphs

## Problem 1

### Is it possible for a planar graph to have 6 vertices, 10 edges and 5 faces? Explain

> In this case, $v = 6$, $e = 10$ and $f = 5$. According to Euler's theorem, $v - e + f = 2$. $6 - 10 + 5 = 1 \ne 2$, therefore it is impossible for a planar graph to have 6 vertices, 10 edges and 5 faces.

## Problem 2

### The graph $G$ has 6 vertices with degrees $2, 2, 3, 4, 4, 5$. How many edges does $G$ have? Could $G$ be planar? If so, how many faces would it have. If not, explain

> $v = 6$ and $e = \frac{2 + 2 + 3 + 4 + 4 + 5}{2} = \frac{20}{2} = 10$. According to Euler's theorem, $e \le 3v - 6$. $3(6) - 6 = 12$, and $10 < 12$. Therefore, this graph can, indeed, be planar. If it was, because $v - e + f = 2$, we can solve for the edges:
>
> $6 - 10 + f = 2$
> $f - 4 = 2$
> $f = 6$
>
> Therefore, such a planar graph would have 6 faces.

## Problem 3

### Is it possible for a connected graph with 7 vertices and 10 edges to be drawn so that no edges cross and create 4 faces? Explain

> For the graph to be planar with $v = 7$ and $e = 10$, It has to satisfy $e \le 3v - 6$. $3v - 6 = 3(7) - 6 = 15$, and $10 < 15$. Therefore, this graph can be planar.
>
> Furthermore, we can solve for the number of faces:
>
> $v - e + f = 2$
> $7 - 10 + f = 2$
> $f - 3 = 2$
> $f = 5$
>
> A graph with 7 vertices and 10 edges drawn as a planar graph must have 5 faces. Therefore, it is impossible to draw it with only 4 and for it to be planar and connected at the same time.

[Dane will now cover problems 4, 5 and 6.](https://github.com/dane16/csc208/blob/main/Chap4prob5-7.md)

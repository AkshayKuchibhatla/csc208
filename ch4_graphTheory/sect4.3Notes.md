# 4.3 Planar Graphs

## Introduction

A **planar graph** is any graph that is possible to redraw with none of the edges overlapping. It is as if all the edges are on one "plane."

Here's an example of a planar graph:

![Image of graph](4.3Images/4.3Image1.png)

It has overlapping edges, but it can be redrawn in a way that it doesn't:

![Image of graph](4.3Images/4.3Image2.png)

This second graph is simply a **planar representation** of the first one.

## Faces

When the planar representation of a graph is drawn, the edges and vertices divide the plane into multiple regions, each of which is called a **face**. You can only count faces on a planar representation!

![Image of graph](4.3Images/4.3Image3.png)

If you try to count the faces on the graph that is on the left, you'll see there are 5 (if you count the area outside the square as a face). However, if you draw the planar representation of the graph, you would see that there are only 4 faces.

## Euler's Formula for Planar Graphs

For any connected planar graph with $v$ vertices, $e$ edges and $f$ faces, we have:

$$
v - e + f = 2
$$

We can prove this formula. Imagine the following graph $P_2$:

![Image of graph](4.3Images/4.3Image4.png)

One by one, we can start to add vertices and edges to this graph:

![Image of graph](4.3Images/4.3Image5.png)

Each time we add to the graph, we can do one of two things: either we can add one vertex with an edge connecting it to the graph (left) OR we can add an edge between two existing vertices (right):

![Image of graph](4.3Images/4.3Image6.png)

Let's look at each of these "moves" from a mathematical perspective:

Adding one vertex with an edge connecting it to the graph increases the number of vertices ($v$) by one and increases the number of edges ($e$) by one. We can plug this into Euler's formula to get the following:

$$
v - e + f = 2 \\
(v + 1) - (e + 1) + f = 2 \\
v + 1 - e - 1 + f = 2 \\
v - e + f = 2 \\
$$

The formula is still true.

Adding an edge between two existing vertices increases the number of faces ($f$) by one and increases the number of edges ($e$) by one. We can plug this into Euler's formula to get the following:

$$
v - e + f = 2 \\
v - (e + 1) + (f + 1) = 2 \\
v - e - 1 + f + 1 = 2 \\
v - e + f = 2 \\
$$

The formula is still true.

Therefore, Euler's formula will always hold true for a planar graph.

## Maximum Planar Graphs

A planar graph is called **maximum planar** if adding an edge between any two non-adjacent vertices results in a non-planar graph.

Take this graph for example:

![Image of graph](4.3Images/4.3Image7.png)

If we draw an edge between the only two vertices that aren't connected (i.e. the top left and top right ones), that edge will overlap with the other, thus making the graph non-planar.

Also note that every face of the planar graph is a triangle.

### Theorem for Maximum Planar Graphs

If the graph $G$ is a planar graph with $e$ edges and $v$ vertices, we have the following:

$$
e = 3v - 6
$$

We can prove this. Let's say we have a planar graph $G$ with $f$ faces. Each of the faces is a triangle; therefore, we can sum up the edges of all these faces to get a total of $3f$ edges. However, becuase edges share faces, this counts each edge twice. Therefore, $3f = 2e$, and $f = \frac{2e}{3}$. We can substitute this into the original formula for planar graphs:

$$
v - e + f = 2 \\
v - e + \frac{2e}{3} = 2 \\
3v - 3e + 2e = 6 \\
3v - e = 6 \\
e = 3v - 6 \\
$$

### Corollary

If the graph $G$ is a planar graph with $e$ edges and $v$ vertices, then $e \le 3v - 6$.

This makes sense, because $3v - 6$ is the number of edges for a *maximum* planar graph; there can be fewer edges.

## Non-planar Graphs

Some graphs are not planar and can never be planar. For example, **$K_5$ is not planar.**

![Image of graph](4.3Images/4.3Image8.png)

We can prove this using proof by contradiction:

> Let's say $K_5$ is planar. If it is, it must satisfy the theorem for planar graphs: that a planar graph with $v$ vertices would have at most $3v - 6$ edges. $K_5$ has 5 vertices and ${5 \choose 2} = 10$ edges. We can plug this into the formula:
>
> $3(5) - 6 \ge 10 \\$
> $15 - 6 \ge 10 \\$
> $9 \ge 10 \\$
>
> A planar graph with 5 edges should have a maximum of only 9 edges, but $K_5$ has 10. That is impossible. Therefore, we have a proof by contradiction.

In addition to $K_5$, $K_{3,3}$ is *also* not planar.

![Image of graph](4.3Images/4.3Image9.png)

We can prove this using proof by contradiction:

> Let's say that $K_{3,3}$ is planar. If it is, then because $e = 9$ and $v = 6$. Because $v - e + f = 2$, $f = 5$.
>
> Next, let $B$ be the number of edges surrounding those 5 faces. Since each edge is used twice by a face, $B = 2e$. Also, because $K_{3,3}$ is bipartite, 3-edge cycles are impossible and therefore each face must be surrounded by at least 4 edges. In other words, $B \ge 4f$. Subbing in $2e$ for $B$ gives us $2e \ge 4f$.
>
> But this would mean saying that $18 \ge 20$, which is not true. Therefore, we have a proof by contradiction.

## Polyhedra

A **polyhedron** is a geometric solid made up of flat polygonal faces jointed at edges and vertices.

A **convex polyhedron** is a polyhedron in which any line segment connecting two points of the interior of the polyhedron should be on its interior.

Take a cube for example. Let's say we take that cube, put it on a table, and smash it flat. The bottom of the cube would spread out. We can depict this in a graph:

![Image of graph](4.3Images/4.3Image10.png)

Note that this grave has 8 vertices, 12 edges and 6 faces, and that $8 - 12 + 6 = 2$. This is not a coincidence: **everything we know about graphs, specifically planar graphs, can be applied to polyhedrons**.

### Regular Polyhedra

A **regular polyhedron** is a polyhedron in which all the faces are identical polygons. In such graphs, each vertex has the same degree.

Only 5 regular polyhedra can exist, a statement we can prove with graph theory and proof by cases:

![Image of proof](4.3Images/4.3Image11.png)

## References

1. [Graph Theory: 59. Maximal Planar Graphs by Sarada Herke](https://youtu.be/_d_6JvceAwE?list=PLGxuz-nmYlQPgIHbqWtgD-F7NnJuqs4fH)
2. [Maximal planar graphs by The City University of New York](http://people.qc.cuny.edu/faculty/christopher.hanusa/courses/pages/634fa09/notes/ch8-2.pdf)
3. [Graph Theory: 60. Non Planar Graphs by Sarada Herke](https://www.youtube.com/watch?v=-m6Dq7v9ToM)
4. [4.3 Planar Graphs from Discrete Mathematics: An Open Introduction, 3rd edition, By Oscar Levin](https://discrete.openmathbooks.org/dmoi3/sec_planar.html)
5. [Graph Theory 5: Polyhedra, Planar Graphs, & F-E+V=2 by Math at Andrews University](https://youtu.be/qCDZ5azvmrk)

[4.3 Problems](sect4.3.md)

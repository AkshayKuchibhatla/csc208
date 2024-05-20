# 4.2 Trees

## Definition of Trees

A **tree** is a connected graph containing no cycles.

A **forest** is a graph containing no cycles. A connected forest is a tree.

## Properties of Trees

**Proposition 4.2.1:** A graph $T$ is a tree if and only if between every pair of distinct vertices of $T$ there is a unique path.

**Corollary 4.2.2:** A graph $F$ is a forest if and only if between any pair of vertices in $F$ there is at most one path.

**Proposition 4.2.3:** Any tree with at least two vertices has at least two vertices of degree one.

**Proposition 4.2.4:** Let $T$ be a tree with $v$ vertices and $e$ edges. Then $ e = v - 1$.

## Rooted Trees

- Rooted trees involve designating one particular vertex as a **root**.
- This puts the vertices in a certain order and determines each vertex's position relative to the root.
- Between two vertices, there is only one distict path, so from any vertex we can travel back to the root in exactly one way.
- Between two adjacent vertices, one of them is the **parent** and the other is the **child** of the parent.

## Spanning Trees

Given a connected graph $G$, a **spanning tree** of $G$ is a subgraph of $G$ which is a tree and includes all the vertices of $G$.

Every connected graph has a spanning tree.

You can find a spanning tree in any graph using the following algorithm:

1. Start with a connected graph $G$. If there are no cycles in this graph, $G$ is already a tree and you are done.
2. If there is a cycle, let $e$ be any edge in that cycle and delete it from $G$. Because $e$ was connected to two and two paths, the graph is still connected.
3. If there are no more cycles, the graph is a tree. If there are still cycles, repeat step two until there aren't.

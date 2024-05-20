# Section 4.2 Exercises

## Problem 12

### Unless it is already a tree, a given graph $G$ will have multiple spanning trees. How similar or different must these be?

#### Part (12a)

Must all spanning trees of a given graph be isomorphic to each other? Explain why or give a counterexample.

> The spanning trees do NOT have to all be isomorphic.
>
> Let's say that we have a graph $G$, which contains one cycle. In order to make $G$ into a tree, we select one vertex from that graph and delete it. However, we can select any one of the vertices in the cycle, which means that the different spanning trees that come as a result of deleting different vertices do not have identical sets of edges and are therefore not isomorphic.

#### Part (12b)

Must all spanning trees of a given graph have the same number of edges? Explain why or give a counterexample.

> Not all spanning trees of a given graph must have the same number of edges, because in a given cycle it is possible to delete more than one edge and keep the graph connected.
>
> This means that while making different spanning trees we can delete different numbers of edges from the cycles.

#### Part (12c)

Must all spanning trees of a graph have the same number of leaves (vertices of degree 1)? Explain why or give a counterexample.

> Not all spanning trees must have the same number of leaves because we can create different numbers of leaves by deleting different vertices in the cycle.

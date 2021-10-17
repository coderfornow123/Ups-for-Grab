#!/usr/bin/python
from __future__ import annotations


class Graph:
    def __init__(self) -> None:
        self.vertices: dict[int, list[int]] = {}

    def print_graph(self) -> None:
        for i in self.vertices:
            print(i, " : ", " -> ".join([str(j) for j in self.vertices[i]]))

    def add_edge(self, from_vertex: int, to_vertex: int) -> None:
        if from_vertex in self.vertices:
            self.vertices[from_vertex].append(to_vertex)
        else:
            self.vertices[from_vertex] = [to_vertex]

    def bfs(self, start_vertex: int) -> set[int]:
        # initialize set for storing already visited vertices
        visited = set()

        # create a first in first out queue to store all the vertices for BFS
        queue = []

        # mark the source node as visited and enqueue it
        visited.add(start_vertex)
        queue.append(start_vertex)

        while queue:
            vertex = queue.pop(0)

            # loop through all adjacent vertex and enqueue it if not yet visited
            for adjacent_vertex in self.vertices[vertex]:
                if adjacent_vertex not in visited:
                    queue.append(adjacent_vertex)
                    visited.add(adjacent_vertex)
        return visited


if __name__ == "__main__":
    from doctest import testmod

    testmod(verbose=True)

    g = Graph()
    g.add_edge(0, 1)
    g.add_edge(0, 2)
    g.add_edge(1, 2)
    g.add_edge(2, 0)
    g.add_edge(2, 3)
    g.add_edge(3, 3)

    g.print_graph()
    assert sorted(g.bfs(2)) == [0, 1, 2, 3]

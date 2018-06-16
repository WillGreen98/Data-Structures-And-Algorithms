//
// Created by Will  on 16/06/2018.
//

#include <iostream>
#include <vector>

#include "Depth_First_Search.h"

Depth_First_Search::Depth_First_Search() {
    std::cout << "I am an example of a Depth First Search Algorithm" << std::end;
}

class Graph {
    int vertex = 0;
    std::vector<int> *adjacent_lists;

    public:
        explicit Graph(int vertex);
        void edge_add(int vertex, int edge);
        bool DFSVisited(int vertex, bool visited[]);
        void DFS();

    explicit Graph(std::vector<int> *adjacent_lists) : adjacent_lists(adjacent_lists) {}

};

Graph::Graph(int vertex) {
    this->vertex = vertex;
    adjacent_lists = new std::vector<int>[vertex];
}

void Graph::edge_add(int vertex, int edge) {
    adjacent_lists[vertex].push_back(edge);
}

bool Graph::DFSVisited(int vertex, bool visited[]) {
    visited[vertex] = true;

    for(int &i : adjacent_lists[vertex]) {
        if(!visited[i]) { DFSVisited(i, visited); }
    }
}

void Graph::DFS() {
    auto visited = new bool[vertex];

    for(int i=0; i < vertex; i++) {
        visited[i] ? !visited[i] : DFSVisited(i, visited);
    }
}


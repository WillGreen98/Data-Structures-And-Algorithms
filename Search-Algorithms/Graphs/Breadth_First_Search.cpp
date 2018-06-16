//
// Created by Will  on 16/06/2018.
//

#include <iostream>
#include <vector>

#include "Breadth_First_Search.h"

Breadth_First_Search::Breadth_First_Search() {
    std::cout << "I am an example of a Breadth First Search Algorithm" << std::endl;
}

class Graph {
    int vertex = 0;
    std::vector<int> *adjacent_lists;

public:
    explicit Graph(int vertex);
    void edge_add(int vertex, int edge);
    void BFS(int size);

    explicit Graph(std::vector<int> *adjacent_lists) : adjacent_lists(adjacent_lists) {}
};

Graph::Graph(int vertex) {
    this->vertex = vertex;
    adjacent_lists = new std::vector<int>[vertex];
}

void Graph::edge_add(int vertex, int edge) {
    adjacent_lists[vertex].push_back(edge);
}

void Graph::BFS(int size) {
    std::vector<int> BFS_queue;
    auto *visited = new bool[vertex];

    for(int i=0; i < vertex; i++) {
        visited[i] = false;
    }

    visited[size] = true;
    BFS_queue.push_back(size);

    while(!BFS_queue.empty()) {
        size = BFS_queue.front();

        for (int &itr : adjacent_lists[size]) {
            if(!visited[itr]) {
                visited[itr] = true;
                BFS_queue.push_back(itr);
            }
        }
    }

}
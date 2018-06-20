//
// Created by Will  on 20/06/2018.
//

#include <iostream>

#include "Stack.h"

Stack::Stack() {
    std::cout << "I am an example of a Stack" << std::endl;
}

struct Node {
    int d_value;
    struct Node *next;
};

template<typename T>
Node newNode(T *d_value) {
    Node *node = new Node();

    node->d_value = *d_value;
    node->next = nullptr;

    return *node;
};

template<typename T>
class Stack_List {
    int d_value;
    int top;

    public:
        int d_max[500];

        Stack_List() {
            top = -1;
        }

    int pop() {
        if(top < 0 ) {
            return 0;
        } else {
            T d_value = d_max[top--];
            return d_value;
        }
    };

    bool push(T *d_value) {
        if(top > 500) { // d_max is weird
            return false;
        } else {
            *d_value = d_max[top++];
            return true;
        }
    }

    bool isEmpty() { return top < 0; }
};


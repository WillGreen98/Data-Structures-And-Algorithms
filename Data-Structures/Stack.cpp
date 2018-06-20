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
Node *newNode(T *d_value) {
    Node *node = new Node();

    node->d_value = *d_value;
    node->next = nullptr;

    return node;
};

template<typename T>
class Stack_List {
    public:
        static const int d_max[500];
        T *d_value;
        int top;

        Stack_List() {
            top = -1;
        }

    bool isEmpty() { return top < 0; }
    bool isStacked_Max() { if(top == *d_max - 1) { return true; } }

    int pop() {
        if(isEmpty()) {
            std::cout << "Stack Underflow" << std::endl;
            return 0;
        } else {
            this->d_value = (T *)d_max[top--];
            return reinterpret_cast<int>(d_value);
        }
    };

    void push(T *d_value) {
        if(isStacked_Max()) {
            std::cout << "Stack Overflow" << std::endl;
        } else {
            *d_value = d_max[top++];
        }
    }
};


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
Node *newNode(T d_value) {
    Node *node = new Node();

    node->d_value = *d_value;
    node->next = nullptr;

    return node;
};

template<typename T>
class Stack_List {
    public:
        int top;

        Stack_List() {
            top = -1;
        }

    bool isEmpty(Node *root) { return !root; }
    int isStacked_Max(Node *root) { if(isEmpty(root)) {return root->d_value; } }

    int pop(Node **root) {
        if(isEmpty(*root)) { return INT_MIN; }

        Node *temp = *root;
        *root = (*root)->next;

        int popped = temp->d_value;
        free(temp);

        return popped;
    };

    void push(Node **root, T d_value) {
        auto *node = newNode(d_value);

        node->next = *root;
        *root = node;
    }
};


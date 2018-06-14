//
// Created by Will  on 13/06/2018.
//

#include <iostream>

#include "Linked_List.h"

Linked_List::Linked_List() {
    std::cout << "I am an example of a Linked List" << std::endl;
}

struct Node {
    int data;
    struct Node *seq_next; // Singly
    struct Node *seq_prev; // Doubly
};

class node_list {
    private:
        Node *head;
        Node *tail;
    public:
        node_list() {
            head = NULL;
            tail = NULL;
        }

    void node_initialisation(int d_value) {
        struct Node *node = new node;

        node->data = d_value;
        node->seq_prev = NULL;
        node->seq_next = NULL;

        if(head == NULL) {
            head = node;
            tail = node;
            node = NULL;
        } else {
            tail->seq_prev = NULL;
            tail->seq_next = node;
            tail = node;
        }
    }
    
    void display() {
        Node *node = new Node();
        node = head;

        while(node != NULL) {
            std::cout << node->data << std::endl;
            node = node->data;
        }
    }
};

void linked_list() {}
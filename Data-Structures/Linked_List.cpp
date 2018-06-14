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

    void node_start(int d_value) {
        Node *node = new Node();

        node->data = d_value;
        node->seq_prev = NULL;
        node->seq_next = head;
        head = node;
    }

    void node_add(int index, int d_value) {
        Node *node = new Node();
        Node *current_node = new Node();
        Node *previous_node = new Node();

        current_node = head;

        for(int i=1; i < index; i++) {
            previous_node = current_node;
            current_node = current_node->seq_next;
        }

        node->data = d_value;
        previous_node->seq_next = node;
        node->seq_next = current_node;
    }

    void node_delete(int index) {
        Node *current_node = new Node();
        Node *previous_node = new Node();

        current_node = head;

        for(int i=0; i < index; i++) {
            previous_node = current_node;
            current_node = current_node->seq_next;
        }

        previous_node->seq_next = current_node->seq_next;
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
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
            head = nullptr;
            tail = nullptr;
        }

    void node_initialisation(int d_value) {
        Node *node = new Node();

        node->data = d_value;
        node->seq_prev = nullptr;
        node->seq_next = nullptr;

        if(head == nullptr) {
            head = node;
            tail = node;
            node = nullptr;
        } else {
            tail->seq_prev = nullptr;
            tail->seq_next = node;
            tail = node;
        }
    }

    void node_start(int d_value) {
        Node *node = new Node();

        node->data = d_value;
        node->seq_prev = nullptr;
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

    Node node_get(int index) {
        Node *iterator = new Node();

        for(int i=0; i < index; i++) {
            iterator = iterator->seq_next;
        }

        return *iterator;
    }

    void node_display() {
        Node *node = new Node();
        node = head;

        while(node != nullptr) {
            std::cout << node->data << std::endl;
            node = reinterpret_cast<Node *>(node->data);
        }
    }
};

void linked_list() {}
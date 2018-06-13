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
    struct Node *next;
};

void linked_list() {
    struct Node* head = NULL;
    struct Node* tail = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    tail = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = tail;
}
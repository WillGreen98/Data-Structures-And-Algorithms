//
// Created by Will  on 16/06/2018.
//

#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

#include "Red_Black_Tree.h"

Red_Black_Tree::Red_Black_Tree() {
    std::cout << "I am an example of a Red Black Tree" << std::endl;
}

enum Colour {BLACK = (int) "\033[30m",
            RED = (int) "\033[31m",
            RESET = (int) "\033[0m"
};

struct Node {
    int value;
    enum Colour colour;
    struct Node *parent;
    struct Node *left_branch{};
    struct Node *right_branch{};

    explicit Node(int value) {
        this->value = value;
    }
};

struct Node *NewNode(int d_value) {
    auto *node = new Node(5);

    node->value = d_value;
    node->left_branch = node->right_branch = nullptr;

    return node;
};

Node *RBT_GrandParent(Node *node) {
    if(node == nullptr || node->parent == nullptr || node->parent->parent == nullptr) { return node; }

    return node->parent->parent;
}

Node *RBT_Parent(Node *node) {
    return node->parent;
}

Node *RBT_Sibling(Node *node) {
    if(node == nullptr || node->parent == nullptr) { return node; }

    node == node->parent->left_branch ? node->parent->left_branch : node->parent->right_branch;
}

Node *RBT_Uncle(Node *node) {
    if(node == nullptr || node->parent == nullptr || node->parent->parent == nullptr) { return node; }

    return RBT_Sibling(node->parent);
}

void RBT_rotate_left(Node *node) {
    struct Node *node_init = node->right_branch;
    node->right_branch = node_init->left_branch;
    node_init->left_branch = node;
    node_init->parent = node->parent;
    node->parent = node_init;
}

void RBT_rotate_right(Node *node) {
    struct Node *node_init = node->left_branch;
    node->left_branch = node_init->right_branch;
    node_init->right_branch = node;
    node_init->parent = node->parent;
    node->parent = node_init;
}

bool RBT_balance(Node *node, int &height_max, int &height_min) {
    int left_height_max, left_height_min;
    int right_height_max, right_height_min;

    if(node == nullptr) { height_max = height_min = 0; }

    if(!RBT_balance(node->left_branch, left_height_max, left_height_min)) { return false; }
    if(!RBT_balance(node->right_branch, right_height_max, right_height_min)) { return false; }

    height_max = std::max(left_height_max, right_height_max);
    height_min = std::max(left_height_min, right_height_min);

    return height_max <= (height_min * 2);
}

bool RBT_isBalanced(Node *node) {
    int height_max, height_min;
    return RBT_balance(node, height_max, height_min);
}
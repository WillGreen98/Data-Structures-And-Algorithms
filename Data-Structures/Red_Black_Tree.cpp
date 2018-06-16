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

enum Color {BLACK = (int) "\033[30m",
            RED = (int) "\033[31m",
            RESET = (int) "\033[0m"
};

struct Node {
    int value;
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
//
// Created by Will  on 14/06/2018.
//

#include <iostream>

#include "Binary_Tree.h"

Binary_Tree::Binary_Tree() {
    std::cout << "I am an example of a Binary Tree" << std::endl;
}

struct Node {
    int value;
    struct Node *left_branch;
    struct Node *right_branch;
    
    Node(int value) {
        this->value = value;
    }
};

struct Node *NewNode(int d_value) {
    struct Node *node = new Node();

    node->value = d_value;
    node->left_branch = node->right_branch = NULL;

    return node;
};

void BST_inorder(struct Node *BST_Root) {
    if(BST_Root != NULL) {
        BST_inorder(BST_Root->left_branch);
        std::cout << BST_Root->value;
        BST_inorder(BST_Root->left_branch);
    }
}

struct Node *BST_insert(struct Node *node, int value) {
    if(node == NULL) return NewNode(value);

    if(value < node->value) {
        node->left_branch = BST_insert(node->left_branch, value);
    } else if (value > node->value) {
        node->right_branch = BST_insert(node->right_branch, value);
    }

    return node;
}

int node_search(struct Node *node, int d_target) {
    if(node == NULL) {
        return false;
    } else {
        if(d_target < node->value) {
            return node_search(node->left_branch, d_target);
        } else {
            return node_search(node->right_branch, d_target);
        }
    }
}

int node_size(struct Node *node) {
    if(node == NULL) {
        return 0;
    } else {
        return node_size(node->left_branch) + 1 + node_size(node->right_branch);
    }
}

int node_display(struct Node *node) {
    if(node == NULL) { return 0; }

    node_display(node->right_branch);
    std::cout << node->value;
    node_display(node->right_branch);
}

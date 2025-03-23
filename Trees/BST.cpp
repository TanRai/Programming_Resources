#include<bits/stdc++.h>
using namespace std;
// Binary Search Tree Node
struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = nullptr;
    }
};

// Function to insert a new node with given value in BST
Node* insert(Node* root, int val) {
    if (!root) {
        return new Node(val);
    }
    if (val < root->val) {
        root->left = insert(root->left, val);
    } else {
        root->right = insert(root->right, val);
    }
    return root;
}

// Function to search for a value in BST
bool search(Node* root, int val) {
    if (!root) {
        return false;
    }
    if (root->val == val) {
        return true;
    }
    if (val < root->val) {
        return search(root->left, val);
    } else {
        return search(root->right, val);
    }
}

// Function to find the minimum value in BST
Node* findMin(Node* root) {
    while (root && root->left) {
        root = root->left;
    }
    return root;
}

// Function to find the maximum value in BST
Node* findMax(Node* root) {
    while (root && root->right) {
        root = root->right;
    }
    return root;
}

// Function to delete a node from BST
Node* deleteNode(Node* root, int val) {
    if (!root) {
        return nullptr;
    }
    if (val < root->val) {
        root->left = deleteNode(root->left, val);
    } else if (val > root->val) {
        root->right = deleteNode(root->right, val);
    } else {
        // Node with only one child or no child
        if (!root->left) {
            return root->right;
        } else if (!root->right) {
            return root->left;
        }
        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* minNode = findMin(root->right);
        root->val = minNode->val; // Copy the inorder successor's content to this node
        root->right = deleteNode(root->right, minNode->val); // Delete the inorder successor
    }
    return root;
}
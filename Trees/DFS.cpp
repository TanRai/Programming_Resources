#include<bits/stdc++.h>
using namespace std;

// Binary Tree Node
struct Node {
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        left = right = nullptr;
    }
};
// Function to perform DFS traversal inorder
void dfsInorder(Node* root) {
    if (!root) return;
    dfsInorder(root->left);
    cout << root->val << " ";
    dfsInorder(root->right);
}

// Function to perform DFS traversal preorder
void dfsPreorder(Node* root) {
    if (!root) return;
    cout << root->val << " ";
    dfsPreorder(root->left);
    dfsPreorder(root->right);
}

// Function to perform DFS traversal postorder
void dfsPostorder(Node* root) {
    if (!root) return;
    dfsPostorder(root->left);
    dfsPostorder(root->right);
    cout << root->val << " ";
}

// Function to perform DFS traversal reverse order
void dfsReverse(Node* root) {
    if (!root) return;
    cout << root->val << " ";
    dfsReverse(root->right);
    dfsReverse(root->left);
}

// Function to perform DFS traversal level order
void dfsLevelOrder(Node* root) {
    if (!root) return;
    queue<Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* node = q.front();
        q.pop();
        cout << node->val << " ";
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}


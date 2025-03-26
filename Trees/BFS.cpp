#include <bits/stdc++.h>
using namespace std;

struct Node {
  int val;
  Node* left;
  Node* right;

  Node(int val) {
      this->val = val;
      left = right = nullptr;
  }
};

// Function to perform BFS on a tree
void bfs(Node *root)
{
  if (!root)
    return;

  queue<Node *> q;
  q.push(root);
  while (!q.empty())
  {
    int size = q.size();
    for (int i = 0; i < size; i++)
    {
      Node *cur = q.front();
      cout << cur->val << " ";
      q.pop();
      if (cur->left)
        q.push(cur->left);
      if (cur->right)
        q.push(cur->right);
      
    }
  }
}

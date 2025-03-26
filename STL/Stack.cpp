#include<bits/stdc++.h>
using namespace std;

int main(){
  // Declare a stack of integers
  stack<int> s;

  // Push elements onto the stack
  s.push(10);
  s.push(20);
  s.push(30);

  // Print the top element of the stack
  cout << "Top element: " << s.top() << endl;

  // Pop an element from the stack
  s.pop();

  // Print the top element after popping
  cout << "Top element after pop: " << s.top() << endl;

  // Check if the stack is empty
  if (s.empty()) {
      cout << "Stack is empty." << endl;
  } else {
      cout << "Stack is not empty." << endl;
  }

  // Stack from vector
  vector<int> vec = {1, 2, 3, 4, 5};

  return 0;
}
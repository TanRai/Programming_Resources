#include<bits/stdc++.h>
using namespace std;

int main(){
  // Declare a queue of integers
  queue<int> q;

  // Push elements onto the queue
  q.push(10);
  q.push(20);
  q.push(30);

  // Print the front element of the queue
  cout << "Front element: " << q.front() << endl;

  // Pop an element from the queue
  q.pop();

  // Print the front element after popping
  cout << "Front element after pop: " << q.front() << endl;

  // Check if the queue is empty
  if (q.empty()) {
      cout << "Queue is empty." << endl;
  } else {
      cout << "Queue is not empty." << endl;
  }

  // Queue from vector
  vector<int> vec = {1, 2, 3, 4, 5};

  return 0;
}
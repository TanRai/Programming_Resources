#include<bits/stdc++.h>
using namespace std;

int main(){
  // Declare a priority queue of integers
  priority_queue<int> pq; //max heap by default

  // Push elements onto the priority queue
  pq.push(30);
  pq.push(10);
  pq.push(20);

  // Print the top element of the priority queue
  cout << "Top element: " << pq.top() << endl;

  // Pop an element from the priority queue
  pq.pop();

  // Print the top element after popping
  cout << "Top element after pop: " << pq.top() << endl;

  // Check if the priority queue is empty
  if (pq.empty()) {
      cout << "Priority queue is empty." << endl;
  } else {
      cout << "Priority queue is not empty." << endl;
  }

  // Priority queue from vector
  vector<int> vec = {1, 2, 3, 4, 5};
  priority_queue<int> pq2(vec.begin(), vec.end());

  // Min heap
  priority_queue<int, vector<int>, greater<int>> minHeap;
  minHeap.push(30);
  minHeap.push(10);
  minHeap.push(20);
  cout << "Min heap top element: " << minHeap.top() << endl;
  minHeap.pop();
  cout << "Min heap top element after pop: " << minHeap.top() << endl;
  cout << "Min heap size: " << minHeap.size() << endl;

  // heapify a vector
  vector<int> v = {5, 2, 8, 1, 3};
  make_heap(v.begin(), v.end());
  cout << "Heapified vector: ";
  for (int i : v) {
      cout << i << " ";
  }

  //priority queue with custom comparator
  struct CustomCompare {
      bool operator()(const pair<int, int>& a, const pair<int, int>& b) {
          return a.first < b.first; // Min heap based on the first element of the pair
      }
  };

  priority_queue<pair<int, int>, vector<pair<int, int>>, CustomCompare> customPQ;// Costructor type,container,comaparator
  customPQ.push({3, 1});
  customPQ.push({1, 2});
  customPQ.push({2, 3});
  cout << "Custom priority queue top element: " << customPQ.top().first << endl;

  return 0;

}
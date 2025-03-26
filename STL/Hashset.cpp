#include<bits/stdc++.h>
using namespace std;

int main(){
  // Declare a hash set of integers
  unordered_set<int> hashSet;

  // Insert elements into the hash set
  hashSet.insert(10);
  hashSet.insert(20);
  hashSet.insert(30);

  // Print the size of the hash set
  cout << "Size of hash set: " << hashSet.size() << endl;

  // Check if an element exists in the hash set
  if (hashSet.find(20) != hashSet.end()) {
      cout << "20 exists in the hash set." << endl;
  } else {
      cout << "20 does not exist in the hash set." << endl;
  }

  // Check if an element exists in the hash set using count()

  if (hashSet.count(40) > 0) {
      cout << "40 exists in the hash set." << endl;
  } else {
      cout << "40 does not exist in the hash set." << endl;
  }

  // Erase an element from the hash set
  hashSet.erase(20);
  cout << "After erasing 20, size of hash set: " << hashSet.size() << endl;

  // Iterate through the hash set
  cout << "Elements in the hash set: ";
  for (const int& element : hashSet) {
      cout << element << " ";
  }

  cout << endl;
  // Clear the hash set
  hashSet.clear();

  cout << "After clearing, size of hash set: " << hashSet.size() << endl;

  // Check if the hash set is empty

  if (hashSet.empty()) {
      cout << "Hash set is empty." << endl;
  } else {
      cout << "Hash set is not empty." << endl;
  }

  // Insert multiple elements using initializer list

  unordered_set<int> hashSet2 = {1, 2, 3, 4, 5};
}
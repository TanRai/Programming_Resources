#include<bits/stdc++.h>
using namespace std;

int main() {
  // Declare a vector of integers
  vector<int> vec;
  // Add elements to the vector
  vec.push_back(20);
  vec.push_back(10);
  vec.push_back(40);
  vec.push_back(90);
  vec.push_back(60);
  vec.push_back(70);

  //Ascending sort the vector
  // sort() function is used to sort the elements in ascending order
  sort(vec.begin(), vec.end());

  for(auto i : vec) {
    cout << i << " ";
  }

  cout << endl;

  //Descending sort the vector
  // greater<int>() is used to sort the elements in descending order
  sort(vec.begin(), vec.end(), greater<>());
  for(auto i : vec) {
    cout << i << " ";
  }

  cout << endl;

  // Custom comparator to sort based on the second digit
  auto customComparator = [](int a, int b) {
    return (a % 10) < (b % 10); // Sort based on the last digit
  };
  sort(vec.begin(), vec.end(), customComparator);

  cout << "Sorted based on last digit: ";
  for(auto i : vec) {
    cout << i << " ";
  }

  cout << endl;


  vector<vector<int>> vec2 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  sort(vec2.begin(), vec2.end(), [](const auto& a, const auto& b) {
    return a[0] > b[0]; // Sort based on the first element of each vector
  });

  cout << "Sorted 2D vector based on first element: " << endl;
  for(const auto& row : vec2) {
    for(int val : row) {
      cout << val << " ";
    }
    cout << endl;
  }

  return 0;
}
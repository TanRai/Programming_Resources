#include<bits/stdc++.h>
using namespace std;

int main()
{
  unordered_map<string, int> umap; // Declare an unordered map
  umap["apple"] = 1; // Insert key-value pair
  umap["banana"] = 2; // Insert key-value pair
  umap["orange"] = 3; // Insert key-value pair
  umap["grape"] = 4; // Insert key-value pair

  cout << umap["crash"]<<endl; // Accessing a non-existing key will insert it with a default value (0 for int)
  cout << umap.at("crash") << endl; // Access value using at() (will throw an exception if key doesn't exist)

  // Accessing elements
  cout << "Value for key 'banana': " << umap["banana"] << endl; // Access value using key
  cout << "Value for key 'apple': " << umap.at("apple") << endl; // Access value using at()

  // Iterating through the unordered map
  cout << "Iterating through the unordered map:" << endl;
  for (const auto& pair : umap) {
    cout << pair.first << ": " << pair.second << endl; // Print key-value pairs
  }

  // Size of the unordered map
  cout << "Size of the unordered map: " << umap.size() << endl; // Print size of the map

  // Check if a key exists
  string key = "banana";
  if (umap.find(key) != umap.end()) {
    cout << "Key '" << key << "' exists in the unordered map." << endl; // Key exists
  } else {
    cout << "Key '" << key << "' does not exist in the unordered map." << endl; // Key does not exist
  }

  // Changing the value of a key
  umap["banana"] = 5; // Change value of key "banana"
  cout << "Updated value for key 'banana': " << umap["banana"] << endl; // Print updated value

  // Erasing an element
  umap.erase("orange"); // Erase key-value pair with key "orange"
  cout << "After erasing 'orange':" << endl;
  for (const auto& pair : umap) {
    cout << pair.first << ": " << pair.second << endl; // Print key-value pairs after erasing
  }

  // Clearing the unordered map
  umap.clear(); // Clear the unordered map

  // Check if the unordered map is empty
  if (umap.empty()) {
    cout << "The unordered map is empty." << endl; // Unordered map is empty
  } else {
    cout << "The unordered map is not empty." << endl; // Unordered map is not empty
  }

  // Inserting multiple key-value pairs using initializer list
  unordered_map<string, int> umap2 = {{"pear", 5}, {"kiwi", 6}, {"mango", 7}}; // Initialize unordered map with multiple key-value pairs
  cout << "New unordered map:" << endl;

  for (const auto& pair : umap2) {
    cout << pair.first << ": " << pair.second << endl; // Print key-value pairs of the new unordered map
  }

  // Using custom hash function
  struct CustomHash {
    size_t operator()(const string& key) const {
      return hash<string>()(key); // Use default hash function for strings
    }
  };
}
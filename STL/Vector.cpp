#include<bits/stdc++.h>
using namespace std;

int main() {
    // Declare a vector of integers
    vector<int> vec;

    // Check if the vector is empty
    if (vec.empty()) {
        cout << "Vector is empty." << endl;
    } else {
        cout << "Vector is not empty." << endl;
    }

    // Vector of size 5 initialized with zeros
    vector<int> vec2(5, 0);

    // Add elements to the vector
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);

    //Print the first and last element of the vector

    cout << "First element: " << vec.front() << endl;
    cout << "Last element: " << vec.back() << endl;

    // Print the elements of the vector
    cout << "Elements in the vector: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    for(int i:vec){
        cout<<i<<" ";
    }
    cout<<endl;

    // Remove the last element from the vector
    vec.pop_back();

    // Print the elements of the vector after removal
    cout << "Elements in the vector after pop_back: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
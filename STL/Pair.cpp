#include<bits/stdc++.h>
using namespace std;

int main(){
    // Declare a pair of integers
    pair<int, int> p1;

    // Initialize a pair with values
    pair<int, int> p2(10, 20);

    // Accessing elements of the pair
    cout << "First element: " << p2.first << endl;
    cout << "Second element: " << p2.second << endl;

    // Creating a pair using make_pair
    pair<int, int> p3 = make_pair(30, 40);
    cout << "First element of p3: " << p3.first << endl;
    cout << "Second element of p3: " << p3.second << endl;

    // Comparing pairs
    pair<int, int> p4(10, 20);
    pair<int, int> p5(10, 30);
    if (p4 < p5) {
        cout << "p4 is less than p5" << endl;
    } else {
        cout << "p4 is not less than p5" << endl;
    }

    // Swapping pairs
    swap(p2, p3);
    cout << "After swapping p2 and p3:" << endl;
    cout << "p2: (" << p2.first << ", " << p2.second << ")" << endl;
    cout << "p3: (" << p3.first << ", " << p3.second << ")" << endl;

    // Using pairs in a map
    map<pair<int, int>, string> m;
    m[make_pair(1, 2)] = "Point A";
    m[make_pair(3, 4)] = "Point B";
    cout << "Map contents:" << endl;
    for (auto it = m.begin(); it != m.end(); ++it) {
        cout << "(" << it->first.first << ", " << it->first.second << ") : " << it->second << endl;
    }
}
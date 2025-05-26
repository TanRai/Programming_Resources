// Define Struct
#include <bits/stdc++.h>
using namespace std;
// Define a struct to represent a point in 2D space
struct Point {
    int x; // x-coordinate
    int y; // y-coordinate

    // Constructor to initialize the point
    Point(int xCoord, int yCoord) : x(xCoord), y(yCoord) {}
    Point() : x(0), y(0) {} // Default constructor initializing to (0, 0)
    //Alternative constructor
    // Point(int xCoord, int yCoord) {
    //     x = xCoord;
    //     y = yCoord;
    // }
    // Point(){
    //     x = 0; 
    //     y = 0; 
    // }
    // Function to display the point
    void display() const {
        cout << "Point(" << x << ", " << y << ")" << endl;
    }
    // Function to calculate the distance from another point
    double distance(const Point& other) const {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }
};
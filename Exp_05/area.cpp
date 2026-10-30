#include <iostream>
using namespace std;

// Function Prototypes
int area(int);
int area(int, int);
float area(float);
float area(float, float);

int main()
{
    int side, length, breadth;
    float radius, base, height;

    // Square
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Area of square: " << area(side) << endl;

    // Rectangle
    cout << "Enter length and breadth of rectangle: ";
    cin >> length >> breadth;
    cout << "Area of rectangle: " << area(length, breadth) << endl;

    // Circle
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "Area of circle: " << area(radius) << endl;

    // Triangle
    cout << "Enter base and height of triangle: ";
    cin >> base >> height;
    cout << "Area of triangle: " << area(base, height) << endl;

    return 0;
}

// Area of Square
int area(int s)
{
    return s * s;
}

// Area of Rectangle
int area(int l, int b)
{
    return l * b;
}

// Area of Circle
float area(float r)
{
    return 3.14 * r * r;
}

// Area of Triangle
float area(float bs, float ht)
{
    return (bs * ht) / 2;
}
#include <iostream>
using namespace std;

class Distance {
public:
    int feet, inch;

    // Default constructor
    Distance() {
        this->feet = 0;
        this->inch = 0;
    }

    // Parameterized constructor
    Distance(int f, int i) {
        this->feet = f;
        this->inch = i;
    }

    // Overloading (+) operator
    void operator+(Distance& d2) {
        // Create object to store result
        // Distance d3;

        this-> feet = this->feet + this ->feet;
        this->inch = this->inch + this ->inch;
        cout<<"This is:"<< this-> feet<< endl;
        cout<<"d2 is:"<< d2.feet<<endl;
        // return d3;
    }
};

int main() {
    Distance d1(8, 9);
    Distance d2(10, 2);

    Distance d3;

    // Using overloaded operator
    d3 = d1 + d2;

    cout << "\nTotal Feet & Inches: "
         << d3.feet << "'" << d3.inch;

    return 0;
}
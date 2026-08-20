#include <iostream>
using namespace std;

class Complex {
private:
    int real, imag;

public:
    Complex(int r = 0, int i = 0) {
        real = r;
        imag = i;
    }

    // Addition
    void add(const Complex &c, Complex &result) {
        result.real = real + c.real;
        result.imag = imag + c.imag;
    }

    // Subtraction
    void subtract(const Complex &c, Complex &result) {
        result.real = real - c.real;
        result.imag = imag - c.imag;
    }

    void display() const {
        cout << real << " + i" << imag << endl;
    }
};

int main() {
    Complex c1(4, 5);
    Complex c2(8, 9);

    Complex sum, diff;

    c1.add(c2, sum);
    c1.subtract(c2, diff);

    cout << "First Complex Number: ";
    c1.display();

    cout << "Second Complex Number: ";
    c2.display();

    cout << "Addition: ";
    sum.display();

    cout << "Subtraction: ";
    diff.display();

    return 0;
}
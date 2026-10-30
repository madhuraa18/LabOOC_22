#include <iostream>

using namespace std;

namespace madhura
{
    int mul_div()
    {
        int a, b;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "The Multiplication is: " << a * b << endl;
        cout << "The Division is: " << a / b << endl;

        return 0;
    }
}
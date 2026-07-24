#include <iostream>

using namespace std;

namespace madhura
{
    int add_sub()
    {
        int a, b;

        cout << "Enter two numbers: ";
        cin >> a >> b;

        cout << "The Sum is: " << a + b << endl;
        cout << "The Sub is: " << a - b << endl;

        return 0;
    }
}
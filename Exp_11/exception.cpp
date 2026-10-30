#include <iostream>
#include <exception>
using namespace std;

class InvalidAgeException : public exception {
public:
    const char* what() const throw() {
        return "Invalid Age! Age must be 18 or above.";
    }
};

class Person {
    int age;

public:
    void getAge() {
        cout << "Enter age: ";
        cin >> age;

        if (age < 18) {
            InvalidAgeException e;
            throw e;
        }

        cout << "Valid Age";
    }
};

int main() {
    Person p;

    try {
        p.getAge();
    }
    catch (exception& e) {
        cout << e.what();
    }

    return 0;
}
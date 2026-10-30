#include <iostream>
#include <string>
using namespace std;

class Student
{
    //data function 
private:
    string name;
    int rollNo;
    float marks;
// member function
public:
    void inputDetails()
    {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayDetails() const
    {
        cout << "\n----- Student Details -----\n";
        cout << "Name      : " << name << endl;
        cout << "Roll No.  : " << rollNo << endl;
        cout << "Marks     : " << marks << endl;
    }
};

int main()
{
    Student s,s1,s2;

    s.inputDetails();
    s.displayDetails();
    s1.inputDetails();
    s1.displayDetails();
    s2.inputDetails();
    s2.displayDetails();


    return 0;
}
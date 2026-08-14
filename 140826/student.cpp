#include <iostream>
#include <string>
using namespace std;

class Student
{
    //data function 
private:
    string name;
    int rollNo;
    float marks1;
    float marks2;
    float marks3;
    float marks4;
    float marks5;

// member function
public:
    void inputDetails()
    {
        cout << "Enter Student Name: ";
        getline(cin >> ws, name);

        cout << "Enter Roll Number: ";
        cin >> rollNo;

        cout << "Enter Marks for DMS: ";
        cin >> marks1;
        cout << "Enter Marks for OEC: ";
        cin >> marks2;
        cout << "Enter Marks for CN: ";
        cin >> marks3;
        cout << "Enter Marks for IPR: ";
        cin >> marks4;
        cout << "Enter Marks for MDM: ";
        cin >> marks5;


    }

    void displayDetails() const
    {
        cout << "\n----- Student Marksheet -----\n";
        cout << "Name      : " << name << endl;
        cout << "Roll No.  : " << rollNo << endl;
        cout << "Marks     : " << marks1 << endl;
        cout << "Marks     : " << marks2 << endl;
        cout << "Marks     : " << marks3 << endl;
        cout << "Marks     : " << marks4 << endl;
        cout << "Marks     : " << marks5 << endl;
        cout << "Percenatge: " << (((marks1+marks2+marks3+marks4+marks5)/500)*100)<< endl;
    }
};

int main()
{
    Student s;

    s.inputDetails();
    s.displayDetails();
    return 0;
}
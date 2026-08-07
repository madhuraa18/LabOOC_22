#include <iostream>
#include <string>
using namespace std;

class employee
{
private:
    int id;
    string branch;
    string designation;
    float salary;
    float gsalary;

public:
    void inputDetails()
    {
        cout << "Enter ID: ";
        cin >> id;
    
        cout <<"Enter Branch:";
        cin >> branch;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Salary: ";
        cin >> salary;

        gsalary = salary + ((20 / 100) * salary) + ((80/ 100) * salary);
    }

    void displayDetails() const
    {
        cout << "\n----- Employee Details -----\n";
        cout << "Id           : " << id << endl;
        cout << "Branch       : " << branch << endl;
        cout << "Designation  : " << designation << endl;
        cout << "Salary       : " << salary << endl;
        cout << "Gross Salary : " << gsalary << endl;
    }
};

int main()
{
    employee s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}
#include<iostream>
#include<string>
using namespace std;
class product
{
  private:
   string pr_name;
   int id;
   int quantity;
   float salary;

 public:
   void inputDetails()
   {
        cout << "Enter ID: ";
        cin >> id;

        cout << "Enter Designation: ";
        cin >> designation;

        cout << "Enter Salary: ";
        cin >> salary;
    }

    void displayDetails() const
    {
        cout << "\n----- Employee Details -----\n";
        cout << "Id      : " << id << endl;
        cout << "Designation  : " << designation << endl;
        cout << "Salary    : " << salary << endl;
    }

};
int main()
{
    employee s;

    s.inputDetails();
    s.displayDetails();

    return 0;
}
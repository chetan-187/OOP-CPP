#include <bits/stdc++.h>
using namespace std;

// Notes:
// 1. Default visibility mode is private
// 2. Public Visibility Mode: Public members of the base class becomes Public members of the derived class
// 3. Private Visibility Mode: Public members of the base class become private members of the derived class
// 4. Private members are never inherited

// Base Class
class Employee
{

public:
    int id;
    float salary;

    Employee()
    {
        cout << "<-- In Employee -->" << endl;
    }

    Employee(int inpId)
    {
        id = inpId;
        salary = 69.00;
    }
};

// Derived Class
// class <derived class name> : <visibility mode> <base classname>
// {
//     Class Members/Methods/etc...
// };

class Programmer : Employee
{
public:
    int languageCode = 9;

    Programmer()
    {
        cout << "<-- In Programmer -->" << endl;
    }

    Programmer(int inpId)
    {
        id = inpId;
    }

    int getId()
    {
        return id;
    }
};

int main()
{
    Employee Elon, Steve;
    Elon = 1;
    Steve = 4;
    cout << "Elon's Salary -> " << Elon.salary << endl;
    cout << "Steve's Salary -> " << Steve.salary << endl;

    Programmer skillX;
    skillX = 10;
    cout << "SkillX's Language Code -> " << skillX.languageCode << endl;
    cout << "SkillX's Id -> " << skillX.getId() << endl;

    return 0;
}
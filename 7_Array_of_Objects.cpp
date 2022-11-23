#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 122;
        cout << "Enter the Id : ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "Id -> " << id << endl;
    }
};

int main()
{
    // Employee harry, rohan, lovish, shruti;
    // harry.setId();
    // harry.getId();
    Employee Tesla[5];
    for (int i = 0; i < 5; i++)
    {
        Tesla[i].setId();
        Tesla[i].getId();
    }

    return 0;
}

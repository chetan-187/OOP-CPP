#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setData(void)
    {
        cout << "Enter the ID : ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "ID -> " << id << "\nEmployee Number -> " << count << endl;
    }

    static void getCount(void)
    {
        // cout<<id; // throws an error
        cout << "The value of count is " << count << endl;
    }
};

// Count is the static data member of class Employee
// Visibility is under the class only
// Lifetime is till execution of program
int Employee::count = 1000; // Default value is 0 as the object is created

int main()
{
    Employee harry, rohan, lovish;
    // harry.id = 1;
    // harry.count=1; // cannot do this as id and count are private

    harry.setData();
    harry.getData();
    // harry.getCount();
    Employee::getCount();

    rohan.setData();
    rohan.getData();
    // rohan.getCount();
    Employee::getCount();

    lovish.setData();
    lovish.getData();
    // lovish.getCount();
    Employee::getCount();

    return 0;
}

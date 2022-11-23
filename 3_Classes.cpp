#include <bits/stdc++.h>
using namespace std;

class Employee
{
    // Can be access only within a class
private:
    int a, b, c;

public:
    int d, e, f;
    void setData(int a1, int b1, int c1); // Declaration

    void printData()
    {
        cout << "Value of a -> " << a << endl;
        cout << "Value of b -> " << b << endl;
        cout << "Value of c -> " << c << endl;
        cout << "Value of d -> " << d << endl;
        cout << "Value of e -> " << e << endl;
        cout << "Value of f -> " << f << endl;
    }
};

void Employee::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee elon;
    // elon.a = 64; // It will throw error because "a" is private
    elon.d = 51;
    elon.e = 64;
    elon.f = 65;
    elon.setData(1, 2, 3);
    elon.printData();

    return 0;
}
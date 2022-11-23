#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    Complex(int x, int y) // Constructor declaration
    {
        a = x;
        b = y;
    }

    Complex(int x) // Constructor declaration
    {
        a = x;
        b = 0;
    }

    void printData(void)
    {
        cout << "a = " << a << " & b = " << b << endl;
    }
};

int main()
{
    // Implicit Call
    Complex a(1, 2);
    a.printData();

    Complex b(15);
    b.printData();

    return 0;
}
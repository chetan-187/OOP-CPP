#include <bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(a + j)
    // Test(int i, int j) : b(j), a(i + b)
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor executed..." << endl;
        cout << "Value of a -> " << a << endl;
        cout << "Value of b -> " << b << endl;
    }
};

int main()
{

    Test T(3, 4);

    return 0;
}
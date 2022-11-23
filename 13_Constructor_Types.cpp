#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int a, b;

public:
    // Creating a constructor
    Complex(int, int); // Constructor declaration

    void printData(void)
    {
        cout << "a = " << a << " & b = " << b << endl;
    }
};

Complex ::Complex(int x, int y) // This is a parameterized constructor as it takes  parameters
{
    a = x;
    b = y;
}
int main()
{
    // Implicit Call
    Complex a(1, 2);

    // Explicit Call
    Complex b = Complex(5, 8);

    a.printData();
    b.printData();

    return 0;
}

// Parameterized Constructors Example Program 2

// class Point
// {
//     int x, y;

// public:
//     Point(int a, int b)
//     {
//         x = a;
//         y = b;
//     }

//     void displayPoint()
//     {
//         cout << "The point is (" << x << ", " << y << ")" << endl;
//     }
// };

// int main()
// {
//     Point p(1, 1);
//     p.displayPoint();

//     Point q(4, 6);
//     q.displayPoint();
//     return 0;
// }

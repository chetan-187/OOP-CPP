#include <bits/stdc++.h>
using namespace std;

// Important Characteristics of Constructors in C++

// A constructor should be declared in the public section of the class
// They are automatically invoked whenever the object is created
// They cannot return values and do not have return types
// It can have default arguments
// We cannot refer to their address

// Forward declaration
class Complex;

class Number
{
    int v1, v2;

public:
    Number(void); // Constructor declaration
};

class Complex
{
    int a, b;
    // Constructor can be defined in private section of class
    // Using Friend Class :
    // If we want that class should not be instantiated by anyone else but only by a friend class.
    Complex(void); // Constructor declaration

    friend class Number;

public:
    // Creating a constructor
    // Constructor is a special member function with the same name as of the class.
    // It is used to initialize the objects of its class
    // It is automatically invoked whenever an object is created

    // void printData(void)
    // {
    //     cout << "a = " << a << " & b = " << b << endl;
    // }
};

Complex ::Complex() // This is a default constructor as it takes no parameters
{
    a = 1;
    b = 11;
}

Number ::Number()
{
    Complex c;
    cout << "Sum = " << c.a + c.b << endl;
}

int main()
{
    Number n;
    return 0;
}
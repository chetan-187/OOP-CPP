#include <bits/stdc++.h>
using namespace std;

// 1. Not in the scope of class
// 2. since it is not in the scope of the class,
//    it cannot be called from the object of that class. c1.sumComplex() == Invalid
// 3. Can be invoked without the help of any object
// 4. Usually contans the objects as arguments
// 5. Can be declared inside public or private section of the class
// 6. It cannot access the members directly by
//    their names and need object_name.member_name to access any member.

class Complex
{
private:
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void PrintNumber(void)
    {
        cout << "Complex Number -> " << a << " + " << b << "i" << endl;
    }
    // Below line means that
    // non member - sumComplex funtion is allowed to do anything with my private members
    friend Complex sumComplex(Complex o1, Complex o2);
};

Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(4, 5);
    c1.PrintNumber();

    c2.setNumber(3, 2);
    c2.PrintNumber();

    sum = sumComplex(c1, c2);
    sum.PrintNumber();

    return 0;
}
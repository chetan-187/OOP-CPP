#include <bits/stdc++.h>
using namespace std;

// Forward declaration
class Complex;

class Calculator
{
public:
    int sumRealComplex(Complex o1, Complex o2);
    int sumCompComplex(Complex o1, Complex o2);
};

class Complex
{
private:
    int a, b;

    // Individually declaring functions as friends
    // friend int Calculator ::sumRealComplex(Complex o1, Complex o2);
    // friend int Calculator ::sumCompComplex(Complex o1, Complex o2);

    // Declaring the entire calculator class as friend
    friend class Calculator;

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
};

int Calculator ::sumRealComplex(Complex o1, Complex o2)
{
    return (o1.a + o2.a);
}

int Calculator ::sumCompComplex(Complex o1, Complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    Calculator cal;
    Complex O1, O2;

    O1.setNumber(4, 8);
    O2.setNumber(5, 10);

    int sum = cal.sumRealComplex(O1, O2);
    int res = cal.sumCompComplex(O1, O2);

    cout << "Sum of real part of O1 & O2 -> " << sum << endl;
    cout << "Sum of complex part of O1 & O2 -> " << res << endl;

    return 0;
}
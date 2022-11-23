#include <bits/stdc++.h>
using namespace std;

// Syntax  -
// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class Base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class Base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};

class Base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "Base1 ->  " << base1int << endl;
        cout << "Base2 ->  " << base2int << endl;
        cout << "Base3 ->  " << base3int << endl;
        cout << "Sum of Bases -> " << base1int + base2int + base3int << endl;
    }
};

int main()
{
    Derived Elon;
    Elon.set_base1int(25);
    Elon.set_base2int(5);
    Elon.set_base3int(15);
    Elon.show();

    return 0;
}

#include <iostream>
using namespace std;

/*
--------------------------------------------------------------------------------
   Derivation ->             Public              Private         Protected
--------------------------------------------------------------------------------
1. Private Members         Not Inherited       Non Inherited    Not Inherited
2. Protected Members         Protected            Private         protected
3. Public members            Public               Private         protected
--------------------------------------------------------------------------------
*/

class Base
{
protected:
    int a;

private:
    int b;
};

class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    int varBase;
    void Display()
    {
        cout << "varBase -> " << varBase << endl;
    }
};

class Derived : public Base
{
public:
    int varDerived;
    void Display()
    {
        cout << "varBase -> " << varBase << endl;
        cout << "varDerived -> " << varDerived << endl;
    }
};

int main()
{
    Base *basePtr;

    Base base;
    Derived derived;
    basePtr = &derived; // Pointing base class pointer to Derived Class
    basePtr->varBase = 35;
    // basePtr->varDerived = 35; // Error -> 'class Base' has no member named 'varDerived'
    basePtr->Display();

    Derived *derivedPtr;
    derivedPtr = &derived;
    derivedPtr->varDerived = 20;
    derivedPtr->Display();

    return 0;
}
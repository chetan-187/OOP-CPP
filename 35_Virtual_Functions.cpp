#include <bits/stdc++.h>
using namespace std;

class Base
{
public:
    int varBase = 111;
    virtual void Display()
    {
        cout << "varBase -> " << varBase << endl;
    }
};

class Derived : public Base
{
public:
    int varDerived = 222;
    void Display()
    {
        cout << "varBase -> " << varBase << endl;
        cout << "varDerived -> " << varDerived << endl;
    }
};

int main()
{
    Base *baseClass;
    Base base;
    Derived derived;
    baseClass = &derived;
    baseClass->Display();
    return 0;
}
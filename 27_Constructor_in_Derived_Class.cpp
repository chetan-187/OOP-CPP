#include <bits/stdc++.h>
using namespace std;

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base 1 class constructor called !" << endl;
    }
    void printDataBase1(void)
    {
        cout << "Data 1 -> " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base 2 class constructor called !" << endl;
    }
    void printDataBase2(void)
    {
        cout << "Data 2 -> " << data2 << endl;
    }
};

class Derived : public Base2, public Base1
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base2(b), Base1(a)
    {
        derived1 = c;
        derived2 = d;
        cout << "Derived class constructor called !" << endl;
    }
    void printDataDerived(void)
    {
        cout << "Derived 1 -> " << derived1 << endl;
        cout << "Derived 2 -> " << derived2 << endl;
    }
};

int main() 
{
    Derived Elon(1, 2, 3, 4);
    Elon.printDataBase1();
    Elon.printDataBase2();
    Elon.printDataDerived();
    return 0;
}

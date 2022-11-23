#include <bits/stdc++.h>
using namespace std;

class Derived;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}

int Base::getData1()
{
    return data1;
}

int Base::getData2()
{
    return data2;
}

class Derived : private Base
{ // Class is being derived publically
    int data3;

public:
    void process();
    void display();
};

void Derived ::process()
{

    setData(); // If visibility mode is private
    data3 = data2 * getData1();
}

void Derived ::display()
{
    cout << "Data 1 -> " << getData1() << endl;
    cout << "Data 2 -> " << data2 << endl;
    cout << "Data 3 -> " << data3 << endl;
}

int main()
{
    Derived der;
    // der.setData();
    der.process();
    der.display();
    return 0;
}
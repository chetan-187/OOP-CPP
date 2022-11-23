#include <bits/stdc++.h>
using namespace std;


// **********************Cases******************************
// Case1:
// class B: public A{
//    Order of execution of constructor -> first A() then B()
// };

// Case2:
// class A: public B, public C{
//     Order of execution of constructor -> B() then C() and A()
// };

// Case3:
// class A: public B, virtual public C{
//     Order of execution of constructor -> C() then B() and A()
// };

// Multiple Inheritance
class Father
{
    public:

    Father()
    {
        cout << "Father Initialized !" << endl;
    }
};
class Mother
{
    public:
    Mother()
    {
        cout << "Mother Initialized !" << endl;
    }
};

class Child : public Mother, public virtual Father
{
    public:
    Child()
    {
        cout << "Child Initialized !" << endl;
    }
};

// Multilevel Inheritance
// class GrandFather
// {
// public:
//     GrandFather()
//     {
//         cout << "GrandFather Initialized !" << endl;
//     }
// };

// class Father : public GrandFather
// {
// public:
//     Father()
//     {
//         cout << "Father Initialized !" << endl;
//     }
// };

// class Son : public Father
// {
// public:
//     Son()
//     {
//         cout << "Son Initialized !" << endl;
//     }
// };

int main()
{
    // Multiple Inheritance
    Child C;

    // Multilevel Inheritance
    // Son S;

    return 0;
}

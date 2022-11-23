#include <bits/stdc++.h>
using namespace std;

// "this" is a keyword that is an implicit pointer.
// "this" pointer points to the object which calls the member function.

class A
{

public:
    int a;
    void setData(int a)
    {
        this->a = a;
    }

    void getData()
    {
        cout << "A -> " << a << endl;
    }
};

int main()
{
    A *ptr = new A;
    ptr->setData(10);
    ptr->getData();

    return 0;
}
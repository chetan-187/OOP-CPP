#include <bits/stdc++.h>
using namespace std;

// Forward declaration
class Y;

class X
{
    int data;

    friend void add(X, Y);

public:
    void setValue(int value)
    {
        data = value;
    }
};

class Y
{
    int num;

    friend void add(X, Y);

public:
    void setValue(int value)
    {
        num = value;
    }
};

void add(X o1, Y o2)
{
    cout << "Sum of data of X and Y objects -> " << o1.data + o2.num;
}

int main()
{
    X a1;
    a1.setValue(3);

    Y b1;
    b1.setValue(15);

    add(a1, b1);
    return 0;
}

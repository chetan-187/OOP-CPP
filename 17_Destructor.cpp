#include <bits/stdc++.h>
using namespace std;

// Destructor never takes an argument nor does it return any value
int count = 0;
class Number
{
public:
    Number()
    {
        ::count++;
        cout << ::count << "> Constructor is called!!!" << endl;
    }

    ~Number()
    {
        cout << ::count << "> Destructor is called!!!" << endl;
        ::count--;
    }
};
int main()
{
    cout << "Inside main function..." << endl;
    cout << "Creating Objects..." << endl;

    Number num1;
    {
        cout << "Creating Block..." << endl;
        Number num2, num3;
        cout << "Exiting Block..." << endl;
    }

    cout << "Back to main function..." << endl;

    return 0;
}
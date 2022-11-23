#include <iostream>
using namespace std;

class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 9, int c = 8)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void printData();
};

void Simple ::printData()
{
    cout << "Data1 = " << data1 << endl;
    cout << "Data2 = " << data2 << endl;
    cout << "Data3 = " << data3 << endl;
}

int main()
{
    // Simple s(12, 13,14);
    // Simple s(12, 13);
    Simple s(12);

    s.printData();
    return 0;
}

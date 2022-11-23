#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getData()
    {
        cout << "Real -> " << real << endl;
        cout << "Imaginary -> " << imaginary << endl;
    }

    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};
int main()
{
    // Complex c;
    // Complex *ptr = &c;

    Complex *ptr = new Complex;
    Complex *ptr2 = new Complex;

    (*ptr).setData(1, 54);
    (*ptr).getData();

    ptr2->setData(2, 27);    
    ptr2->getData();
    

    return 0;
}


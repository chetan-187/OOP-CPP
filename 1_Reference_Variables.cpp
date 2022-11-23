#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A = 8;
    int &B = A;

    cout << &B << " " << &A << endl;

    int C = 4;
    B = C;

    cout << &B << " " << A << endl;

    return 0;
}
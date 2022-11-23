#include <bits/stdc++.h>
using namespace std;

int add(int a, int b)
{
    cout << "Using function with 2 arguments..." << endl;
    return a + b;
}

int add(int a, int b, int c)
{
    cout << "Using function with 3 arguments..." << endl;
    return a + b + c;
}
int main()
{

    cout << "Addition of 3 and 6 -> " << add(3, 6) << endl;
    cout << "Addition of 3, 6 and 9 -> " << add(3, 6, 9) << endl;

    return 0;
}
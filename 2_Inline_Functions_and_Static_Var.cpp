#include <bits/stdc++.h>
using namespace std;

int product(int a, int b)
{
    // Value of c will be initialized only once and the value will be retained further
    static int c = 0; // This executes only once
    c = c + 1;        // Next time this function will run and value of c will be retained
    return a * b + c;
}

inline int sum(int a, int b)
{

    return a + b;
}

int main()
{

    int a = 4, b = 5;

    cout << "Value of a -> " << a << endl;
    // cin >> a;
    cout << "Value of b -> " << b << endl;
    // cin >> b;

    cout << "Sum of a and b -> " << sum(a, b) << endl;
    cout << "Product of a and b -> " << product(a, b) << endl;
    cout << "Product of a and b -> " << product(a, b) << endl;

    return 0;
}

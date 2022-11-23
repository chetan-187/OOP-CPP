#include <bits/stdc++.h>
using namespace std;
int main()
{
    //     int *p = new int(40);
    //     cout << "Value of p -> " << *(p) << endl;

    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    cout << "The value of Array before deleting" << endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;
    //Delete Operator
    delete[] arr;
    arr[0] = 40;
    *(arr+1) = 50;
    arr[2] = 60;
    cout << "\nThe value of Array after deleting" << endl;
    cout << "The value of arr[0] is " << arr[0] << endl;
    cout << "The value of arr[1] is " << arr[1] << endl;
    cout << "The value of arr[2] is " << arr[2] << endl;

    return 0;
}
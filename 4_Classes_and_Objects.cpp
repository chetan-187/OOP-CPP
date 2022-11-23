#include <bits/stdc++.h>
using namespace std;

//**********************OOPs - Classes and objects**************************

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
//
// class Employee
// {
//     // Class definition
// } harry, rohan, lovish;
//
// harry.salary = 8 makes no sense if salary is private

// **************************************************************************

class Binary
{
    // By default the variable is private
    string s;

public:
    void read(void);
    void check_binary(void);
    void ones_compliment(void);
    void display(void);
};

void Binary ::read(void)
{
    cout << "Enter a binary number : " << endl;
    cin >> s;
}

void Binary ::check_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << s[i] << endl;
            cout << "Incorrect binary number" << endl;
            exit(0);
        }
    }
}

void Binary::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
}

void Binary::display(void)
{
    cout << "Displaying your binary number..." << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i];
    }
    cout << endl;
}

int main()
{
    // Nesting of Member Functions
    Binary b;
    b.read();
    b.check_binary();
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}
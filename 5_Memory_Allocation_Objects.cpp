#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter() { counter = 1; }

    void setPrice(void);
    void displayprice(void);
};

void Shop::setPrice(void)
{
    cout << "Enter Id of Item " << counter << " : ";
    cin >> itemId[counter];
    cout << "Enter Price of Item : ";
    cin >> itemPrice[counter];

    counter++;
}

void Shop::displayprice(void)
{
    cout << "\nItem Id"
         << "  "
         << "Item Price" << endl;
    for (int i = 1; i < counter; i++)
    {
        cout << itemId[i] << "        " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop Dukan;
    Dukan.initCounter();
    Dukan.setPrice();
    Dukan.setPrice();
    Dukan.displayprice();

    return 0;
}
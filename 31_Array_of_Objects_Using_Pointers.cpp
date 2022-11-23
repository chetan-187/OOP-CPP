#include <bits/stdc++.h>
using namespace std;

class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData(void)
    {
        cout << "Id -> " << id << endl;
        cout << "Price -> " << price << endl;
    }
};

int main()
{
    int size = 2;
    ShopItem *ptr = new ShopItem[size];
    ShopItem *ptrTemp = ptr;

    int id;
    float price;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter Id and Price of Item " << i + 1 << endl;
        cin >> id >> price;
        // (*ptr).setData(id, price);
        ptrTemp->setData(id, price);
        ptrTemp++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "\nId and Price of Item " << i + 1 << endl;

        // (*ptr).getData();
        ptr->getData();
        ptr++;
    }

    return 0;
}
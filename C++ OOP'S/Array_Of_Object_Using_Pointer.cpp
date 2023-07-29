#include <iostream>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void Set_Data(int a, int b)
    {
        id = a, price = b;
    }
    void Get_Data(void)
    {
        cout << "Code Of This Item is : " << id << endl;
        cout << "Price Of This Item is : " << price << endl;
    }
};
int main()
{
    int size = 2;
    Shop *ptr = new Shop[size];
    int p;
    float q;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter The Id And The price Of The Item " << (i + 1) << endl;
        cin >> p >> q;
        ptr->Set_Data(p, q);
        ptr++;
    }
    ptr -= size;
    for (int i = 0; i < size; i++)
    {
        cout << "Item No : " << (i + 1) << endl;
        ptr->Get_Data();
        ptr++;
    }
    return 0;
}
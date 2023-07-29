#include <iostream>
using namespace std;

// Memory Allocation

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void SetPrice(void);
    void DisplayPrice(void);
};
void shop::SetPrice(void)
{
    cout << "Enter Id Of Your item no " << counter + 1 << " : " << endl;
    cin >> itemId[counter];
    cout << "Enter The price of Your item : " << endl;
    cin >> itemPrice[counter];
    counter++;
}
void shop ::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price Of item With Id : " << itemId[i] << " Is " << itemPrice[i] << endl;
    }
}
int main()
{
    shop dukaan;
    dukaan.initCounter();
    for (int i = 0; i < 5; i++)
    {
        dukaan.SetPrice();
    }
    dukaan.DisplayPrice();
    return 0;
}
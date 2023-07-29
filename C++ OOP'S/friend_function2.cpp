// Make A friend function to add two number
#include <iostream>
using namespace std;
class y;
class x
{
    friend void add(x, y);
    int num1;

public:
    void SetNumber(int value)
    {
        num1 = value;
    }
};
class y
{
    friend void add(x, y);
    int num2;

public:
    void SetNumber(int value)
    {
        num2 = value;
    }
};
void add(x o1, y o2)
{
    cout << "The Sum Of The X & The Y Objects Are : " << o1.num1 + o2.num2 << endl;
}
int main()
{
    x a1;
    a1.SetNumber(5);
    y b1;
    b1.SetNumber(9);
    add(a1, b1);
    return 0;
}
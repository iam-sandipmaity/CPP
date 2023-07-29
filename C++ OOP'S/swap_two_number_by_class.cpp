// swap two number using class
#include <iostream>
using namespace std;
class num2;
class num1
{
    int val1;

public:
    void SetData(int a)
    {
        val1 = a;
    }
    void Display(void)
    {
        cout << " " << val1 << endl;
    }
    friend void Swap(num1 &, num2 &);
};
class num2
{
    int val2;

public:
    void SetData(int a)
    {
        val2 = a;
    }
    void Display(void)
    {
        cout << " " << val2 << endl;
    }
    friend void Swap(num1 &, num2 &);
};
void Swap(num1 &x, num2 &y)
{
    int temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    num1 n1;
    num2 n2;
    n1.SetData(5);
    n2.SetData(6);
    n1.Display();
    n2.Display();

    Swap(n1, n2);
    cout << "The value Of The n1 After swapping ";
    n1.Display();
    cout << "The value Of The n2 After swapping ";
    n2.Display();
    return 0;
}
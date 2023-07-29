// Passing objects As Function Argument
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    void SetData(void);
    void GetData(void);
    void SetDataBySum(Complex o1, Complex o2);
};

void Complex::SetData(void)
{
    cout << "Enter The Value Of A & B  : " << endl;
    cin >> a >> b;
}

void Complex::GetData(void)
{
    cout << "The Complex Number Is : " << a << " + " << b << "i " << endl;
}

void Complex::SetDataBySum(Complex o1, Complex o2)
{
    a = o1.a + o2.a;
    b = o1.b + o2.b;
}

int main()
{
    Complex c1, c2, c3;

    c1.SetData();
    c2.SetData();

    c1.GetData();
    c2.GetData();

    c3.SetDataBySum(c1, c2);
    c3.GetData();
    return 0;
}
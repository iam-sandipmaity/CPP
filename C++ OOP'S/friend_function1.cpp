#include <iostream>
using namespace std;

class complex
{
    friend complex SumComplex(complex o1, complex o2);
    int a, b;

public:
    void SetNumber(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void printNumber()
    {
        cout << "The Number Is : " << a << " + " << b << "i " << endl;
    }
};

complex SumComplex(complex o1, complex o2)
{
    complex o3;
    o3.SetNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main()
{
    complex c1, c2, sum;
    c1.SetNumber(5, 8);
    c2.SetNumber(4, 6);

    c1.printNumber();
    c2.printNumber();

    sum = SumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
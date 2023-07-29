// Friend Class & member friend Function
#include <iostream>
using namespace std;

class complex; // forward declaration 

class calculator
{
public:
    int SumRealComplex(complex, complex);   
    int SumCompComplex(complex, complex);
};

class complex
{
    friend int calculator::SumRealComplex(complex, complex);
    friend int calculator::SumCompComplex(complex, complex);
    int a, b;

public:
    void SetNumber(int a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void PrintNumber()
    {
        cout << "Your Number is : " << a << " + " << b << "i " << endl;
    }
};
int calculator::SumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator::SumCompComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    complex c1, c2;
    c1.SetNumber(43, 21);
    c2.SetNumber(8, 14);

    c1.PrintNumber();
    c2.PrintNumber();

    calculator calc;

    int res1 = calc.SumRealComplex(c1, c2);
    cout << "The Sum Of The real part is : " << res1 << endl;
    int res2 = calc.SumCompComplex(c1, c2);
    cout << "The Sum Of The Complex part is : " << res2 << endl;
    return 0;
}
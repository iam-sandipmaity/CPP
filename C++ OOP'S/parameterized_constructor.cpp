#include <iostream>
using namespace std;

class complex
{
    int x, y;

public:
    complex(int, int);
    void Display()
    {
        cout << "The Complex Number Is : " << x << " + " << y << "i " << endl;
    }
};
complex::complex(int a, int b)
{
    x = a;
    y = b;
}
int main()
{
    // Implicit Call
    complex c1(1, 5);
    c1.Display();
    // Explicit Call
    complex c2 = complex(8, 2);
    c2.Display();
    return 0;
}
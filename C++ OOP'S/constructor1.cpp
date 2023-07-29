// Make A Function To  Print A Object Two Dimensional point
#include <iostream>
using namespace std;

class point
{
    int x, y;

public:
    point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printNumber()
    {
        cout << "Your Point Is : (" << x << " , " << y << ")" << endl;
    }
};
int main()
{
    point p(4, 8);
    point q(8, 3);
    p.printNumber();
    q.printNumber();
    return 0;
}
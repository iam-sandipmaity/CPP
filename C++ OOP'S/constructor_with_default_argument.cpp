#include <iostream>
using namespace std;

class sample
{
    int Data1, Data2;

public:
    sample(int a, int b = 4)
    {
        Data1 = a;
        Data2 = b;
    }
    void printData();
};

void sample::printData()
{
    cout << "The Value of Data1 And Data2 is : " << Data1 << " and " << Data2 << endl;
}

int main()
{
    sample s1(1, 8);
    s1.printData();
    sample s2(5); // Though here the Second Argument Or parameter Is Not Send but it Will Take The Default Argument
    s2.printData();
    return 0;
}
#include <iostream>
using namespace std;

class A
{
    int a;

public:
    void Set_Data(int a)
    {
        this->a = a;
    }
    // A & Set_Data(int a){
    //     this->a = a;
    //     return *this;
    // }
    void Display_Data(void)
    {
        cout << "The Value Of A Is : " << a << endl;
    }
};
//"this" Is A Keyword Which Is A pointer Which pointes to The object Which Invoked The Member Function
int main()
{
    A a;
    //a.Set_Data(2).Display_Data();
    a.Set_Data(2);
    a.Display_Data();
    return 0;
}
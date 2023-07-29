#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setdata(void)
    {
        cout << "Enter The Id Of The Employee : " << endl;
        cin >> id;
        salary = 123;
    }
    void Diplay(void)
    {
        cout << "The Id Of The Employee Is : " << id << endl;
    }
};
int main()
{
    Employee fb[7];
    for (int i = 0; i < 7; i++)
    {
        fb[i].setdata();
    }
    for (int i = 0; i < 7; i++)
    {
        fb[i].Diplay();
    }

    return 0;
}
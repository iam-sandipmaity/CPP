// Static Data Members & Methods
#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void SetData()
    {
        cout << "Enter The Employee Id : " << endl;
        cin >> id;
        count++;
    }
    void DisplayData()
    {
        cout << "The Id Of The Employee Is : " << id << " And This Is The Employee number : " << count << endl;
    }
    static void getCount()
    {
        cout << "The Value Of The Count Is : " << count << endl;
    }
};
int Employee::count; // Default VAlue Is 0
int main()
{
    Employee sandip, manas, Rupam;
    sandip.SetData();
    sandip.DisplayData();
    Employee::getCount();

    manas.SetData();
    manas.DisplayData();
    Employee::getCount();

    Rupam.SetData();
    Rupam.DisplayData();
    Employee::getCount();
    return 0;
}

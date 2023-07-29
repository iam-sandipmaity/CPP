// Destructor Never takes any argument Nor does it return any value

#include<iostream>
using namespace std;
int count = 0;
class num{
public:
    num(){
        cout<<"This is The time When Constructor is called For object Number"<<count<<endl;
        count++;
    }
    ~num(){
        cout<<"This Is The Time When my Distructor Is Called for object Number"<<count<<endl;
        count--;
    }
};
int main() {
    cout<<"We Are Inside Of Our main function"<<endl;
    cout<<"creating first object n1"<<endl;
    num n1;
    {
        cout<<"Entering This Block"<<endl;
        cout<<"creating two more objects "<<endl;
        num n2,n3;
        cout<<"Exiting This block"<<endl;
    }
    cout<<"Back to Main"<<endl;
    return 0;
}
#include<iostream>
using namespace std;

class base1{
public:
    void greet(){
        cout<<"How Are You ?"<<endl;
    }
};
class base2{
public:
    void greet(){
        cout<<"kemon Aacho ?"<<endl;
    }
};
class Derived:public base1, public base2{
public:
    void greet(){
        base1::greet();
        base2::greet();
    }
};
int main() {
    Derived d;
    d.greet();
    return 0;
}
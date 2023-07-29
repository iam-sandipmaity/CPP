#include<iostream>
using namespace std;

class base1{
protected:
    int base1int;
public:
    void set_base1int(int a){
        base1int = a;
    }
};
class base2{
protected:
    int base2int;
public:
    void set_base2int(int a){
        base2int = a;
    }
};

/*
here 
C = A + B + more

*/

class Derived: public base1, public base2{
public:
    void show(){
        cout<<"The Value of base1 is : "<<base1int<<endl;
        cout<<"The Value of base2 is : "<<base2int<<endl;
        cout<<"The Sum of base1 & base2 is : "<<base1int+base2int<<endl;
    }
};
int main() {
    Derived sandip;
    sandip.set_base1int(5);
    sandip.set_base2int(25);
    sandip.show();
    return 0;
}
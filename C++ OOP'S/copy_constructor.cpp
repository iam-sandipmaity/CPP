#include<iostream>
using namespace std;

class Number{
    int a;
public:
    Number() { a = 0; }
    Number(int num){
        a  = num;
    }
    Number(Number & obj){
        cout<<"Copy Constructor called !!!!"<<endl;
        a  = obj.a;
    }
    void display(){
        cout<<"The Number For This Object Is : "<<a<<endl;
    }
};
int main() {
    Number x,y,z(12), z2;
    x.display();
    y.display();
    z.display();
    Number z1(z); // copy constructor invoked 
    z1.display();
    z2 = z; // copy constructor is Not called
    z2.display();
    Number z3 = z; // copy constructor invoked 
    z3.display(); 
    return 0;
}
/*
Inheritance Syntax 
*/

// class {{derived-class-name}} : {{visibility mode}}  {{base-class-name}} {
//     class members/methods/etc.................
// }


// Make A Simple Inheritance 

#include<iostream>
using namespace std;

class Employee{
    public:
    int id;
    float salary;
    Employee(){}
    Employee(int intid) {
        id = intid;
        salary = 120;
    }
};

class Programmer : public Employee {
    public:
    int langCode;
    Programmer(int intid){
        id = intid;
        langCode = 4;
    }
    void display(){
        cout<<"Your Id Is : "<<id<<endl;
    }
};
int main() {
    
    Employee Sandip(1),Manas(8);
    cout<<Sandip.salary<<endl;
    cout<<Manas.salary<<endl;
    Programmer Rupam(3);
    Rupam.display();
    
    return 0;
}
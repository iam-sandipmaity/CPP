// virtual function
#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base = 563;
    virtual void display(){ // call of virtual Function
        cout<<"1. The value Of var_base Is : "<<var_base<<endl;
    }
};
class DerivedClass : public BaseClass{
    public:
    int var_derived = 780;
    void display(){
        cout<<"2. The Value Of var_base Is : "<<var_base<<endl;
        cout<<"2. The Value Of var_derived Is : "<<var_derived<<endl;
    }
};
int main() {
    BaseClass* base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->display();

    /*for The Virtual Function This Time Will be Display 
    The DerivedClass display Function*/
    return 0;
}

/*
RULES FOR VIRTUAL FUNCTION

1. They Cannot Be Static
2. They are accessed by object pointers
3. virtual function can be a friend of another function
4. A Virtual Function in base class might not be used.
5. If A virtual function is defined in a base class, 
there is no necessity of redining it in the derived class.

*/
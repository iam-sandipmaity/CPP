// pointer_to_derived_class
#include<iostream>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"1. Displaying BaseClass variable var_base "<<var_base<<endl;
    }
};
class DerivedClass : public BaseClass{
    public:
    int var_derived;
    void display(){
        cout<<"2. Displaying BaseClass variable var_base "<<var_base<<endl;
        cout<<"2. Displaying DerivedClass variable var_derived "<<var_derived<<endl;
    }
};
int main() {
    BaseClass * base_class_pointer;
    DerivedClass * derived_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived;
    base_class_pointer->var_base=14;   
    base_class_pointer->display();

    
    derived_class_pointer = &obj_derived;
    derived_class_pointer->var_base = 25;
    derived_class_pointer->var_derived=58;
    derived_class_pointer->display();
    return 0;
}
#include<iostream>
using namespace std;

class Base1{
    int Data1;
    public:
    Base1(int i){
        Data1 = i;
        cout<<"Base1 Class Constructor Called"<<endl;
    }
    void display_base1(){
        cout<<"The Value Of data1 Is : "<<Data1<<endl;
    }
};
class Base2{
    int Data2;
    public:
    Base2(int i){
        Data2 = i;
        cout<<"Base2 Class Constructor Called"<<endl;
    }
    void display_base2(){
        cout<<"The Value Of data2 Is : "<<Data2<<endl;
    }
};
class Derived : public Base1, public Base2{
    int derived1, derived2;
    public:
    Derived(int a, int b, int c, int d) : Base1(a) , Base2(b) {
        derived1 = c;
        derived2 = d;
    }
    void display_derived(){
        display_base1();
        display_base2();
        cout<<"The Value Of derived1 Is : "<<derived1<<endl;
        cout<<"The Value Of derived2 Is : "<<derived2<<endl;
    }
};
int main() {
    Derived Sandip(1,8,3,7);
    Sandip.display_derived();
    return 0;
}
#include<iostream>
using namespace std;

class Base{
    int Data1;
public:
    int Data2;
    void Set_Data() {
        Data1 = 10;
        Data2 = 40;
    }
    int Get_Data1() {
        return Data1;
    }
    int Get_Data2() {
        return Data2;
    }
};

class derived : public Base{
    int Data3;
public:
    void process(){
        Data3 = Data2 * Get_Data1();
    }
    void Show(){
        cout<<"The value Of data1 Is : "<<Get_Data1()<<endl;
        cout<<"The value Of data2 Is : "<<Data2<<endl;
        cout<<"The value Of data3 Is : "<<Data3<<endl;
    }
};
int main() {
    derived der;
    der.Set_Data();
    der.process();
    der.Show();
    return 0;
}
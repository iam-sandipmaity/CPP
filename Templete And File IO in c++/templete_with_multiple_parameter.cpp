#include<iostream>
using namespace std;
// Templete With Multiple Parameter
template <class T1, class T2>
class My_Class{
    public:
    T1 Data1;
    T2 Data2;
    My_Class(T1 a , T2 b){
        Data1 = a;
        Data2 = b;
    }
    void display(void){
        cout<<"The Value of Data1 Is : "<<this->Data1<<endl;
        cout<<"The Value of Data2 Is : "<<this->Data2<<endl;
    }
};
int main() {
    My_Class<int, float> Sandip(58,78.25);
    Sandip.display();
    return 0;
}
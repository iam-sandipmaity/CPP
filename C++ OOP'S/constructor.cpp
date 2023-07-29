#include<iostream>
using namespace std;

class complex{
    int a, b;
    public:
    complex(void);
    void DisplayNumber(void){
        cout<<"The Number Is : "<<a<<" + "<<b<<"i "<<endl;
    }
};
complex::complex(void){
    a = 10;
    b= 45;
}
int main() {
    complex c1,c2,c3;
    c1.DisplayNumber();
    c2.DisplayNumber();
    c3.DisplayNumber();
    return 0;
}
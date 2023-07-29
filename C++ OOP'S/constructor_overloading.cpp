#include<iostream>
using namespace std;

class complex{
    int x,y;
public: 
    complex(void){
        x = 0;
        y = 0;
    }
    complex(int a){
        x = a;
        y = 0;
    }
    complex(int a, int b){
        x = a;
        y = b;
    }
    void Display(){
        cout<<"The Complex Number Is : "<<x<<" + "<<y<<"i "<<endl;
    }
};
int main() {
    complex c1;
    c1.Display();

    complex c2(5);
    c2.Display();

    complex c3(8,3);
    c3.Display();
    return 0;
}
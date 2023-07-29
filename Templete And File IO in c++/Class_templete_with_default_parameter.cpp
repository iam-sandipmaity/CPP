#include<iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>

class Sandip{
    public:
    T1 a;
    T2 b;
    T3 c;
    Sandip(T1 x, T2 y, T3 z){
        a = x;
        b = y;
        c = z;
    }
    void display(void){
        cout<<"The Value Of a Is : "<<a<<endl;
        cout<<"The Value Of b Is : "<<b<<endl;
        cout<<"The Value Of c Is : "<<c<<endl;
    }
};
int main() {
    Sandip <> S(45.,85.25, 'A');
    S.display();   // It Took The Default Argument 


    cout<<endl<<endl;


    Sandip <int, char , char> S1(45,'A','S');
    S1.display();     // It takes The New Argument  
    return 0; 
}
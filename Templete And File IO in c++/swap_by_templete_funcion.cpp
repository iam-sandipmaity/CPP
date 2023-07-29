#include<iostream>
using namespace std;

template <class T>
void swapp( T & a , T & b){
    a = a + b;
    b = a - b;
    a = a - b;
}
int main() {
    int x = 5, y=2;
    swapp(x,y);
    cout<<"The Value Of x : "<<x<<endl<<"The Value Of y : "<<y<<endl;
    return 0;
}
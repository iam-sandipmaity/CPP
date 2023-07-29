
#include<iostream>
using namespace std;

int main() {
    int a = 19;
    int* b;
    b = &a;

    cout<<"The Address Of a Is : "<<&a<<endl;
    cout<<"The Address Of a Is : "<<b<<endl;
    cout<<"The value  Of a Is : "<<a<<endl;
    cout<<"The value  Of a Is : "<<*b<<endl;
    
    return 0;
}
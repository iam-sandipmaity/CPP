#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    int a = 4, b= 568, c = 456987;
    cout<<"The value Of A Is Without setw Is : "<<a<<endl;
    cout<<"The value Of B Is Without setw Is : "<<b<<endl;
    cout<<"The value Of C Is Without setw Is : "<<c<<endl;


    cout<<"The value Of A Is : "<<setw(6)<<a<<endl;
    cout<<"The value Of B Is : "<<setw(6)<<b<<endl;
    cout<<"The value Of C Is : "<<setw(6)<<c<<endl;
    return 0;
}
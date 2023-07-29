//recursion
// Fcatorial Of A Number
#include<iostream>
using namespace std;

int factorial (int n){
    if(n<2){
        return 1;
    }
    return n * factorial(n-1);
}

int main() {
    int num;
    cout<<"Enter The Number : ";
    cin>>num;
    cout<<"The Factorial Of "<<num<<" Is : "<<factorial(num)<<endl;
    cout<<"*********************************"<<endl;
    // print the factorial of 1 - n 
    for(int i = 1 ; i <= num ; i++) {
        cout<<"The Factorial Of "<<i<<" Is : "<<factorial(i)<<endl;
    }
    return 0;
}
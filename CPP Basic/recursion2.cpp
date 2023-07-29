//recursion
//Fibonacci Series

#include<iostream>
using namespace std;
int fib(int n) {
    if(n<2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}
int main() {
    int num;
    cout<<"Enter The Number : ";
    cin>>num;
    cout<<"The fibonacci Number Of "<<num<<" Is : "<<fib(num)<<endl;
    cout<<"*********************************************"<<endl;
// Print The Fibonacci Series
    for(int i=0; i<= num; i++) {
    cout<<"The fibonacci Number Of "<<i+1<<" Is : "<<fib(i)<<endl;  
    }
    return 0;
}
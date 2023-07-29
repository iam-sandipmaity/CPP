#include<iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

int main() {
    int x,y;
    cout<<"Enter X : "<<endl;
    cin>>x;
    cout<<"Enter Y : "<<endl;
    cin>>y;
    cout<<"***************************************"<<endl;
    cout<<ends<<ends<<ends<<"The Sum Of "<<x<<" and "<<y<<" Is :"<<sum(x,y)<<endl;
    cout<<"***************************************"<<endl;
    return 0;
}
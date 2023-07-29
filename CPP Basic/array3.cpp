#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"ENter The Size Of Array: "<<endl;
    cin>>n;

    int array[n];

    for(int i = 0; i<n ; i++) {
        cout<<"Enter array["<<(i+1)<<"] Value : "<<endl;
        cin>>array[i];
    }
    cout<<"*******************************************************"<<endl;
    for(int i = 0; i<n ; i++) {
        cout<<"The array["<<(i+1)<<"] Value Is  : "<<array[i]<<endl;
    }

    int* p = array;
    cout<<*(p)<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    return 0;
}
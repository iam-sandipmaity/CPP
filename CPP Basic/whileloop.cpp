// make A multiplication table of a Number 

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The Number : "<<endl;
    cin>>n;

    int i=1;
    while(i<=10) {
        cout<<n<<"  X  "<<i<< "  =  "<<(n*i)<<endl;
        i++;         // Here Updation comment is Importent Otherwise loop will be infinite

    }
    
    return 0;
}
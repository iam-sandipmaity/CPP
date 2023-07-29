// Take input From user and when user enter an odd number stop the programe.

#include<iostream>
using namespace std;

int main() {
    // int i=1;
    do{
        int n;
        cout<<"Enter A Number : "<<endl;
        cin>>n;
        for(int i =1 ; i <n; i++) {
            if (n % i== 0) {
                break;
            }
        }
        
    } 
    while(0);
    return 0;
}


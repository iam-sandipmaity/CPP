#include<iostream>
using namespace std;

// Call By value 
/* it can't Swap Two Number As the swapping happend Only in the Wrong_swap
 Function But It Can't Swap in Main function*/

void worng_swap(int a, int b){
    // int temp=a;
    // a=b;
    // b=temp;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"After Wrong SwapingThe Value of X is : "<<a<<endl;
    cout<<"After Wrong SwapingThe Value of Y is : "<<b<<endl;
}

int main() {
    int x,y;
    cout<<"Enter The Value Of x : ";
    cin>>x;
    cout<<"Enter The Value Of y : ";
    cin>>y;

    worng_swap(x,y);
    cout<<"After Wrong SwapingThe Value of X is : "<<x<<endl;
    cout<<"After Wrong SwapingThe Value of Y is : "<<y<<endl;
    return 0;
}




































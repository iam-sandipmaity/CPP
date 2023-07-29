#include<iostream>
using namespace std;

//call by reference
void swap(int* a, int* b) {
    // int temp = *a;
    // *a=*b;
    // *b=temp;

    // WE can swap two number without taking a third variable 

    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main() {
    int x,y;
    cout<<"Enter The Value Of x : ";
    cin>>x;
    cout<<"Enter The Value Of y : ";
    cin>>y;

    swap(&x,&y);
    cout<<"After Wrong SwapingThe Value of X is : "<<x<<endl;
    cout<<"After Wrong SwapingThe Value of Y is : "<<y<<endl;

    return 0;
}
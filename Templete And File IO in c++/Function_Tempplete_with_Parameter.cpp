#include<iostream>
using namespace std;

/*
// For Two Integer Average
void Average(int a, int b){
    // float avg =(float)(a+b)/2;
    float avg =(a+b)/2.0;
    cout<<"The Average Of "<<a<<" & "<<b<<" Is : "<<avg<<endl;
}

// For Two float Average
void Average(float a, float b){
    float avg =(a+b)/2.0;
    cout<<"The Average Of "<<a<<" & "<<b<<" Is : "<<avg<<endl;
}
*/
// it is a templete function to get the average of any two datatype number
template <class T1, class T2>
void Average(T1 a , T2 b){
    float avg =(a+b)/2.0;
    cout<<"The Average Of "<<a<<" & "<<b<<" Is : "<<avg<<endl;
}
int main() {
    Average(5,8.9);
    Average(53.25,8.9);
    Average(5,847);
    Average(5054,8.9);
    return 0;
}
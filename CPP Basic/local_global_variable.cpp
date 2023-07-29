#include<iostream>
using namespace std;
int age = 24;

int main() {
    int age = 19;
    cout<<age<<endl;   // Always local cvariable get more precedence 
    cout<<::age<<endl; // By This :: global veriable are Activeted
    return 0;
}
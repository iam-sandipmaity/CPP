#include<iostream>
using namespace std;

int main() {
    float num1 , num2;
    char op ;
    cout<<"Enter The Value Of num1 : \n";
    cin>>num1;
    cout<<"Enter The Value Of num2 : \n";
    cin>>num2;
    cout<<"Enter The Value Of oparetor +,-,*,/ : \n";
    cin>>op;

    if(op == '+') {
        cout<<"The Sum Is : "<<num1+num2<<endl;
    } else if (op == '-') {
        cout<<"The difference Is : "<<num1-num2<<endl;
    } else if (op == '*') {
        cout<<"The multiple Is : "<<num1*num2<<endl;
    } else if (op == '/') {
        cout<<"The divition Is : "<<num1/num2<<endl;
    } else {
        cout<<"Please Enter A Valid Oparetor from the List  '+' , '-' , '*' , '/'   : "<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int age;
    cout<<"Enter Your Age : "<<endl;
    cin>>age;

    if(age< 13 && age >= 1) {
        cout<<"You Are An Child "<<endl;
    }
    else if (age<18 && age >= 13) {
        cout<<"You Are An Tinenger"<<endl;
    }              
    else if(age <= 100 && age >= 18) {
        cout<<"You Are An adult"<<endl;
    }
    else if(age >100) {
        cout<<"You Are dath"<<endl;
    }
    else{
        cout<<"PLEASE ENTER A VALID AGE!"<<endl;
    }
    return 0;
}  
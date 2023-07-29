#include<iostream>
using namespace std;
int sum(int a, int b){
    return a+b;
}
int sum(int a, int b ,int c){
    return a+b+c;
}
int main() {
    cout<<"The Sum Of 3 And 4 Is : "<<sum(3,4)<<endl;
    cout<<"The Sum Of 3 And 4 & 6 Is : "<<sum(3,4,6)<<endl;
    return 0;
}
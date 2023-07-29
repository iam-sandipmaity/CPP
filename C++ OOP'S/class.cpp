#include<iostream>
using namespace std;

class Employee {
    private:
    int a,b,c;
    public:
    int d,e;
    void SetData(int a1, int b1, int c1);
    void GetData();
};
void Employee :: SetData(int a1, int b1, int c1){
    a=a1;
    b=b1;
    c=c1;
}
void Employee :: GetData(){
    cout<<"The Value Of A Is : "<<a<<endl;
    cout<<"The Value Of B Is : "<<b<<endl;
    cout<<"The Value Of C Is : "<<c<<endl;
    cout<<"The Value Of D Is : "<<d<<endl;
    cout<<"The Value Of E Is : "<<e<<endl;
}
int main() {
    Employee Sandip;
    Sandip.d=12;
    Sandip.e=56;
    
    Sandip.SetData(1,5,7);
    Sandip.GetData();
    return 0;
}
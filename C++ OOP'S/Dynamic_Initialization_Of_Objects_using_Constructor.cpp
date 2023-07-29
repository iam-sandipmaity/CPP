// dynamic means in the run time process with the competable process
#include<iostream>
using namespace std;

class BankDeposite{
    int principal;
    int year;
    float interestRate;
    float returnValue;
public:
    BankDeposite(){}
    BankDeposite(int p, int y, float r); // r can be a value like 0.04
    BankDeposite(int p, int y, int r);  // r can be a value like 4
    void Display(){
        cout<<endl<<" If Principle Amount is : "<<principal<<" Then Ater : "
        <<year<<" year you have : "<<returnValue<<endl;
    }
};
BankDeposite::BankDeposite(int p, int y,float r){
    principal = p;
    year = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1+interestRate);
    }
    
}
BankDeposite::BankDeposite(int p, int y,int r){
    principal = p;
    year = y;
    interestRate =(float)r/100;
    returnValue = principal;
    for (int i = 0; i < y; i++)
    {
        returnValue *= (1+interestRate);
    }
    
}
int main() {
    BankDeposite bd1,bd2,bd3;
    int p, y;
    float r,R;
    // cout<<"Enter The value of P , Y  & r : "<<endl;
    // cin>>p>>y>>r;
    // bd1 = BankDeposite(p,y,r);
    cout<<"Enter The value of P , Y  & R : "<<endl;
    cin>>p>>y>>R;
    bd2 = BankDeposite(p,y,R);
    // bd1.Display();
    bd2.Display();
    return 0;
}
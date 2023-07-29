#include<iostream>
using namespace std;
// default Argument 
float Moneyreceived (int CurrentMoney, float factor = 1.045) {
    return CurrentMoney*factor;
}

int main() {
    
    int Money ;
    cout<<"Enter Your Current Money : ";
    cin>>Money;

    cout<<"If You have "<<Money<<" In Your Bank, Then You Will Received "
    <<Moneyreceived(Money)<<" After 1 Year."<<endl;

    cout<<"For VIP : If You have "<<Money<<" In Your Bank, Then You Will Received "
    <<Moneyreceived(Money,1.1)<<" After 1 Year."<<endl;
    
    return 0;
}
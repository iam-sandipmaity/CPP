#include<iostream>
using namespace std;

int main() {
    enum Meal {Breakfast, Lunch, Dinner};
    cout<<Breakfast<<endl<<Lunch<<endl<<Dinner<<endl;
    cout<<"*******************************"<<endl;

    Meal m1 = Lunch; 
    Meal m2 = Dinner;
    cout<<m1<<endl<<m2<<endl;
    cout<<"*******************************"<<endl;
    cout<<(m1 == 1)<<endl<<(m2 == 0) <<endl;
    return 0;   
}
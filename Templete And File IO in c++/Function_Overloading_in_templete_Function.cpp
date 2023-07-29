#include<iostream>
using namespace std;

void func(int a){
    cout<<"1. I Am The First func() "<<a<<endl;
}
template<class T>
void func(T a){
    cout<<"2. I Am The Templetised func() "<<a<<endl;
}
template<class T>
void func1(T a){
    cout<<"3. I Am The Templetised func1() "<<a<<endl;
}
int main() {
    func(3);                   // Exact match takes The Highest Proirity
    func(2.3);                 // Exact match takes The Highest Proirity
    func1("Sandip Maity");    // Exact match takes The Highest Proirity
    return 0;
}
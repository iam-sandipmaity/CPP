#include<iostream>
using namespace std;
inline int Product (int a, int b) {
    return a * b;
}

int main() {
    int a, b;
    cout<< "Enter the value of a & b : ";
    cin>>a>>b;

//in  inline function the function call will not be happen it will run in the main funcion
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    cout<<"The Product Of "<<a<< " And "<<b<<" Is : "<<Product(a,b)<<endl;
    return 0;
}
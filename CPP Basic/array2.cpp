#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The value Of N : "<<endl;
    cin>>n;


    int array[n]; 
    
    for(int i =0; i< n; i++) {
        cout<<"Enter array["<<(i+1)<<"] Value : "<<endl;
        cin>>array[i];
    }
    cout<<endl;
    cout<<"********************The Value Of The array are******************** " <<endl;                  
    for(int i =0; i< n; i++) {
        cout<<"The Value Of array["<<(i+1)<<"] Is : "<<array[i]<<endl;;
    }
    return 0;
}
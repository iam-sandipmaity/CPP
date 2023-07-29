// Half Pyramid Pattern        
        
        /*
        * 
        * *
        * * * 
        * * * * 
        * * * * * 
        * * * * * *  
        */
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
Column =  1 to Row No.
for(row){
    for(col){
        //logic
        cout<<" * ";
    }
}

*/

#include<iostream>
using namespace std;

int main() {
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    for(int i =1 ; i<= n; i++){
        for(int j = 1; j <= i ; j++) {
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}

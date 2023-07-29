// Half Pyramid Pattern        
        
        /*
        1 
        1 2 
        1 2 3 
        1 2 3 4 
        1 2 3 4 5 
        1 2 3 4 5 6 
        1 2 3 4 5 6 7  
        */
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
Column =  1 to Row No.
for(i <= row){
    for(j <= i){
        //logic
        cout<<j<<" ";
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
    cin>>n;
    for(int i = 1 ; i <= n; i++){
        for(int j = 1 ; j <= i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
     
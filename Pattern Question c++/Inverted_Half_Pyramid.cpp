// Inverted Half Pyramid Pattern

/*
 1.   * * * * * *
 2.   * * * * *
 3.   * * * *
 4.   * * *
 5.   * *
 6.   *

*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
Column =1 to (n+1 - row no(i))
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
    cin>>n;
    
    for(int i =1 ; i <= n; i++) {
        for(int j = 1; j <=(n+1-i) ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
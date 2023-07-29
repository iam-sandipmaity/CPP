// 0-1 Pattern

/*
1.  - - - - * * * * * * 
2.  - - - * * * * * * 
3.  - - * * * * * * 
4.  - * * * * * * 
5.  * * * * * * 
             
*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
column Will Be in Two Part :
1. space (n-Row No)    2. "*" Print()

for(i <= n){
    //logic for Space
    for(j <= (n-i)){
        cout<<" ";
    }
    //logic For Star
    for(j <= n){
        cout<<"*";
    }
}

*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    #ifndef SANDIP_MAITY
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int n;
    cin>>n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= (n-i); j++) {
            cout<<" ";
        }
        for (int j = 1; j <= n; j++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    
    return 0;
}

/*
OutPut :
          * * * * * 
         * * * * * 
        * * * * * 
       * * * * * 
      * * * * * 
*/
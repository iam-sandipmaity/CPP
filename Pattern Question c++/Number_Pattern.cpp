//Number  Pattern

/*
1.  - - - - 1   
2.  - - - 1  2  
3.  - - 1  2  3  
4.  - 1  2  3  4
5.  1  2  3  4  5
             
*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
column Will Be in Two Part :
1. space (n-Row No)    2. "Number" Print()

for(i <= n){
    //logic for Space
    for(j <= (n-i)){
        cout<<" ";
    }
    //logic For Star
    for(j <= i){
        cout<<j<<" ";
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
            cout<<" ";  // Space Is Most Importent 
        }
        for (int j = 1; j <= i; j++) {
            cout<<j<<" ";// Space Is Most Importent 
        } // OtherWise Output Can Be Any Other
        cout<<endl;
    }
    return 0;
}

/*
output:-
     1 
    1 2 
   1 2 3 
  1 2 3 4 
 1 2 3 4 5 
1 2 3 4 5 6 

*/
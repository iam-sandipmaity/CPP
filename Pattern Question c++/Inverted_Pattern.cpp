// Inverted Pattern

/*
 1.   1 2 3 4 5 6
 2.   1 2 3 4 5
 3.   1 2 3 4
 4.   1 2 3
 5.   1 2
 6.   1

*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
Column =1 to (n+1 - row no(i))
for(row){
    for(col){
        //logic
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

    for(int i=1; i<=n; i++) {
        for(int j =1; j<=(n+1-i); j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
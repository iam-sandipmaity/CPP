// 0-1 Pattern

/*
1 
0 1 
1 0 1 
0 1 0 1 
1 0 1 0 1 
0 1 0 1 0 1 
1 0 1 0 1 0 1 
0 1 0 1 0 1 0 1


 1.   1(1,1)                   
 2.   0(2,1) 1(2,2)              
 3.   1(3,1) 0(3,2) 1(3,3)             
 4.   0(4,1) 1(4,2) 0(4,3) 1(4,4)            
 5.   1(5,1) 0(5,2) 1(5,3) 0(5,4) 1(5,5)                       
 6.   0(6,1) 1(6,2) 0(6,3) 1(6,4) 0(6,5) 1(6,6)              
*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
Column =1 to Row No.
for(i <= n){
    for(j <= i){
        //logic[ if ((i+j) % 2 == 0)]
        cout<<j<<"1";
        else{
            cout<<"0";
        }
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
    for(int i=1; i<=n; i++){
        for(int j=1; j<= i; j++){
            if((i+j) % 2 == 0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
        }
        cout<<endl;
    }
    return 0;
}
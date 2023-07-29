// Floyds Triangle Pattern        
        
        /*
        1 
        2 3 
        4 5 6 
        7 8 9 10 
        11 12 13 14 15 
        16 17 18 19 20 21 
        22 23 24 25 26 27 28 
        */
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
Column =  1 to Row No.
count = 1;
for(i <= n){
    for(j <= i){
        //logic
        cout<<count<<" ";
        count++;
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
    int n, count = 1;
    cin>>n;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i ; j++) {
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
    return 0;
}
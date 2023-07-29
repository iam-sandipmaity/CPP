// Floyds Triangle Pattern        
        
        /*       
            *             *
            * *         * *  
            * * *     * * *
            * * * * * * * *
            * * * * * * * *
            * * *     * * *
            * *         * *
            *             *
         
        */
/*
// Appoarch To Solve The Question
        Let's Solve This Upper Part

            *             *
            * *         * *  
            * * *     * * *
            * * * * * * * *
cin>>n
Rows = 1 to n

Here Column Will be Divided For Three Part

1.  Column =   Row No.
        * 
        * *
        * * * 
        * * * * 
    
2.  for Spaces 
 space = 2*n - 2*Row No.
3. 
column = row No.
            * 
          * * 
        * * * 
      * * * *

Then reverse The Row From n to 1 For The Down Pattern....
            * * * * * * * *
            * * *     * * *
            * *         * *
            *             *
            

for(i <= n){
    for(j <= i){
        //logic
        cout<<"*";
    }
    int space = 2*n - 2*Row No.
    for(j <= space){
        //logic
        cout<<" ";
    }
    for(j <= i){
        //logic
        cout<<"*";
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
    for(int i = 1; i <= n ; i++ ) {
        for(int j = 1; j <= i ; j++){
            cout<<"* ";
        }
        int space = 2*n - 2*i;
        for(int j = 1; j <= space ; j++){
            cout<<"  ";
        }
        for(int j = 1; j <= i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }

    //  For The Down part  

    for(int i = n; i >= 1 ; i-- ) {
        for(int j = 1; j <= i ; j++){
            cout<<"* ";
        }
        int space = 2*n - 2*i;
        for(int j = 1; j <= space ; j++){
            cout<<"  ";
        }
        for(int j = 1; j <= i ; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

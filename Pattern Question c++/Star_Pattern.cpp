// Palindromic  Pattern

/*
1. 
1. - - - - *                
2. - - - * * *                    
3. - - * * * * *                         
4. - * * * * * * *           
     * * * * * * *            
       * * * * *                         
         * * *                    
           *                
                      
                                                        
*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
column Will Be in two Part :
1. space (n-Row No)   

2. "Number" Print()
   
1.         *                
2.       * * *                    
3.     * * * * *                         
5.   * * * * * * *            
         
   
for(i <= n){
    //logic for Space
    for(j <= (n-i)){
        cout<<" ";
    }
    //logic For Star
    for(j <= (2*Row No -1)){
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
            cout<<"  ";   
        }
        for (int j = 1; j <= (2*i -1); j++) {
            cout<<" *";
        } 
        cout<<endl;
    }
    // For The Down Part 
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= (n-i); j++) {
            cout<<"  ";   
        }
        for (int j = 1; j <= (2*i -1); j++) {
            cout<<" *";
        } 
        cout<<endl;
    }
    return 0;
}

/*
OutPut:-
       *
     * * *
   * * * * *
 * * * * * * *
 * * * * * * *
   * * * * *
     * * *
       *
*/
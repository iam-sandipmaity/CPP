// Palindromic  Pattern

/*
1. 
1. - - - - 1                
2. - - - 2 1 2                    
3. - - 3 2 1 2 3                         
4. - 4 3 2 1 2 3 4            
5. 5 4 3 2 1 2 3 4 5             
                      
                                                        
*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n
column Will Be in Three Part :
1. space (n-Row No)   

2. "Number" Print()
   
            1                
          2 1                   
        3 2 1                      
      4 3 2 1            
    5 4 3 2 1  
  column = Row Number
3. "Number" Print()
        2
        2 3
        2 3 4
        2 3 4 5
        
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
        int j;
        for ( j = 1; j <= (n-i); j++) {
            cout<<"  "; //  Give Here 2 Spaces
        }
        int k = i;
        for ( ; j <= n ; j++) {
            cout<<k--<<" "; //  Give Here 1 Spaces
        }
        k=2;
        for ( ; j <= n+i-1 ; j++) {
            cout<<k++<<" ";  //  Give Here 1 Spaces
        }
        cout<<endl;
    }
    return 0;
}

/*
Output:-
              1 
            2 1 2 
          3 2 1 2 3 
        4 3 2 1 2 3 4 
      5 4 3 2 1 2 3 4 5 
    6 5 4 3 2 1 2 3 4 5 6 
  7 6 5 4 3 2 1 2 3 4 5 6 7 
8 7 6 5 4 3 2 1 2 3 4 5 6 7 8 

*/
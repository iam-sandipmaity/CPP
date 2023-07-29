//  Half Pyramid After 180 degree Rotation Pattern

/*
 1.  - - - - *
 2.  - - - * *
 3.  - - * * *      // Spaces = n-i
 4.  - * * * *
 5.  * * * * *   
*/
/*
// Appoarch To Solve The Question
cin>>n
Rows = 1 to n 
Column =1 to n
for(i <= row){
    for(j <= col){
        //logic [ if(j <= (n-i))]
        cout<<" "; //Here Space matter (give same space as star cout takes place)
        // logic[ else]
        cout<<"*"; //Here Space matter
        
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
    
    for (int i = 1; i <= n; i++) {
        for(int j = 1 ; j <= n ; j++){
            if(j <= (n-i)) {
                cout<<"  "; // 2 Space 
            } 
            else{
                cout<<"* "; //2 (1 space + star place = 2 space)
            } // give same Space For This Two cout otherwise Output Gives other Figure
        }
        cout<<endl;
    }

    
    // 2nd Way To write The logic

    //  for (int i = 1; i <= n; i++) {
    //     for(int j = 1 ; j <= (n-i) ; j++){
    //         cout<<" ";
    //     }
    //     for(int j = 1 ; j <=i ; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    
    
    return 0;
}
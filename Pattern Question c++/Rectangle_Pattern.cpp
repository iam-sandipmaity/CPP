        
// Rectangle Pattern        
        
        /*
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *
        * * * * * *  
        */
/*
// Appoarch To Solve The Question

Row = n;
col = m;
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
    int row, col;
    cout<<"Enter The row And Column No. : ";
    cin>>row>>col;

    for (int i = 1; i <=row; i++) {
        for (int j = 1; j <=col; j++) {
           cout<<" * ";
        }
        cout<<endl;
    }
    
    return 0;
}       
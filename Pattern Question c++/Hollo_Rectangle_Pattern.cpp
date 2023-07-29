// Hollo Rectangle Pattern        
        
        /*
        * * * * * *
        *         *
        *         *
        *         *
        *         *
        * * * * * * 
        */
/*
// Appoarch To Solve The Question

Row = n;
col = m;
for(i <= row){
    for(j <= col){
        //logic[if(i == 1 || i == row || j == 1 || j == row)]
        cout<<" * ";
        // logic [else]
        cout<<" ";
    }
}

*/

#include<iostream>
using namespace std;

int main() {
    int row, col;
    cout<<"Enter The Row And Col : ";
    cin>>row>>col;

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= col; j++) {
            if (i == 1 || i == row || j == 1 || j == col) {
                cout<<" *";
            }
            else {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    

    return 0;
}
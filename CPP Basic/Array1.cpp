#include<iostream>
using namespace std;

int main() {
    int marks[4] = {56,47,89,12};
    int Mathmarks[] = {10,25,85,99};    // it is not necessary to declaire the size of array if we declaire all the value of the array
    marks[2] = 557;             //also we can change the value of array after declaire it

    for(int i = 0; i<4 ; i++ ) {
        cout<<marks[i]<<endl;
    }
    cout<<endl;
    for(int i = 0; i<4 ; i++ ) {
        cout<<ends<<Mathmarks[i]<<endl;
    }


    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;
    // cout<<"\n \n \n ";
    // cout<<Mathmarks[0]<<endl;
    // cout<<Mathmarks[1]<<endl;
    // cout<<Mathmarks[2]<<endl;
    // cout<<Mathmarks[3]<<endl;

    


    return 0;
}
#include<iostream>
using namespace std;

int main() {
    int day;

    cout<<"Enter the day by 1-7 : "<<endl;    // 1- Monday , 2 - Tuesaday ,...., 7- Sunday
    cin>>day;

    switch (day) {
        case 1 :
        cout<<"Today Is Monday"<<endl;
        break;
        case 2 :
        cout<<"Today Is Tuesday"<<endl;
        break;
        case 3 :
        cout<<"Today Is Wednesday"<<endl;
        break;
        case 4 :
        cout<<"Today Is Thrusday"<<endl;
        break;
        case 5 :
        cout<<"Today Is Friday"<<endl;
        break;
        case 6 :
        cout<<"Today Is saturday"<<endl;
        break;
        case 7:
        cout<<"Today Is Sunday"<<endl;
        break;
        default: 
        cout<<"PLEASE ENTER A VALID DAY FROM 1 - 7"<<endl;
        break;

    }
    
    return 0;
}
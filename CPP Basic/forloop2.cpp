

// print 1 - 100 

#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter The value Of n : "<<endl;
    cin>>n;
    cout<<"***************First "<<n<<" Number Is ******************"<<endl;
    for (int i = 1; i <= n; i++) {
        cout<<i<<endl;
    }
    
    return 0;
}
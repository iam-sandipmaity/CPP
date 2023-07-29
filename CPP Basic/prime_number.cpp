//Prime number code


#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter A Number : "<<endl;
    cin>>n;
    int c = 1;
    for(int i = 2; i<n ; i++) {
        if(n % i == 0) {
            c++;
        }
    }

    if(c==1) {
        cout<<n<<" Is A Prime Number "<<endl;
    }
    else{
        cout<<n<<" Is Not A Prime Number "<<endl;
    }
    return 0;
}
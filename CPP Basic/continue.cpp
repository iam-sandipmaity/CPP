// print 1- 10 accept 5 


#include<iostream>
using namespace std;

int main() {
    for(int i =1; i<=10; i++) {
        if(i == 5) {
            continue;
            
        }
        cout<<i<<endl;
        
    }
    return 0;
}
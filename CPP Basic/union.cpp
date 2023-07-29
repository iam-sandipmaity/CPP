#include<iostream>
using namespace std;

union money {
    int rice;
    char car;
    float pounds;
};

int main() {
    union money sandip;
    sandip.rice = 25;
    sandip.car = 'S';
    cout<<sandip.car<<endl;
    return 0;
}
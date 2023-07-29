#include<iostream>
using namespace std;

// Calculate The Volume Of A Cylinder 
int volume(double r ,int h ){
    return (3.14*r*r*h);
}
// Calculate The Volume Of A cube 
int volume(int a) {
    return (a*a*a);
}
// Calculate The Volume Of A Rectanguler Box
int volume(int l, int b, int h) {
    return (l*b*h);
} 
int main() {
    cout<<"The Volume Of A Cylinder of redius 3 and hight 6 Is : "<<volume(3,6)<<endl;
    cout<<"The Volume Of A Cube of length 6 Is : "<<volume(6)<<endl;
    cout<<"The Volume Of A Rectanguler Box  of length 3, width 4 and hight 6 Is : "<<volume(3,4,6)<<endl;
    return 0;
}
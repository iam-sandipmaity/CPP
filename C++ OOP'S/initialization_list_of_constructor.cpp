#include<iostream>
using namespace std;

class test{
    int a;
    int b;
    public:
    // test(int i, int j) : a(i) , b(j) {        // a=5, b=3
    // test(int i, int j) : a(i) , b(i + j) {    // a=5, b=8
    // test(int i, int j) : a(i) , b(9 + j) {    // a=5, b=12
    // test(int i, int j) : a(i) , b(9 + i) {    // a=5, b=14
    // test(int i, int j) : a(i) , b(6 * i) {    // a=5, b=30
    // test(int i, int j) : a(i + j) , b(j) {    // a=8, b=3
    // test(int i, int j) : a( j) , b(i) {       // a=3, b=5
    // test(int i, int j) : a(i) , b(a+j) {      // a=5, b=8
    // test(int i, int j) : a(b) , b(j) {        // This Will Print A garbage value
    //because a is initialise first before b. to resolve this declaired b first then to b.
    // test(int i, int j) : a(i)  {      // a=5, b=3
        // b = j;

    test(int i, int j)   {      // a=5, b=3
        a = i;
        b = j;
        cout<<"The Value Of A Is : "<<a<<endl
        <<"The Value Of B Is : "<<b<<endl;
    } 
};
int main() {
    test(5,3);
    return 0;
}
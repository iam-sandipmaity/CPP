#include<iostream>
using namespace std;

template <class T>
class Sandip{
    public:
    T Data;
    Sandip(T a){ Data = a;}
    void display(void);
};
template <class T>
void Sandip<T>::display(void) {
    cout<<"The Value Of Data Is : "<<Data<<endl;
}
int main() {
    Sandip <string> S("I AM Sandip Maity.......");
    S.display();
    return 0;
}
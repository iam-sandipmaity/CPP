#include<iostream>
#include<string>
using namespace std;

class binary {
    string s;
    public:
    void read();
    void chk_bin();
    void Display();
    void Ones_Complement();
};

void binary :: read(){
    cout<<"Enter The binary Number : "<<endl;
    cin>>s;
}
void binary :: chk_bin(){
    for(int i =0 ; i < s.length() ; i++) {
        if(s.at(i) != '0' && s.at(i) != '1'){
            cout<<"Incorrect Binary Formate."<<endl;
            exit(0);
        }
    }
}
void binary :: Display(){
    cout<<endl<<"*******************The Binary Number Is******************* "<<endl;
    for(int i = 0; i < s.length() ; i++){
        cout<<" "<<s.at(i);
    }
}
void binary::Ones_Complement(){
    for(int i = 0; i < s.length() ; i++){
        if(s.at(i) == '1') {
            s.at(i) = '0';
        } else {
            s.at(i) = '1';
        }
    }
}

int main(){
    binary b;
    b.read();
    b.chk_bin();
    b.Display();
    b.Ones_Complement();
    b.Display();
    return 0;
}
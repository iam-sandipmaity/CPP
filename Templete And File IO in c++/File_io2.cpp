#include<iostream>
#include<fstream>
using namespace std;

int main() {
    ofstream hout("sample.txt");
    cout<<"Enter Your Name :  ";
    string name;
    cin>>name;
    hout<<name + " My Name Is Name";
    hout.close();

    ifstream hin("sample.txt");
    string content;
    hin>>content;
    cout<<"My Content Of The File Is : "<<content;    
    return 0;
}
#include<iostream>
#include<fstream>
#include<string>
using namespace std;
// open() And eof() Function

int main() {
    ofstream out;
    out.open("sample.txt");
    out<<"This Is Me \n";
    out<<"This Is Also Me \n";
    out<<"This Is Alsi Me \n";
    out.close();

    ifstream in;
    string st;
    in.open("sample.txt");
    // in>>st;
    // cout<<st;

    while (in.eof() == 0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    in.close();
    

    return 0;
}
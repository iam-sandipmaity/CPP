#include<iostream>
#include<fstream>
using namespace std;

int main() {
    // opening files with constructors and writing it
    string s1 = "I Am Sandip Maity \nfrom Kanpur\n I Like TO Play Cricket";
    ofstream sout("sample.txt");
    
    sout<<s1;
    sout.close();
    // opening files with constructors and reading it
    string s2,s3;
    ifstream sin("Example.txt");
    // sin>>s2;
    // cout<<s2;

    getline(sin,s2);
    getline(sin,s3);
    cout<<s2<<s3;
    return 0;
}
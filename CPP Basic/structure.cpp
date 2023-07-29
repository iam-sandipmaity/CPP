#include<iostream>
using namespace std;

typedef struct employee {
    int id;
    string name;
    float salary;
}em;


int main() {
    // struct employee sandip;
    em sandip;
    em rahul;
    sandip.name = "Sandip Maity";
    sandip.id = 001;
    sandip.salary = 120000;
    // struct employee rahul;
    rahul.name = "Rahul Dutta";
    rahul.id = 002;
    rahul.salary = 140000;

    cout<<sandip.name<<endl<<sandip.id<<endl<<sandip.salary<<endl;                                   
    cout<<rahul.name<<endl<<rahul.id<<endl<<rahul.salary<<endl;                                   
    return 0;
}
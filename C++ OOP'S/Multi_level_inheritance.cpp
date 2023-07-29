// Make A Example Of Multi-Level-inheritance

#include<iostream>
using namespace std;

class Student{
protected:
    int roll_number;
public:
    void set_roll_number(int r);
    void get_roll_number(void);
};
void Student::set_roll_number(int r){
    roll_number = r;
}
void Student::get_roll_number(void) {
    cout<<"Your Roll Number Is : "<<roll_number<<endl;
}

class exam  : public Student{
protected:
    float math, physics;
public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam::set_marks(float m1, float m2){
    math = m1;
    physics = m2;
}
void exam ::get_marks(){
    cout<<"The Mark obtain in math is : "<<math<<endl;
    cout<<"The Mark obtain in physics is : "<<physics<<endl;
}

class result : public exam{
    float percentage;
public:
    void display(){
        cout<<"Your Percentage is : "<<(math+physics)/2<<endl;
    }
};


int main() {
    result sandip;
    sandip.set_roll_number(302);
    sandip.set_marks(96,94);
    sandip.display();
    return 0;
}
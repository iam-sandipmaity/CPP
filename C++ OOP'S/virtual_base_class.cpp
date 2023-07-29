// Give An Example Of Vertual Base Class

#include<iostream>
using namespace std;

class student{
    protected:
    int roll_number;
    public:
    void Set_roll_number(void) { 
        cout<<"Enter Your Roll Number : ";
        cin>>roll_number;
    }
    void diplay_roll_number(void){
        cout<<"Your Roll Number Is : "<<roll_number<<endl;
    }
};
class exam : virtual public student{
    protected:
    float math,physics;
    public:
    void Set_exam_number(){
        cout<<"Enter Your math Mark : ";
        cin>>math;
        cout<<"Enter Your physics Mark : ";
        cin>>physics;
    }
    void display_exam_number(){
        cout<<"Your math Mark Is : "<<math<<endl<<"Your physics Mark Is : "<<physics<<endl;
    }
};
class sports : virtual public student{
    protected:
    float score;
    public:
    void Set_Score() {
        cout<<"Enter Your Sports Score : ";
        cin>>score;
    }
    void display_sports_score(){
        cout<<"Your Sports Score Is : "<<score<<endl;
    }
};
class Result : public exam,public sports{
    float total;
    public:
    void diplay(){
        total = math + physics + score;
        diplay_roll_number();
        display_exam_number();
        display_sports_score();
        cout<<"Your total Score Is : "<<total<<endl;
    }
};
int main() {
    Result sandip;
    sandip.Set_roll_number();
    sandip.Set_exam_number();
    sandip.Set_Score();
    sandip.diplay();
    return 0;
}
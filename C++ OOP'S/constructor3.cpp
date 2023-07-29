// Make A Function  To Add Two Point 
#include<iostream>
using namespace std;
// Make A Function  To Add Two Point 

class point{
    friend void Sum_Display(point , point);
    int x,y;
public:
    point(int a,int b){
        x = a;
        y = b;
    }
    void Display(){
        cout <<"The Point Is : ("<<x<<" , "<<y<<")"<<endl;
    }
};
void Sum_Display(point p1, point p2){
    int Sum_X = p1.x + p2.x;
    int Sum_y = p1.y + p2.y;
    cout <<"The Point Is : ("<<Sum_X<<" , "<<Sum_y<<")"<<endl;
}
int main() {
    point a (1,5);
    point b (7,6);
    a.Display();
    b.Display();
    Sum_Display(a,b);
    return 0;
}
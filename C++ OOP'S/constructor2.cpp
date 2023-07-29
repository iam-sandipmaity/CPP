//Create A Function Which Takes 2 points objects and computes the 
//distance between those 2 points 
#include<iostream>
#include<math.h>
using namespace std;

class point{
    friend void point_distance(point , point);

    int x,y;
public:
    point(int a,int b){
        x = a;
        y = b;
    }
    void printNumber(){
        cout << "Your Point Is : (" << x << " , " << y << ")" << endl;
    }
};
void point_distance(point p1, point p2){
    int distance_x,distance_y,distance;
    distance_x = (p1.x - p2.x);
    distance_y = (p1.y - p2.y);
    distance = sqrt( pow ( distance_x , 2 ) + pow ( distance_y, 2) );
    cout<<"The Distance Is : "<<distance<<endl;
}
int main() {
    point a(4,8),b(7,3),c(4,1),d(12,9),e(4,21),f(8.,14);

    point_distance(a,b);
    point_distance(c,d);
    point_distance(f,e);
    return 0;
}
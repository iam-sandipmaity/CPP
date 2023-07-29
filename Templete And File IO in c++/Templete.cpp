#include<iostream>
using namespace std;

// class vector{
//     public:
//     int* arr;
//     int size;
//     vector(int m){
//         size = m;
//         arr = new int[size];
//     }
//     int dot_product(vector &v){
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d += this->arr[i] * v.arr[i];
//         }
//         return d;
//     }
// };

//initialize of templete function
template < class T>
class vector{
    public:
    T* arr;
    int size;
    vector(int m){
        size = m;
        arr = new T[size];
    }
    T dot_product(vector &v){
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d += this->arr[i] * v.arr[i];
        }
        return d;
    }
};
int main() {
    vector<float> v1(3);
    v1.arr[0] = 1.2;
    v1.arr[1] = 4.45;
    v1.arr[2] = 3.2;

    vector<float> v2(3);
    v2.arr[0] = 0.3;
    v2.arr[1] = 2.6;
    v2.arr[2] = 0.23;
    float a = v1.dot_product(v2);
    cout<<a<<endl;
    return 0;
}
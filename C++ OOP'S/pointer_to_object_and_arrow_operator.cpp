#include <iostream>
using namespace std;

class complex
{
    int real, imaginary;

public:
    void SetData(int a, int b)
    {
        real = a, imaginary = b;
    }
    void GetData(void)
    {
        cout << "The value Of The Real Part Is : " << real << endl;
        cout << "The value Of The imaginary Part Is : " << imaginary << endl;
    }
};
int main()
{
    /* // Normally We Create An object By The Traditional
    //way And then we invoked The Other Function by the class
    complex c;
    c.SetData(5,3);
    c.GetData();
    */

    /*
    // By The Pointer
    // We Create And object Of Thje Class Then We Store The Address Of the Object in An Pointer
    // Then by Dereference We Call To The Member Function Of The class By The help of Pointer
    complex c;
    complex *ptr = &c;
    (*ptr).SetData(1,5);
    (*ptr).GetData();
    */

    /* 
    // Here We Dynamically Allocate Memory For The Class By The help Of the pointer 
    //And Then We Dereference Them By the Member Function
    complex *ptr = new complex;
    (*ptr).SetData(1, 5);
    (*ptr).GetData();
    */
//ARROW OPERATOR 
    /*
    //ARROW OPERATOR 
    complex *ptr = new complex;
    ptr->SetData(1,6);  // '->' Is ARROW Operator
    ptr->GetData();
    */

    // Array of An Object
    complex *arr = new complex[2];
    arr->SetData(1,8);
    arr->GetData();
    return 0;
}
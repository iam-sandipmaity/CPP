#include<iostream>
using namespace std;

int main() {
    // Basic Example Of pointer
    int a = 4;
    int * ptr = &a;
    *ptr = 99;
    cout<<"The Value Of a Is : "<<(*ptr)<<endl;
    cout<<"The Address Of a Is : "<<(ptr)<<endl;

    // New Keyword /operator
    int* ptr1 = new int (40);
    /*by the new keyword we allocate memory by dynamically(in run time process)*/
    cout<<"The Value Of ptr1 Is : "<<(*ptr1)<<endl;
    float* ptr2 = new float (40.0234);
    cout<<"The Value Of ptr2 Is : "<<(*ptr2)<<endl;
    

    // We Can Also Allocate Dynamic memory For Array Also
    int*arr = new int[4]; 
    /*this is the simple syntax to store block of memory in term of array */ 
    // we can give the value to the dynamically created array 
    arr[0] = 10;
    // arr[1] = 20;
    //we can assign value to the array by pointer arithmetics
    *(arr+1) = 20;
    arr[2] = 30;

    cout<<"The Value of arr[0] Is : "<<arr[0]<<endl;
    cout<<"The Value of arr[1] Is : "<<arr[1]<<endl;
    cout<<"The Value of arr[2] Is : "<<arr[2]<<endl;

    // Delete Operator 
    delete arr; //It Will Free Dynamically Allocated Memory At arr
    delete [] arr; //It Will Free Dynamically Allocated block of Memory At arr
    
    cout<<endl<<"After The Delete To The Dynamically Allocated memory"<<endl<<endl;
    cout<<"The Value of arr[0] Is : "<<arr[0]<<endl;
    cout<<"The Value of arr[1] Is : "<<arr[1]<<endl;
    cout<<"The Value of arr[2] Is : "<<arr[2]<<endl;

    return 0;
}
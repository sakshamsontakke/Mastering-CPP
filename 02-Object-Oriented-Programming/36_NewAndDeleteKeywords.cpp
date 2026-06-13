#include <iostream>
using namespace std; 

// new and delete Keywords in C++
/*
    1. new --> type* namePtr = new type(value);
           --> type* nameArr = new type[4];

    2. delete --> delete []
              --> delete   
        i) Frees (deallocates) the memory that was allocated by new.
        ii) Makes that memory available for reuse by the system.

    3. why we use 'delete [] arr' instead of 'delete arr'?
        --> since we 'arr' means the address of first element
            so  if we write 'delete arr' it deletes the first one only 
            whereas 'delete [] arr' frees (deallocates) the whole array.    
*/

int main(){ 

    // Basic of pointers
    int a = 10;
    int* ptr = &a;
    cout<<"the value of a is : "<<*ptr<<endl;
    *ptr = 80;
    cout<<"the value at address ptr is : "<<*ptr<<endl;

    // 'new' operator
    int* p = new int(40);
    cout<<"the value at address p is: "<<*p<<endl;
    
    float* m = new float(100);
    cout<<"the value at address m is: "<<*m<<endl;

    //creating array using 'new' operator
    int* arr = new int[4];

    arr[0] = 10;
    arr[1] = 20;

    // arr[2] = 30;
    //we can also write it as
    *(arr+2) = 30;


    // 'delete' operator 
    delete[] arr; //comment out this code to make sure below code works

    cout<<"the value of arr[0] : "<<arr[0]<<endl;
    cout<<"the value of arr[1] : "<<arr[1]<<endl;
    cout<<"the value of arr[2] : "<<arr[2]<<endl;


    return 0;
}
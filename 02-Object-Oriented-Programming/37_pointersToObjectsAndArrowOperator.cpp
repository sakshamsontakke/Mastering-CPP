#include <iostream>
using namespace std; 

// Pointers to Objects and Arrow Operator in c++

class complex{
    int real , imaginary;
    public:
        void setData(int a , int b){
            real = a;
            imaginary = b;
        }
        void getData(){
            cout<<"the value of real part is: "<<real<<endl;
            cout<<"the value of imaginary part is: "<<imaginary<<endl;
        }
};

int main(){ 

    // old method for creating an class object
    complex object1;
    object1.setData(20,30);
    object1.getData();


    //using pointer to object
    /*
        1. syntax: complex* ptr = &(object);
        2. syntax: (*ptr).(memberFunctions/variables);
    */
     complex obj2;
     complex* ptr1 = &obj2;
     (*ptr1).setData(50,50);
     (*ptr1).getData();



    // creating a object using 'new' operator
    /*
        syntax: (className)* ptr = new (className)
    */
    complex* ptr2 = new complex;




    // Arrow operator(syntax: ptr->(memberfunction/variable))
    complex* ptr3 = new complex;
    ptr3->setData(99,88);
    ptr3->getData();



    
    // Array of objects(syntax: (className)* ptr = new (className)[value] )
    complex* ptr4 = new complex[4];
    ptr4->setData(99,88);
    ptr4->getData();

    return 0;
}
#include <iostream>
using namespace std; 

int main(){ 

    //what is pointers---> pointer is the datatypes which holds the value of another data types

    int a = 3;
    int* b = &a; //this is how we create a pointer variable


    //& ---> (address of) operator
    cout<<"address of a is "<< &a <<endl; //this shows the address of the variable
    cout<<"address of a is "<< b <<endl;



    //* ---> (value at)  dereference operator
    cout<<"the value at address b is"<<*b<<endl;  //this show the value that address stores (output: 3)





    // pointer to pointer (it stores the address of address of variable)
    int** c = &b ; //b is already a pointer 

    cout<<"the address of b is "<<&b<<endl; //this gives the address of the pointer which already holds a address
    cout<<"the address of b is "<<c<<endl; //this gives the address of the pointer which already holds a address

    cout<<"the value at address c is "<< *c <<endl; //this gives the value at address c
    cout<<"the value at address value_at(value_at(c)) "<< **c <<endl; // this gives the value of value of address c 


    return 0;
}
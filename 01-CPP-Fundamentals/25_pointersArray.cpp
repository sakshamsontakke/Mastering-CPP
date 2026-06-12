#include <iostream>
using namespace std; 

int main(){ 

    //pointer Arrays: (NOTE: visit video too for more further details and notes)
    /*
        array: { _ , _ , _ , _ }
        index:   0   1   2   3    (indices)

        NOTE: we don't have to use "&" to get the adress of our array , if we do it will gives error (eg. cout<< &nameOfArray ; ----->error(wrong))
        So , THE NAME OF THE ARRAY IS ALREADY AN POINTER OR HOLDS AN ADDRESS(eg. marks---> it hold the address of FIRST ELEMENT!)
        to access diffrent elements's addresses we need to increment our Array(eg.marks++)
        or 
        int* p = marks;
        cout<<*p<<endl; it gives index 0 element
        cout<<*(p++)<<endl; it will give index 0 element then increment it
        cout<<*(p++)<<endl; it will give index 1 element then increment it
        cout<<*(p++)<<endl; it will give index 2 element then increment it 


        let's dive into it with help of some examples.......
    */

    int marks[4] = { 55, 66, 77, 88};      //creating an Array with  4 elements in it.

    // marks-----> address of first block(VERY IMPORTANT)
    int* p = marks;              //creating a pointer varibale(p)  which  hold address of marks.[by  deafault marks stores the address of first element]
    cout<<"the value marks[0]: "<<*p<<endl;     //it gives the value of first element 
    cout<<"the value marks[1]: "<<*(p+1)<<endl; // it gives the value of the second element 
    cout<<"the value marks[2]: "<<*(p+2)<<endl; //it gives the value of the third element 
    cout<<"the value marks[3]: "<<*(p+3)<<endl; // it gives the value of fourth element  

    //using increment 
    cout<<"the value of *p :"<<*p<<endl;      //it gives the value of First element of marks (output:55)
    cout<<"the value of *p++ :"<<*p++<<endl;  //it gives the value of First element of marks(output55) then incremenent p , p becomes 66 now
    cout<<"the value of *p++ :"<<*p++<<endl;  // it gives the value of second element(66) then increment p , p becomes 77 now.
    cout<<"the value of *p++ :"<<*p++<<endl;  //it gives the value of third element(88) then increments p 
    // if we further increment id array becomes out of range ut C++ wil find NEARBY MEMORY VALUE.


    //pointer arithematic (VERY VERY IMPORTANT)
    /*
        address(new) = address(current) + i*size_of(dataType)
              |               |
              |               |
            (p + i)           (p)
    
        eg.    36   =          32      + 1*4
    */

    return 0;
}
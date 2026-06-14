#include <iostream>
using namespace std; 

// Virtual Functions in C++
/*
    1. A virtual function is a member function in the base class that allows a derived class to override it, 
       and when called through a base class pointer or reference, the correct function is chosen at runtime.
    2.A virtual function tells C++ that if this function is overridden in derived classes, 
      then when called through a base pointer/reference, choose the function according to the actual object at runtime.   

    3.i)Override + No Virtual
            ↓
        Compiler looks at pointer type
            ↓
        Static Binding

     ii)Override + Virtual
            ↓
        Program looks at actual object
            ↓
        Dynamic Binding  

    4.static binding --> early binding(The compiler decides during compilation which function should be called.)
    5.dynamic binding --> late binding(The decision is made during runtime based on the actual object.)
*/

class Base{
public:
    int baseData = 1;

    // creating a virtual function: now this function(display) can be override and derived function(display) will be selected 'whenever a base class pointer will point a derived object'.
    virtual void display(){
        cout << "1 . The value of baseData is : " << baseData << endl;
    }
};

class Derived : public Base{
public:
    int derivedData;

    void display(){
        cout << "2. The value of baseData is : " << baseData << endl;
        cout << "2. The value of derivedData is : " << derivedData << endl;
    }
};


int main(){ 

    // creating a base class pointer 
    Base* baseClassPointer;

    // creating a derived class object
    Derived derivedObject;
    
    // creating a base class pointer that points to derived class 'OBJECT.'
    baseClassPointer = &derivedObject;

    // since the the display() function in the base class is now virtual now there for display() function 
    // from the base class will be override with the display() function from the derived class .

    baseClassPointer->display();

    /*
        output:
        2. The value of baseData is : 1
        2. The value of derivedData is : 0  

        ---> the output will come from derived class since the display function is override from the base one to the new one
    */

    

    return 0;
}
#include <iostream>
using namespace std;

// Pointers to Derived Classes in C++
// Understanding Runtime Polymorphism

/*
    Suppose both Base and Derived classes contain a function with the same name "display()".

    Which display() function gets called depends on the type of pointer and whether
    the function is virtual.

    Since display() is NOT virtual here, function binding happens at compile time
    (Early Binding / Static Binding).
*/

class Base{
public:
    int baseData;

    void display(){
        cout << "The value of baseData is : " << baseData << endl;
    }
};

class Derived : public Base{
public:
    int derivedData;

    void display(){
        cout << "The value of baseData is : " << baseData << endl;
        cout << "The value of derivedData is : " << derivedData << endl;
    }
};

int main(){

    // Pointer of type Base
    Base* baseClassPointer;

    // Creating a Derived class object
    Derived derivedClassObject;

    // A Base pointer can point to a Derived object
    // because Derived IS-A Base
    baseClassPointer = &derivedClassObject;

    // Base pointer can access only Base class members
    baseClassPointer->baseData = 40;

    // Since display() is NOT virtual,
    // Base::display() is called (Early Binding)
    baseClassPointer->display();

    // ERROR:
    // baseClassPointer->derivedData = 60;
    // Base pointer knows only Base members.

    cout << endl;

    // Pointer of type Derived
    Derived* derivedClassPointer;

    // Derived pointer points to Derived object
    derivedClassPointer = &derivedClassObject;

    /*
        A Derived pointer can access:

        1. Members inherited from Base
        2. Members defined inside Derived
    */

    derivedClassPointer->baseData = 100;
    derivedClassPointer->derivedData = 200;

    // Calls Derived::display()
    derivedClassPointer->display();

    return 0;
}
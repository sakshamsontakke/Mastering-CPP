#include <iostream>
using namespace std; 

// Parameterised Constructor

class Complex{
    int a;
    int b;
    public:
        Complex(int x , int y);   
        void printNumber(void){
            cout<<"the complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};  


Complex ::Complex(int x , int y){  //this is the Parameterised Constructor as it takes 2 arguments
   a = x;
   b = y;
}

int main(){ 

    // Complex obj1 , obj2;  --->this will give error since we declared parameterised constructor so we have to pass values too.
    
    //Implicit Call (syntax: class_name object_name(values) )
    Complex obj1(5 , 5);

    // Explicit Call (syntax: class_name object_name = class_name(values) )
    Complex obj2 = Complex(4,4);

    obj1.printNumber();
    obj2.printNumber();

    return 0;
}



#include <iostream>
using namespace std; 

//Constructors--->
/*
    1. Contructor is a special member function with the SAME NAME AS OF THE CLASS .
    2. it is used to intialize the objects of it's class.
    3. it is automatically invoked(function called) whenever an object is created.
*/

class Complex{
    int a;
    int b;
    public:
        Complex(void);   //Contructor Declaration.
        void printNumber(void){
            cout<<"the complex number is : "<<a<<" + "<<b<<"i"<<endl;
        }
};  

//this is a default contructor as it takes no Parameter 
//this function will work when an object is created , we don't manually have to call it.
Complex ::Complex(void){   
    a = 5;
    b = 10;

    // cout<<"hello world"<<endl;   ---> this can work too!!!
}

int main(){ 

    Complex obj;  // creating object of complex class.
    obj.printNumber();  // using printNumber function to print "a" and "b".
    
    Complex obj1 , obj2;   //we can create multiply objects....
    obj1.printNumber();
    obj2.printNumber();

    /* output:
        the complex number is : 5 + 10i
        the complex number is : 5 + 10i
        the complex number is : 5 + 10i
    */



    return 0;
}


/*
    characterstics of Constructors---->
    1. It should to be declared in the public section of the class.
    2. They are automaticallt invoked(called) whenever the object is created.
    3. the cannot return values and do not have return types.
    4. it can have default arguments(eg. int , bool , float etc.).
    5. we cannot refer to thier address ,
        ---> We cannot refer to the address of a constructor because constructors are special member
             functions used exclusively for object initialization, have no function type,
             and therefore cannot have pointers or references to them. 
*/
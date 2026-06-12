#include <iostream>
using namespace std; 

// Copy Constructor in C++
/*
    # what is copy constructor?
    1. copy constructor is a constructor inside a contructor which holds reference of object.
        eg. constructorName(constructor_name &object);
    2. if copy constructor is not created compilers uses the default copy constructor(important)
    3. copy constructor is a crucial topic in terms of interviews too.     
*/

class Number{
    int a;
    public:
        //creating two constructor 
        // default one 
        Number(){
            a = 0;   //assigning a = 0 , if nothing is passes while declaring the objects.   
        } 
        Number(int num){
            a = num; //assigning the value user will provide while declaring the objects.
        }

        // creating a copy constructor
        //evrn if we don't write below code the program will still work , since compiler will use a default copy compiler
        Number(Number &object){  // assigning a the object to a object for copy Constructor . 
            a = object.a ;
            cout<<"copy constructor called!!!"<<endl;
        }

        void display(void);
            
        
};

void Number ::display(void){
    cout<<"the value 'a' is: "<<a<<endl;
}

int main(){ 

    Number obj1 , obj2 ;  //value of a will be assigned 0 as default
    Number obj3(45);  //since value is passes then a will be 45 

    obj1.display();
    obj2.display();
    obj3.display();

    //copy constructor will be invoked
    Number obj4_copy_cons1(obj1);  
    Number obj4_copy_cons2(obj2);
    Number obj4_copy_cons3(obj3);

    obj4_copy_cons1.display();
    obj4_copy_cons2.display();
    obj4_copy_cons3.display();


    Number testObj1; 
    testObj1 = obj3; // this will not invoke the copy Constructor since both of the object is already made (very Important)
    testObj1.display(); // you will be able to see value of a become 45 but but that is due to compiler default copy constructor.

    Number testObj2 = obj3; // now copy constructor will be called since a new object is defined
    testObj2.display(); //we will see copy 'constructor called!!!' as output

    /*
        output:
        the value 'a' is: 0
        the value 'a' is: 0
        the value 'a' is: 45

        copy constructor called!!!
        copy constructor called!!!
        copy constructor called!!!

        the value 'a' is: 0
        the value 'a' is: 0
        the value 'a' is: 45
        
        the value 'a' is: 45
        
        copy constructor called!!!
        the value 'a' is: 45
    */

    return 0;
}
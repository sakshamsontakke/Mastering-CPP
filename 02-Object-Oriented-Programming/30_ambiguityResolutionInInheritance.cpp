#include <iostream>
using namespace std; 

// Ambiguity Resolution in Inheritance in C++
/*  
    # Defnation: 
    ---->Ambiguity is a situation in which the compiler cannot determine which member,
         function, or base class to use because multiple equally valid options exist.

    1.imagine to classes with same function "greet()" , both prints diffrent 
      output when we make another derived class from them using multiple inheritance
      and try to use greet function from derived class , compiler confuses and throw
      error.
    2. to solve this ambiguity we do,
        i) define 'greet()' function again in derived class
        ii) inside th function we write "baseClassName :: greet();"
            baseClassName --> name of class to use greet() function out of two
        iii) "::" --> this is called scope resolution operator    
*/  

class base1{
    public: 
        void greet(){
            cout<<"good morning"<<endl;
        }
};

class base2{
    public: 
        void greet(){
            cout<<"good night"<<endl;
        }
};

class derived : public base1 , public base2{
    int a;
    public:
        //in order to fix "greet()" ambuguity we have to use this method 
        void greet(){
            base1 :: greet();
        }
};


// another example
class testBase{
    public:
        void say(){
            cout<<"how you doing?"<<endl;
        }
};

class derivedTest : public testBase{
    public:
        // the say() function will be overwrite in this case
        void say(){
            cout<<"kya ker rhe ho?"<<endl;
        }
};

int main(){ 

    //ambiguity 1
    base1 obj1;
    base2 obj2;
    obj1.greet();
    obj2.greet();

    derived obj3;

    // obj3.greet();  -->this will throw error since compiler confuses which greet() to use 
    obj3.greet();  // --> now this will not throw any error since we defined this function in derived class



    //ambiguity 2
    testBase val1;
    derivedTest val2;
    val1.say();  //--> this print 'how you doing?'
    val2.say();  //--> this prrints 'kya ker rhe ho?'
    /*
        # what is happening here:
        we derived derivedTest class from testBase class in which it 
        overwrited the say() function.
        it is because the compile know that there is only one say() function above
        as compared to another example where their are 2 same function coming from base classes
        to derived one.
    */

    return 0;
}
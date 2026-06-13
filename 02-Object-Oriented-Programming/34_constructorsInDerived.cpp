#include <iostream>
using namespace std; 

// Constructors in Derived in C++
/*
    CASE1:
    class derived : public base{
        order of excution of constructor will be (base--->derived)
    }

    CASE2:
    class derived : public base1 , public base2{
        order of exuction of constructor will be  (base1--->base2--->derived)
    }

    CASE3:
    class derived : public base1 , public virtual public base2{
        order of excution of constructor will be (base2--->base1--->derived)
    }

    # EXPLANATION:
        class derived : public base1 , public base2
        ---> base class will always be executed first but if their are more than 1 base class then 
             we have to use left-to-right to determine which base class contructor will be called first .\

    # SPECIAL SYNTAX to pass arguments using derived class to base class 
    ---> derived(int a, int b, int c, int d) : base1(a) , base2(b){}            
*/

class base1{
    int data1;
    public:
        base1(int a){
            data1 = a;
            cout<<"class 'base1' constructor called successfully!!"<<endl;
        }
        void displayBase1(void){
            cout<<"the value of data1 is: "<<data1<<endl;
        }
};

class base2{
    int data2;
    public:
        base2(int a){
            data2 = a;
            cout<<"class 'base2' constructor called successfully!!"<<endl;
        }
        void displayBase2(void){
            cout<<"the value of data2 is: "<<data2<<endl;
        }
};

//creating a derived class 
class derived : public base1 , public base2{
    int deriveddata1 , derivedData2;
    public:
    // SPECIAL SYNTAX to pass arguments using derived class to base class 
    /*
        derived(int a, int b, int c, int d) : base1(a) , base2(b){}
    */
        derived(int a, int b, int c, int d) : base1(a) , base2(b){
            deriveddata1 = c;
            derivedData2 = d;
            cout<<"class 'derived' constructor called successfully!!"<<endl;
        }
   
};

int main(){ 

    //creating a class object
    derived object(10,20,30,40);

    // passing values(2 methods)
    // derived object(10,20,30,40);  --> implicit call
    // derived object = derived(10,20,30,40);  --> explicit call

    object.displayBase1();
    object.displayBase2();

    
    /*
        # CONCEPT:
        1. class derived : public base1 , public base2 {....}
            -> 1st 'base1' constructor will be called since it is defined first 
            -> then 'base2' constructor will be called 
            -> then the 'derived' constructor will be called

        2. class derived : public base2 , public base1 {....}
            -> 1st 'base2' constructor will be called since it is defined first 
            -> then 'base1' constructor will be called 
            -> then the 'derived' constructor will be called    
    */


    return 0;
}
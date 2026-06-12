#include <iostream>
using namespace std; 

// Single Inheritance in C++
// A--->B


// creating a base class
class base{
    int data1; //this is by default private so it will not be inherited
    public:
        int data2;
        void setData(void);
        int getData1();  //since we cant access private member form inherited class(derived) so we declared a function that is public which can manipulate private member of base class
        int getData2();
};

void base ::setData(void){ // setting the values of data1(private)and data2(public)
    data1 = 10;
    data2 = 20;
}
int base ::getData1(){ //we can't access private member but we can acces it through a public function that uses the private member
    return data1;
}
int base ::getData2(){
    return data2;
}

class derived : private base{  //changing visibility mode to private
    int data3;  //this is by default private so it will not be inherited or accesable directly
    public:
        void process(void);
        void display(void);
};

void derived ::process(void){
    setData();
    /*
        'setData()' can be accessed from here since 'process()' is from a derived class of base class
        even though it's private but class's functions can acces thier private members.
    */
    data3 = data2 * getData1(); 
    /*
        1. since data2 is a member of derived class so we can use it in our function
        2. data2 is public in base class also our class visibility is public since 
            public members of base class becomes public members of derived class.
        3. Since getData1() function is needed , because the variable we want from 
            the getData1() exits in the base class as private member   
          
    */
}

void derived ::display(void){

    cout<<"the value of data 1 is :"<<getData1()<<endl;
    cout<<"the value of data 2 is :"<<data2<<endl;
    cout<<"the value of data 3 is :"<<data3<<endl;
}


int main(){ 

    derived val;

    /*
        val.setData(); 

        now we can't use the above code 'setData()' , since the visibility mode is now private 
        so the public members of base class became private members of derived class 
        that's why we cant access 'setData()' function directly in our main function 
        since it is a private members
    */
    
    val.process();
    val.display();
    
    return 0;
}
#include <iostream>
using namespace std; 

// Class Templates with Default Parameters in C++
/*
    1. Syntax: template<class T1 = int , T2 = float>
    2. the default parameter that we passed will work 
        unless we change it later while defining a object 

*/

template<class T1 = int , class T2 = float , class T3 = char >
class test{
    T1 a;
    T2 b;
    T3 c;
    public:
        test(T1 x , T2 y , T3 z) : a(x) , b(y) , c(z){}
        void display(void){
            cout<<"the value of a is : "<<a<<endl;
            cout<<"the value of b is : "<<b<<endl;
            cout<<"the value of c is : "<<c<<endl;
        }
};

int main(){ 

    // creating a object with default parameters
    test<> obj1(4, 4.4,'s');
    obj1.display();

    cout<<endl;


    // Creating a object with modified parameters
    test<char,char,char> obj2('s','h','p');
    obj2.display();

    return 0;
}
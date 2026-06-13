#include <iostream>
using namespace std; 

// this Pointer in C++
// 'this' is a pointer to the object that is currently executing the member function.
// 'this' points to the object which called the member function 
/*
    suppose their is a object name "sakky" and sakky is calling a member function "salary"
    like this --> sakky.salary() , so "this" will point to sakky(object)
*/

class test{
    int a;
    public:
        void setData(int a){
            // a = a; --> this will give the garbage value since the priority of a(as argument) is more.
            this->a = a; //'this' is a pointer to the object that is currently executing the member function.
        }
        void getData(){
            cout<<"the value of a is : "<<a<<endl;
        }
};

int main(){ 

    test obj;
    obj.setData(5);
    obj.getData();

    return 0;
}
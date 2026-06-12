#include <iostream>
using namespace std; 

// Constructors With Default Arguments in C++
/*
    In C++ we pass a default argument ,  it value remains the same until unless
    we don't pass another value while creating a constructor .
*/

class detail{
    int data1;
    int data2;
    public:
        detail(int,int);
        void display(void);
};

detail ::detail(int a, int b=6){ // passing a default argument(eg. int b = 6)
    data1 = a;
    data2 = b;
}

void detail ::display(void){
    cout<<"the value of data1 and data2 is "<<data1<<" & "<<data2<<endl;
}
int main(){ 

    detail obj1(2);  // passing value for 'a' and using b = 6 as default
    obj1.display();
    //output: the value of data1 and data2 is 2 & 6


    detail obj2(2 , 4); // passing value for 'a' and 'b' both 
    obj2.display();
    //output: the value of data1 and data2 is 2 & 4

    return 0;
}
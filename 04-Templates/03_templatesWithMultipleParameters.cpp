#include <iostream>
using namespace std; 

//  C++ Templates: Templates with Multiple Parameters in c++
/*
    1. Syntax:
        template<class T1 , classT2>
        class className{
            .......
        }
    2. syntax for using it
        className<datatype> object...;        
*/
template<class T1 , class T2>
class base{
    public:
        T1 data1;
        T2 data2;
        base(T1 a , T2 b) : data1(a) , data2(b) {}
        void display(void){
            cout<<"the value of data1 is : "<<this->data1<<endl;
            cout<<"the value of data2 is : "<<this->data2<<endl;
        }
};

int main(){ 

    //creating a class object and calling constructor alos passing the datatype
    base<int , char> sakky(15 , 's');
    sakky.display();

    return 0;
}
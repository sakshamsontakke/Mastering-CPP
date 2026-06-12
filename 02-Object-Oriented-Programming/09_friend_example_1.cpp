#include <iostream>
using namespace std; 

class test2;

class test1{
    int value1;
    friend void sum(test1 , test2);
    public:
        void getData(int a ){
            value1 = a;
        }
};

class test2{
    int value2;
    friend void sum(test1 , test2);
    public:
        void getData(int a ){
            value2 = a;
        }
};

void sum(test1 o1 , test2 o2){
    cout<<"the sum of value 1 and value 2 is : "<<o1.value1 + o2.value2;
}

int main(){ 

    test1 obj1;
    test2 obj2;

    obj1.getData(5);
    obj2.getData(10);

    sum(obj1 , obj2);

    return 0;
}
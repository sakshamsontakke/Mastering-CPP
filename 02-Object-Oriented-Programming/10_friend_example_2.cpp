#include <iostream>
using namespace std; 

class rev2;

class rev1{
    int val1;
    friend void change(rev1& , rev2& );
    friend void display(rev1 , rev2);
    public:
        void setData(int a){
            val1 = a;
        }
        
};

class rev2{
    int val2;
    friend void change(rev1& , rev2& );
    friend void display(rev1 , rev2);

    public:
        void setData(int a){
            val2 = a;
        }
        
};

void change(rev1& o1 , rev2& o2){
    int temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}

void display(rev1 o1 , rev2 o2){
    cout<<"the value1 is : "<<o1.val1<<" and the value2 is :"<<o2.val2<<endl;
}


int main(){ 

    rev1 obj1;
    rev2 obj2;

    obj1.setData(10);
    obj2.setData(20);

    display(obj1 , obj2);
    change(obj1 , obj2);
    display(obj1 , obj2);

    return 0;
}
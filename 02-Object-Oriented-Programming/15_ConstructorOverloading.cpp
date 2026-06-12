#include <iostream>
using namespace std; 

// Constructor Overloading --> passing multiple arguments in a constructor  , works exactly like function overloading .

class complex{
    int x , y;
    public:
        complex(int,int);
        complex(int);
        void display(void){
            cout<<"the complex is : "<<x<<" + "<<y<<"i"<<endl;
        }
};

// creating two contructors with same name but diffrent arguements , but c++ detects it perfectly so it uses the contructor which is needed.
complex ::complex(int a , int b){
    x = a;
    y = b;
}
complex ::complex(int a){
    x = a;
    y = 0;
}

int main(){ 

    complex obj1(2,5);
    obj1.display();
    
    complex obj2(2);
    obj2.display();
    
    /*
        output:
        the complex is : 2 + 5i
        the complex is : 2 + 0i
    */
    

    return 0;
}
#include <iostream>
using namespace std; 

// Parameterized Constructor (showcasing points)

class point{
    int x , y;
    public:
        point(int , int);
        void displayPoints(void){
            cout<<"the points are : ("<<x<<","<<y<<")"<<endl;
        }
};

point ::point(int a , int b){
    x = a;
    y = b;
}

int main(){ 

    point obj1(2,2);
    obj1.displayPoints();

    point obj2(6,6);
    obj2.displayPoints();

    /*
        output:
        the points are : (2,2)
        the points are : (6,6)
    */

    return 0;
}
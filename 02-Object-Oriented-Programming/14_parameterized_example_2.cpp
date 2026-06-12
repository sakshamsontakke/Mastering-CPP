#include <iostream>
#include <cmath>  // cmaths library is used to add maths elements like square root , power etc to our program.

using namespace std; 

// Parameterized Constructors 
// finding a distance between 2 points

/*
    Important function in cmaths:
    1. sqrt(value)  ----> square root
    2. pow(value , power)  ----> power of
*/

class Points{
    int x , y;
    public:
        Points(int , int);
    friend void displaySum(Points , Points);
};

Points ::Points(int a , int b){
    x = a;
    y = b;
}

void displaySum(Points o1 , Points o2){
    float distFormula = sqrt(pow(o2.x-o1.x , 2) + pow(o2.y-o1.y , 2 ));
    cout<<"the distance between these points is: "<<distFormula<<endl;
}

int main(){ 

    Points obj1(0,25);
    Points obj2(100,0);

    displaySum(obj1 , obj2);

    return 0;
}
#include <iostream>
using namespace std; 

// fucntion overloading 
/*
    C++ can find themost suitable function to use with help of the arguements in it 
    for example: two function with same same but no. of argument is diffrent 
    eg. sum(int a int b) and sum(int a m, int b , int c) , 
    C++ will use these function only when it's suitable to the condition     
*/

int sum(int a, int b ){
    cout<<"this uses 2 arguements"<<endl;
    return (a+b);
}
int sum(int a , int b , int c){
    cout<<"this uses 3 arguements"<<endl;
    return (a+b+c);
}

// volume of cylinder
int volumeOfCylinder(int r, int h){
    return (3.14*r*r*h);
}

//volume of cuboid
int volumeOfCuboid(int l , int b , int h){
    return (l*b*h);
}

//volume of cube 
int volumeOfCube(int a ){
    return (a*a*a);
}



int main(){ 

    cout<<"the sum of numbers is "<<sum(4,5)<<endl; // this will automatically select sum() with 2 arguments
    cout<<"the sum of numbers is "<<sum(4,5,6)<<endl; //this will automatically select sum() with 3 arguments
    

    //printing the volumes 
    cout<<"the volume of cyclinder is "<<volumeOfCylinder(2 , 4)<<endl;
    cout<<"the volume of cuboid is "<<volumeOfCuboid(2 , 4 , 10)<<endl;
    cout<<"the volume of cube is "<<volumeOfCube(2)<<endl;


    return 0;
}
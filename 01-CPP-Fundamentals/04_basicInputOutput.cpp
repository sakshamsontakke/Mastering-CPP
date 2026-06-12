#include <iostream>
#include "userDefineHeaderFile.h"

using namespace std;

int main(){

    // arithematics operators 
    int num1 , num2 ;
    cout<<"enter the value of no.1: ";
    cin>>num1;
    cout<<"enter the value of no.2: ";
    cin>>num2;

    cout<<"num1 + num2 is equal to :"<<num1 + num2<<endl;  //this is basic addition
    cout<<"num1 - num2 is equal to :"<<num1 - num2<<endl; // this is basic subtraction 
    cout<<"num1 / num2 is equal to :"<<num1/num2<<endl;// this is basic division(if variables are int, then return only int)
    cout<<"num1 * num2 is equal to :"<<num1*num2<<endl;//basic multiplication
    cout<<"num1 % num2 is equal to :"<<num1%num2<<endl;//basic modulus(remainder)
    cout<<"num1++ is equal to :"<<num1++<<endl;//first print then increment 
    cout<<"num1-- is equal to :"<<num1--<<endl;//first print then decrement 
    cout<<"++num1 is equal to :"<<++num1<<endl;//first increment then print
    cout<<"--num1 is equal to :"<<--num1<<endl;//first decrement then print 

    return 0;
}
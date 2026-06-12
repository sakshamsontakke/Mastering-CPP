#include <iostream>
using namespace std;

int main(){
    
    //typecasting

    int num1 = 45;
    float num2 = 45.56;

    cout<<(float)num1<<endl; // changes the data type of variable
    cout<<float(num1)<<endl;//it can be written as  this to 

    cout<<(int)num2<<endl;// changes the data type of variable
    cout<<int(num2)<<endl; //it can be written as  this to
    
    cout<<endl;

    int c = int(num2);  //storing the int value of num2 in int c
    cout<<c<<endl;
    
    cout<<endl;

    cout<<num1 + num2<<endl;
    cout<< num1 + int(num2)<<endl;
    cout<<num1 + (int)num2<<endl;

    return 0;
}
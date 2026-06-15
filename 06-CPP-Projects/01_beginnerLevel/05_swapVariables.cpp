#include <iostream>
using namespace std; 

//swap variable

void swap(int &a , int &b){  //reference variable 
    int change = a;
    a = b;
    b = change; 
}


int main(){ 

    int x = 5 , y = 10;
    cout<<"the value of x is : "<<x<<" the value of y is : "<<y<<endl;
    swap(x , y);
    cout<<"the value of x is : "<<x<<" the value of y is : "<<y<<endl;


    return 0;
}
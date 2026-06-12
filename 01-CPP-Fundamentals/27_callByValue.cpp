#include <iostream>
using namespace std; 

//CALL BY VALUE

void callByValue(int a , int b){
    int temp = a ;    //swapping the values 
    b = a;
    b = temp;
}

int main(){ 
    int x = 4 , y = 5;
    callByValue(x ,y);
    cout<<"the value of x is "<<x<<" the value of y is "<<y<<endl; 

    // the value of x & y will not change since callByValue() function creates a copy of x & y and perform operation inside it's fucntion 
    // therefore the value of x & y will not change 

    return 0;
}
#include <iostream>
using namespace std; 

// Function Templates & Function Templates with Parameters in C++

template<class T1 , class T2>
int getAverageValue(T1 a , T2 b){
    float avg = (a+b)/2;
    return avg;
}

// swapping varibles using template
template<class M , class N>
void swapVar(M &a , N &b){
    M temp = a;
    a = b;
    b = temp;
}


int main(){ 

    float finalValue = getAverageValue(5.3, 8.8);
    cout<<"the average is : "<<finalValue<<endl;

    // swapping variables with help of template
    int x = 5 , y = 9 , z = 4.3 , k = 9.9;

    cout<<"the value of x is : "<<x<<" and the value of y is "<<y<<endl;
    swapVar(x , y);
    cout<<"the value of x is : "<<x<<" and the value of y is "<<y<<endl;

    cout<<"the value of z is : "<<z<<" and the value of k is "<<k<<endl;
    swapVar(z , k);
    cout<<"the value of z is : "<<z<<" and the value of k is "<<k<<endl;

    return 0;
}
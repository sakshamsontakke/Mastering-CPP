#include <iostream>
using namespace std; 

// Sum of all array elements in C++

int main(){ 
    int list[5] = {5,10,20,35,30};
    int sum = 0;
    for(int i = 0; i<5 ; i++){
        sum += list[i];
    }
    cout<<"the sum of all array elements is : "<<sum;

    return 0;
}
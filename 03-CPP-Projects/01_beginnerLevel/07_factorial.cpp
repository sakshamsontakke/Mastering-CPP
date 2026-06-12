#include <iostream>
using namespace std; 

//factorial in C++
// let's "m" be a number so its factorial  will be m*(m-1)*(m-2).....1

int factorial(int num){
    int currentValue = 1;  
    for(int i = 0; i<num ;i++){
        currentValue *= (num-i);
    }
    return currentValue;
}


int main(){ 

    int userEnteredValue;
    while(true){
        cout<<"enter a value to find it's factorial: "<<endl;
        cin>>userEnteredValue; 
        cout<<"the factorial of "<<userEnteredValue<<" is : "<<factorial(userEnteredValue)<<endl;
    }

    return 0;
}
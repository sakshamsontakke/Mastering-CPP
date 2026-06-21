#include <iostream>
using namespace std; 

void checkEvenOdd(int a){
    if(a%2==0){
        cout<<"the entered value "<<a<<" is "<<"even  number"<<endl;
    }
    else{
        cout<<"the entered value "<<a<<" is "<<"odd  number"<<endl;
    }
}

int main(){ 

    int userInput;
    while (true){
        cout<<"enter a value: or -1 to exit a program :";
        cin>>userInput;
        if(userInput == -1){
            break;
        }
        else{
            checkEvenOdd(userInput);
        }
    }

    return 0;
}
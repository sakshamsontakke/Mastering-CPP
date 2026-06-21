#include <iostream>
using namespace std; 

//reverse number in C++


int main(){ 

    int userInput , testValue = 1234;
    cout<<"enter a number to reverse it :"<<endl;
    cin>>userInput;

    
    
    int i = 0;
    int newNum = 0;
    while(userInput != 0){
        int lastValue = userInput%10;    //anyNumber%10 , gives the last digit of the number  
        newNum = newNum*10 + lastValue;  //ver important
        userInput = userInput/10;       //anyNumber/10 , removes the last digit of a number 
    }
    cout<<newNum<<endl;

    return 0;
}
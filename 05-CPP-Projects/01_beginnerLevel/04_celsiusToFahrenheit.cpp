#include <iostream>
using namespace std; 


//celsius to fahrenheit calculator 

float converter(float temp){
    int fahrenheit = (((9*temp)/5) + 32);
    return fahrenheit;
}

int main(){ 

    float celsius;
    while(true){
        cout<<"enter the celsius value :"<<endl;
        cin>>celsius;
        cout<<"the value of "<<celsius<<"'c is "<<converter(celsius)<<endl;
    }
   
    return 0;
}
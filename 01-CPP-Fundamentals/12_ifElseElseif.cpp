#include <iostream>
using namespace std;

int main(){

    // if , else  else if statements
    int age;
    cout<<"enter your age: "<<endl;
    cin>>age;
    
    if (age>18){
        cout<<"you can drive a car/bike"<<endl;
    }
    else if(age==18){
        cout<<"you can drive but make sure to make license first!"<<endl;
    }
    else if((age<18) && age>1){
        cout<<"you can't drive , not eligible"<<endl;
    }
    else{
        cout<<"you are not born yet"<<endl;
    }



    return 0;
}
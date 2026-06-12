#include <iostream>
using namespace std;

int globalVariable = 50;

int main(){

    //built in data types 
    int globalVariable = 100; //changing the value of global variable 

    cout<<globalVariable<<endl; // prints 100

    // to access the global varible directly in it original form or the value it holds outside any fuction then we add "::" before the name of the gloabal variable 
    cout<<::globalVariable<<endl; // prints 50 (takes the global variable directly)
    
    return 0;
}

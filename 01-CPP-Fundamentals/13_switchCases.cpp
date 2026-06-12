#include <iostream>
using namespace std;

int main(){

    // switchCases in C++
    
    // syntax 
    /*
    switch (expression)
    {
    case (constant) (expression):
           (code) 
        break;
    
    default:
        break;
    }

     */


    int age;
    cout<<"enter your age: "<<endl;
    cin>>age;

    switch (age)
    {
    case 18:
        cout<<"you are 18 and can drive"<<endl;
        break;

    case 20:
        cout<<"you are 20"<<endl;
        break;

    case 10:
        cout<<"you are 10"<<endl;
        break;    

    default:
        cout<<"entered value didn't matches with any of the cases "<<endl;
        break;

    }

    // IMPORTANT NOTE: if we don't use break statement , it will print all cases but it depends on the value (eg. if age=20,then it will print case 20 , case10 , and default but case 18 will not print)

    return 0;
}
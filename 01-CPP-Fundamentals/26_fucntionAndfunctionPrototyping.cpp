#include <iostream>
using namespace std; 

//Functions 
int sum(int a , int b){   //using an int function requires to return something
    int c = a + b;
    return c;             //returning is neccessary!

}


void message(/*void*/){   //using a void function we don;t have to return somthing we can directly print something
    cout<<"hello world"<<endl;
}
//you can pass "void" key word  but it's not compulsory. 



//using FUNCTION PROTOTYPING FOR SUB() FUNCTION
// SYNTAX: datatype nameOfFunction();  [NOTE: the name and data type have to be same with the function that we made under the main function]

int sub(int a , int b);    //acceptable
int sub(int ,int);        //acceptable
// int sub(int a , b )   // not acceptable



int main(){ 

    //function: it uses Top Down Structured Programmming , Function is a reusable block of code designed to perform a specific task.
    int num1, num2;
    cout<<"enter the no.1: "<<endl;
    cin>>num1;
    cout<<"enter the no.2: "<<endl;
    cin>>num2;

    // num1 and num2 are ACTUAL PARAMETERS.
    cout<<"the value of "<<num1<<" + "<<num2<<" = "<< sum(num1 , num2)<<endl; 


    // printing with the void function



    //printing with the help of function prototyping
    cout<<"the value of "<<num1<<" - "<<num2<<" = "<< sub(num1 , num2)<<endl; 
    
    return 0;  //----> returns succesfully 
}




//Writing a fucntion below the main() function , will cause error , because compiler reads code from top to bottom .
//  To overcome this error we use FUNCTION PROTOTYPING above the main() function .
int sub(int a , int b){ 
    // a and b are FORMAL PARAMETERS , they are taking values from actual parameters.   
    int c = a - b;
    return c;
}
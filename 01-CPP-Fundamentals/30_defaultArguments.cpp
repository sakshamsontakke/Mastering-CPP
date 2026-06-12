#include <iostream>
using namespace std; 

// Deafault arguments---> if we pass a default value to an  formal parameter
//default arguments are mutable , if we pass another value to it , it's default value will change .
//NOTE: always write the default parameter at the end or the last right side only  , somewhere else will give error 
/*
    eg.
    
    float money(float intrest = 1.04 , int salary){
    float totalMoney = salary*intrest;
    return totalMoney;
 

    this will give error !!
}

*/
//                       this is default parameter                              
float money(int salary , float intrest = 1.04){
    float totalMoney = salary*intrest;
    return totalMoney;
}

int main(){ 
    int myMoney = 12000;
    cout<<"the total intrest a normal person will get is "<<money(myMoney)<<endl;
    cout<<"the total intrest a goverment employee will get is "<<money(myMoney , 1)<<endl; //this will change the default value of default argument(eg.float intrest = 1.04)


    return 0;
}
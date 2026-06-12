#include <iostream>
using namespace std; 

//Inline Functions
/*
    when we will call this function first it will copy x & y ,  then return the expression ,then print 
    due to which it will consume more time if we run it multiple times , so instead 
    we use INLINE FUNCTIONS which directly uses the expression(eg.a*b) which printing it.

    INLINE FUNCTION: it reduces the time to run program but consumes lot of MEMORY.

    #it is recommended to only uses inline function for small operations only . 
*/

inline int product(int a , int b ){
    return a*b;
}






// Static----> it will only run on First Call of Function but then it will not work 
// it is reccomended to not use Static with Inline function.
int staticFunc(int a , int b){
    static int c = 0;    //c will  be zero only when when we call the function for first time only ,(this excutes only ones)
    c = c + 1;            //after first time the code will continue after  c = c + 1 .
    return a*b+c;
}

int main(){ 
    int x = 10 , y = 20;

    // inline functions
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;
    // cout<<"the value of of "<<x<<" x "<<y<<" is "<<product(x,y)<<endl ;

    //Static
    cout<<"the value is "<<staticFunc(x , y)<<endl; // static c = 0 , then c = c + 1 , then a*b+c 
    cout<<"the value is "<<staticFunc(x , y)<<endl; // c = c + 1 , then a*b+c
    cout<<"the value is "<<staticFunc(x , y)<<endl; // c = c + 1 , then a*b+c
    cout<<"the value is "<<staticFunc(x , y)<<endl;// c = c + 1 , then a*b+c
   
    return 0;
}
#include <iostream>
using namespace std; 

// Recursion and recursive (using function inside a function )
//The process in which a function calls itself directly or indirectly is called recursion and the corresponding function is called a recursive function
int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1); //it recalls the funtion with n-1 value(eg. if we pass 6 it become 5 then 4 then 3 then 2 then 1 )
}

// step by step calculation or factorial
//factorial(6) = 6*factorial(5);
//factorial(6) = 6*5*factorial(4);
//factorial(6) = 6*5*4*factorial(3);
//factorial(6) = 6*5*4*3*factorial(2);
//factorial(6) = 6*5*4*3*2*factorial(1);
//factorial(6) = 6*5*4*3*2*1
//factorial(6) = 720





//fibonacci series to get nth term
// fibonacci series: 1 , 1 , 2 , 3 , 5 , 8 , 13, 21..... 
// (n-2) + (n-1) = n
int fib(int n ){
    if(n < 2){
        return 1;
    }
    return fib(n-2) + fib(n-1);    //this is not recomemended since it uses a lot of overlapping
} 


int main(){ 

    // factorial of a number
    //eg. 6! = 6*5*4*3*2*1 = 720
    //0! = 1
    //1! = 1
    //n! = n*(n-1)!

    int a;
    cout<<"enter a number: "<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"the value of fabonacci series at "<<a<<" is "<<fib(a)<<endl;

    return 0;
}

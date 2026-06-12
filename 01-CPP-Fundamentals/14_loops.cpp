#include <iostream>
using namespace std;

int main(){

    /* loops in c++:
        1.for loop
        2.while loop
        3.do while loop
    */

    // for loop in c++
    // syntax of for loop in C++
    /*
        for(initialization;condition;updation){   #initilization only work once (condition--->statements--->updation then loop)
            c++ statements
        }
    */

    for(int i = 1;i<=50;i++){
        cout<<i<<endl;
    }

    // while loop in C++
    // syntax for while loop in C++
    
    /*
        while(conditon){
            statement
            updation(if needed)
        }
    */

    int i = 1;
    while(i<=50){
        cout<<i<<endl;
        i++;
    }

    // do while loop in C++
    // syntax for do while loop in C++

    /*
        do{
            c++ statements
        }while(condition)
    
    */

    int j=1;
    do{
        cout<<j<<endl;              //do while loop will work atleat one time  
        j++;
    } while(j<=50);

    // if condition is true then:
    int k = 1;
    do
    {
        cout<<"this will print only one time "<<k<<endl;
        k++;
    } while (false);
    

    return 0;
}
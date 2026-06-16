#include <iostream>
#include <functional>  //to add function objects
#include <algorithm>  // it adds sort() method 

using namespace std; 

// Function Objects (Functors) In C++ STL
// function object : function wrapped in a class so that it is available as a function 

int main(){ 

    int arr[] ={33 , 44 , 11 , 55 , 22};

    /*
        syntax: sort(array , array + (value))
        value = no. of values you want to sort starting from begining as ascending order by default
    */
    sort(arr , arr+5);   //arr+5 means all elements(eg. arr+3 mean first 3 elements as ascending order by default)
    
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl; 

    //we can us function object(functors) in between to change it from ascending to descending order
    sort(arr , arr+5 , greater<int>() );  //--> by adding " greater<int>() " now it will osrt in descending order

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    

    return 0;
}
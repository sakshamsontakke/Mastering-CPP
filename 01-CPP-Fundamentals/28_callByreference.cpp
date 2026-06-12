#include <iostream>
using namespace std; 


// NOTE: HAVE TO PRACTICE IT SEVERAL TIME TO GET WHAT IT REALLY IS AND HOW IT WORKS 
// call by reference by pointers
void swapPointer(int* a , int* b){ // a, b will have addresses , 
    int temp = *a;   //using '*' gives the value of the  address of pointer(important)
    *a = *b;
    *b = temp;
}


//call by reference using c++ variables (with the help of call by reference we have power to change to value of ACTUAL PARAMETERS)
void swapByReferenceVar(int &a , int &b){   //reference varible eg. int &m = n where both m and n will  have same memory now.
    int temp = a;                          // now evertime we use a and b it uses the same memory as num1 and num2, so swapping will happen
    a = b;
    b = temp;
}

// Return by reference 

int & returnByreference(int &a , int &b){
    return a;
}


int main(){ 
    
    int num1 = 4 , num2 = 5;

    // call by reference using pointers
    cout<<"the value of num1 is "<<num1<<" the value of num2 is "<<num2<<endl;
    swapPointer(&num1 , &num2); // passing the address of variable 
    cout<<"the value of num1 is "<<num1<<" the value of num2 is "<<num2<<endl;
    /*
    	the above code will swap the values of num1 and num2 because this time we are providing the 
        addresses of the variable which are same for the whole program.
        so instead of copying the values of variable this time addresses are being sent and address can't be copied
        it is contant.
    */  
    

    // call by reference using C++ varible (comment out the code above to use it properly)
    cout<<"this time num1: "<<num1<<" this time num2: "<<num2<<endl;
    swapByReferenceVar(num1 , num2);
    cout<<"this time num1: "<<num1<<" this time num2: "<<num2<<endl;



    // return by reference
    int x = 10  , y = 20;
    returnByreference(x , y) = 300;
    /*
        the above line will use x & y as actual parameters then a and b from the returnByReference fucntion will 
        return a as written , but as will be return as reference variable , 
        so te whole fucntion will return &x = 300
        therefore the value of x will become 300 and y will be 20
    */
   cout<<"the value of x "<<x<<" the value of y "<<y<<endl;


    return 0;
}
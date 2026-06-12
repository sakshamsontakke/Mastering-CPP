#include <iostream>
using namespace std; 

int main(){ 

    //Arrays: array is a collection of items of similar type stored in contiguous memory locations
    // eg. it's not a good practice to save marks of 1000 students by using 1000 variable , so we use array to do that which helps us to perform more operation on them easily.
 
    //creating an Array
    //syntax: datatype nameOfArray[no. of blocks needed] = {val1 , val2 , ....};
    int Arr[4] = {11,22,33,44};


    //acessing values inside an Array
    //syntax: nameOfArray[index];
    cout<<"The values of the following Array are: "<<endl;
    cout<<"The value of Arr[0]: "<<Arr[0]<<endl;
    cout<<"The value of Arr[1]: "<<Arr[1]<<endl;
    cout<<"The value of Arr[2]: "<<Arr[2]<<endl;
    cout<<"The value of Arr[3]: "<<Arr[3]<<endl;


    //creating an Array in different style
    // Syntax for adding a new value to an Array is
    // nameOfArray[index] = value;
    int newArr[4];
    newArr[0] = 10;
    newArr[1] = 20;
    newArr[2] = 30;
    newArr[3] = 40;

    // for acessing items in array we can use FOR LOOP.
    cout<<"printing all the value inside the the newArr by using for Loop but with extra index: "<<endl;

    for(int i = 0;i<=4;i++){   //we are using i<=4 since there is only 4 elements inside our newarr(array)
        cout<<newArr[i]<<endl;
    }


    //NOTE: (IMPORTANT)
    //The output of the following for loop will be 10 , 20 , 30 , 40 and 11 (but why 11 ) , due the the given conditon above(i<=4)  
    //then i becomes 4 but newArr doesn't have any index like for it onlt have 4 elements(0 , 1 , 2 , 3)
    //but instead of showing error C++ gives and ouput of 11 using memory allocation , c++ try too find an answer 
    // so it give NEARBY MEMORY VALUE (since we made an Array with name of 'arr' which have 11 in it )
    // this is the one of the most crucial concept for low level programming language like C++


    // changing the value of an Array(same syntax as adding a values to an Array above)
    cout<<"printing the new value of newArray[2] "<<endl;

    newArr[2] = 67;
    cout<<"the value of newArr[2] :"<<newArr[2]<<endl;

    return 0;
}
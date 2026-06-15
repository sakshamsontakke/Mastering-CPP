#include <iostream>
using namespace std; 

// Member Function Templates & Overloading Template Functions in C++
/*
    # function overloading in template function 
    1. if two or more funciton have same names then the priority of function which have defined data type is high!
    2. if the name is diffrent then template function willbe called !
*/

template<class T>
class test{
    public:
        T data;
        test(T a) : data(a){}
        void display(void);      
};

/*
    # syntax for wrting the function outside the function
    --> template<class T>
        void className<T> :: functionName(...){ function body....} 
*/
template<class T>
void test<T> ::display(void){
    cout<<"the value of data is : "<<data<<endl;
}



// function overloading in template function 
void tempfunc(int a){
    cout<<"the value of a using normal function is: "<<a<<endl;
}

//creating a template function with same name as above function 
template<class T>
void tempfunc(T a){
    cout<<"the value of a using template function is: "<<a<<endl;
}

//creating a template function with diifrent name so that now we can access it 
template<class T>
void tempfuncDiff(T a){
    cout<<"the value of a using template function is: "<<a<<endl;
}

int main(){ 

    test<int> obj1(25);
    obj1.display();
    test<float> obj2(5.34);
    obj2.display();


    // function overloading using template functions 
    tempfunc(15);
    /*
        output:
            the value of a using normal function is: 15
        --> the output of the above code is this because the priority of the predefiend datatype function is more than 
            template defined function 
        --> in order to use it we have to declare another function with diffrent name     
    */

    tempfuncDiff(75);
    tempfuncDiff(75);
    // output: the value of a using template function is: 75

    return 0;
}
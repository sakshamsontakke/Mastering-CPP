#include <iostream>
using namespace std; 

// Initialization list in Constructors in C++
/*
    # syntax for initialization list in contructor in c++
    --> constructor(arguments) : initilization(variable(argument))

    # EXAMPLE:
        class Test{
            int a;     //the the declaring of variable matters(the variable which declared first will also be intialized first)[important]
            int b;
            public:
                Test(int x , int y) : a(x) , b(y) {    //syntax
                    cout<<"contructor called"<<endl;
                }
        }
*/

class Test{
    int a;
    int b;
    public:
        /*
            Test(int x , int y) : a(x) , b(x+y) ---> this will also work
            Test(int x , int y) : a(x) , b(2*y) ---> this will also work
            Test(int x , int y) : a(x) , b( a + y ) ---> this will also work since a is defined now
            Test(int x , int y) : b(y) , a(x + b)  --->  THIS WILL NOT WORK!!! WHY?
                ---> since we declared variable 'a' first then we declared 'b' 
                     so the order of initilization will be 'a'-->'b'
                ---> if we interchange the order of declaration of variable(eg. 'b' first then 'a' ) 
                     then the program will work with no error   
        */
       
        Test(int x , int y) : a(x) , b(y)
        {
            cout<<"contructor called succesfully!!!"<<endl;
            cout<<"the value of a is : "<<a<<endl;
            cout<<"the value of b is : "<<a<<endl;
        }
};

int main(){ 

    Test obj(5,10);
    

    return 0;
}
// Destructors
/*
    # What is a Destructor?
    1. A Destructor is a special member function of a class.
    2. It is automatically called when an object's lifetime ends.
    3. The main purpose of a Destructor is to perform cleanup tasks such as:
        - Releasing dynamically allocated memory
        - Closing files
        - Closing database/network connections
        - Freeing other resources used by the object
    4. A Destructor never takes arguments.
    5. A Destructor never returns any value.
    6. A class can have only ONE Destructor.
    7. The name of a Destructor is the same as the class name
       but prefixed with a '~' (tilde) symbol.
       Example:
            class Test{
                ~Test();
            };
    8. Destructors are called automatically by the compiler.
       We do not call them manually in normal situations.
    9. Constructors are used to initialize objects,
       while Destructors are used to destroy/clean up objects.

    # What is Scope?
    Scope is the region enclosed within braces { } where
    variables and objects exist.
    Example:
        {
            // scope starts

            // variables and objects created here
            // are alive only inside this block

        }
        // scope ends
    After leaving the scope:
        - Local variables are destroyed.
        - Local objects are destroyed.
        - Their Destructors are called automatically.

    # Order of Calls
    Constructor  ---> Object Created
    Destructor   ---> Object Destroyed

    # Important
    If multiple objects are created:
        Object A
        Object B
        Object C
    Then Destructors are called in reverse order:
        Destructor of C
        Destructor of B
        Destructor of A
    This is called LIFO
    (Last In, First Out).

*/

#include <iostream>
using namespace std; 


class test{
    static int count;
    public:
        test(){
            count++;
            cout<<"object created , constructor triggered , object number "<<count<<endl;;
        }
        // syntax of writing destructor: ' ~className(); '
        ~test(){
            cout<<"object removed , destructor triggered , object number "<<count<<endl;
            count--;
        }
};

int test ::count ;

int main(){ 

    cout<<"we are inside our main function"<<endl;
    cout<<"creating first object"<<endl;
    test obj1;

    // Objects created inside this scope are local to this block.
    // When the scope ends, these objects are automatically destroyed
    // and their destructors are called. 
    {
        cout<<"we are inside a scope now"<<endl;
        cout<<"creating two more objects"<<endl;
        test obj2 , obj3;
        cout<<"exiting the scope"<<endl;
    }
    cout<<"back to main function "<<endl;
    

    return 0;
}
#include <iostream>
using namespace std;

// this Pointer in C++
/*
    'this' is a pointer to the object that is currently executing
    the member function.

    Suppose there is an object named "sakky" and it calls a member
    function like:
        sakky.salary();
    Then inside salary(), 'this' points to sakky.

    In other words:
        this == &sakky
*/

class test{
    int a;

public:

    // Returns a reference to the object that called setData()
    test& setData(int a){

        // this points to the current object
        this->a = a;

        // *this represents the object itself
        // Returning *this allows function chaining
        return *this;
    }

    /*
        What happens above?

        this  -> pointer to current object
        *this -> current object itself

        Since setData() returns test&, we can write:

            obj.setData(5).getData();

        Explanation:

            obj.setData(5) returns obj itself
                          |
                          V
                     obj.getData()

        Therefore, multiple member functions can be chained together.
    */

    void getData(){
        cout << "The value of a is : " << a << endl;
    }
};

int main(){

    test obj;

    // setData returns a reference to obj
    // so getData() is called on the same object
    obj.setData(5).getData();

    obj.getData();

    return 0;
}
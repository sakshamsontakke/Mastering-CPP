#include <iostream>
using namespace std;

/*  Properties of friend functions
        1. Not in the scope of class
        2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
        3. Can be invoked without the help of any object
        4. Usually contans the objects as arguments
        5. Can be declared inside public or private section of the class
        6. It cannot access the members directly by their names and need object_name.member_name to access any member.

*/

//syntax:
/*
    friend <className> <functionName>
*/
class Complex
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private parts (members)
    friend Complex sumComplex(Complex obj1, Complex obj2); // sumComplex is not a member of Complex, but because it is declared as a friend,
                                                                // it can access private members of Complex objects.
    friend Complex sumComplex(Complex obj1, Complex obj2);
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

Complex sumComplex(Complex obj1 , Complex obj2 ){
    Complex obj3;
    obj3.setNumber((obj1.a + obj2.a) , (obj1.b + obj2.b));
    return obj3;
}

int main()
{
    Complex o1 , o2 , sum ;
    o1.setNumber(2, 5);
    o1.printNumber();

    o2.setNumber(2 ,5);
    o2.printNumber();

    sum = sumComplex(o1 , o2); //now we dont't need to use any object to call sumComplex Function
    sum.printNumber();

    return 0;
}

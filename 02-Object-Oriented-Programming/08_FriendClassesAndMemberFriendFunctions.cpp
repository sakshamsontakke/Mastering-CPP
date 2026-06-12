#include <iostream>
using namespace std;

// forward declaration---> compiler compiles code from top to bottom , so we have to declare it first
class complex;

class calculator
{
public:
    int sumRealComplex(complex, complex); // just declaring not using any arguments since not defined yet
    int sumComComplex(complex, complex);
};

class complex
{
    int a;
    int b;

    // giving access to calculator class functions
    friend int calculator::sumRealComplex(complex, complex);
    friend int calculator::sumComComplex(complex, complex);

    // giving acces to whole calculator class(there is no need to use above lines  if we use this )
    friend class calculator;

public:
    void getValue(int value1, int value2)
    {
        a = value1;
        b = value2;
    }
    void display()
    {
        cout << a << " + " << b << "i" << endl;
    }
};

int calculator ::sumRealComplex(complex o1, complex o2)
{
    return (o1.a + o2.a);
}
int calculator ::sumComComplex(complex o1, complex o2)
{
    return (o1.b + o2.b);
}

int main()
{
    // setting a and b
    complex o1, o2;
    o1.getValue(2, 5);
    o2.getValue(2, 5);

    calculator calc;
    // below function uses a of o1 and o2 and b of o1 and o2 
    int v1 = calc.sumRealComplex(o1, o2);
    int v2 = calc.sumComComplex(o1, o2);
    cout << v1 << " + " << v2 << "i" << endl;

    return 0;
}

// ============================================================
// STEP BY STEP WHAT WE DID
// ============================================================

/*

STEP 1:
We created a forward declaration

    class complex;

because calculator class needed complex objects
before complex class was actually defined.



STEP 2:
We created calculator class

Inside it we declared two functions:

    sumRealComplex()
    sumComComplex()

These functions will later add real and imaginary parts.



STEP 3:
We created complex class

It contains:

    int a  -> real part
    int b  -> imaginary part

These are PRIVATE by default.



STEP 4:
We used FRIEND FUNCTIONS

    friend int calculator::sumRealComplex(...)
    friend int calculator::sumComComplex(...)

This gave special permission to these functions
to access private data of complex class.



STEP 5:
We also used FRIEND CLASS

    friend class calculator;

Now ALL functions inside calculator class
can access private members of complex.



STEP 6:
We created getValue() function

This stores values inside object.

Example:

    o1.getValue(2,5)

stores:

    a = 2
    b = 5



STEP 7:
We defined calculator functions

sumRealComplex():

    adds real parts
    o1.a + o2.a

sumComComplex():

    adds imaginary parts
    o1.b + o2.b



STEP 8:
Inside main()

we created two objects:

    complex o1 , o2;



STEP 9:
We stored values inside objects

    o1 = 2 + 5i
    o2 = 2 + 5i



STEP 10:
We created calculator object

    calculator calc;



STEP 11:
We called functions

    calc.sumRealComplex(o1,o2)
    calc.sumComComplex(o1,o2)

Real sum:

    2 + 2 = 4

Imaginary sum:

    5 + 5 = 10



STEP 12:
We printed final answer

    4 + 10i



FINAL OUTPUT:

    4 + 10i

*/
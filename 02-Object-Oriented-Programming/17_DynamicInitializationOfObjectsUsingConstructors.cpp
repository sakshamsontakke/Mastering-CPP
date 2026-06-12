#include <iostream>
using namespace std;

// Dynamic Initialization of Objects Using Constructors in C++
/*
    1. In C++, constructors can take arguments while creating objects.

    2. "Dynamic Initialization" means values are provided while the
       program is running (runtime), usually through user input.

    3. We can have two or more constructors in the same class.
       This is called constructor overloading. The compiler chooses
       the appropriate constructor based on the arguments passed.

    4. If we want to create objects without passing any values,
       for example:
            Bank obj1, obj2;
       then we need to define a default (empty) constructor.

    5. If we want the user to enter values during execution and then
       initialize objects using those values, we use dynamic
       initialization of objects using constructors.
*/

class Bank
{
    int principal;
    int year;
    float interestRate;
    float returnValue;

public:
    Bank() {}; // Default constructor required for objects created without arguments

    Bank(int p, int y, float ir); // Constructor with interest rate as decimal (0.04)
    Bank(int p, int y, int ir);   // Constructor with interest rate as percentage (4%)

    void display(void);
};

// Constructor with float interest rate
Bank::Bank(int p, int y, float ir)
{
    principal = p;
    year = y;
    interestRate = ir;

    returnValue = principal;

    // Calculating compound interest for 'year' years
    for (int i = 0; i < year; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

// Constructor with integer interest rate
Bank::Bank(int p, int y, int ir)
{
    principal = p;
    year = y;

    // Converting percentage into decimal form
    interestRate = float(ir) / 100;

    returnValue = principal;

    // Calculating compound interest for 'year' years
    for (int i = 0; i < year; i++)
    {
        returnValue = returnValue * (1 + interestRate);
    }
}

void Bank::display(void)
{
    cout << "The amount invested: " << principal << endl;
    cout << "For " << year << " years" << endl;
    cout << "At interest rate of: " << interestRate << endl;
    cout << "The final value is: " << returnValue << endl;
}

int main()
{
    Bank obj1, obj2;

    // Since we are creating objects without arguments,
    // the default constructor is needed.

    int p, y, r;
    float ir;

    cout << "Enter the principal amount for obj1: ";
    cin >> p;

    cout << "Enter the number of years: ";
    cin >> y;

    cout << "Enter the interest rate in decimal form (0.04 for 4%): ";
    cin >> ir;

    obj1 = Bank(p, y, ir); // Calls constructor with float interest rate

    cout << "\nEnter the principal amount for obj2: ";
    cin >> p;

    cout << "Enter the number of years: ";
    cin >> y;

    cout << "Enter the interest rate as percentage (4 for 4%): ";
    cin >> r;

    obj2 = Bank(p, y, r); // Calls constructor with integer percentage

    cout << "\nDetails of Object 1:\n";
    obj1.display();

    cout << "\nDetails of Object 2:\n";
    obj2.display();

    return 0;
}
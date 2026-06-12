// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } sakky, rohan, lovish; */
// sakky.salary = 8 makes no sense if salary is private



//useful functions:
/*
    1) string.at(index) ---> this function gives the value at particular index
    2)  exit(0) ---> ends the whole program  
*/


// Nesting of member functions(function inside a function )


#include <iostream>
#include <string> //including string
using namespace std;

class binary
{
private:
    string str;    //syntax:  string variableName = "value" ;
    void checkBinary(void);   //adding checkBinary fucntion inside a private so that it is only accesible inside the class 

public:
    void readBinary();
    void reverseBinary();
    void printBinary();
};

void binary ::readBinary()    //reading  the value from the user
{
    cout << "enter the value : " << endl;
    cin >> str;
    checkBinary();   // this is called nesting of member functions 
}

void binary ::checkBinary()  // checking binaryi if  it's format is correct or not 
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) != '0' && str.at(i) != '1')    //string.at(index) ---> this function gives the value at particular index 
        {
            cout << "it is not a binary Number" << endl;
            exit(0);    // exit(0) ---> ends the whole program  
        }    
    }
    cout<<"checkBinary funtion is working fine and given number is a binary number"<<endl;

}
 
void binary ::reverseBinary()    // changing the values eg. 0101 to 1010 
{
    for (int i = 0; i < str.length(); i++)
    {
        if (str.at(i) == '0')
        {
            str.at(i) = '1';
        }
        else
        {
            str.at(i) = '0';
        }
    }
    cout<<"The reverseBinary function is working fine!"<<endl;
}

void binary ::printBinary()   // displaying all 
{
    for (int i = 0; i < str.length(); i++)
    {
        cout<< str.at(i);
    }
    cout << endl;
}

int main()
{

    binary value;
    // value.checkBinary();  --->  this will give error since checkBinary  is in private class
    // but we can acces other functions they are in public
    value.readBinary();
    value.reverseBinary();
    value.printBinary();


    // basic binary checking , replacing  and displaying .....

    return 0;
}

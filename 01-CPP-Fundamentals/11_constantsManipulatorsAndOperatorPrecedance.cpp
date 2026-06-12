#include <iostream>
#include <iomanip> // to add manipulator (setw())
using namespace std;

int main (){

    //Constants----> once we add const then we are unable to change the value of variable
    const int value1 = 40;
    int value2 = 20;

    // value1 = 100; // ERROR!!!!!!!!!!! (since the value1 variable is constant )
    value2 = 100;

    cout<<value1<<endl;
    cout<<value2<<endl;


    // Manipulators in C++
    // setw()----> it helps to set field width , example: setw(4) then it will take 4 values from the the varible like 12345678 to "1234" only 
    // and if there is not suffcient values like "1" then output will be "    1"  ()
    int a = 2 , b = 40 , c = 3450;

    cout<<"values without setw()"<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    cout<<c<<endl;
    cout<<endl;

    cout<<"values with setw()"<<endl;
    cout<<setw(4)<<a<<endl;
    cout<<setw(4)<<b<<endl;
    cout<<setw(4)<<c<<endl;


    // Operator Precedance in C++
    // precedance-----> it means if their is an expression then which operator will be the first 

    int a  = 5 , b = 10 , c = 20;
    int exp = a*b+c;
    cout<<exp<<endl;

    // if operator precedancy are equal(a+b , a-b or a*2 , a/b , a%b) then we use Associativity(left to right / right to left )
    int exp2 = (a*5) + 45 - 30; //like this expression contains same operator precedancy(+45-30) we go left to right as per associativity
 
    return 0;
}
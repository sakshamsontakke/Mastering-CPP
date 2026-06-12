#include <iostream>
using namespace std; 

//we use Array for creating a list of elements of same datatype eg. int , float at a time 
//Struct(structure): we can make a structure with differrent datatypes 
/*
    Syntax:
    struct nameOfStruct{
        (data)
    };

*/

struct employee   
{
    /* data */
    int eId;
    char name;
    float salary;
};



// NOTE: We can use typedef method too to make code much cleaner  eg.

typedef struct newEmployees // by using typedef we can make a shortcut to use struct in main function easily without writing again the same code .
{
    /* data */
    int eIdNew;
    char nameNew;
    float salaryNew;

}eps;    // instead of using "struct newEmployees isagi;" we can use "eps isagi" directly to make workflow more smoother and faster




int main(){ 

    //accessing struct
    struct employee sakky;  // Syntax: struct nameOfStruct defined(varible/object)
    sakky.eId = 12;         //for accesing we directly uses defined(varible/object).eId = value;
    sakky.name = 's';
    sakky.salary = 5000000;
        
    cout<<"the name of sakky is :"<<sakky.name<<endl;
    cout<<"the employee ID of sakky is :"<<sakky.eId<<endl;
    cout<<"the salary of sakky is :"<<sakky.salary<<endl;


    // we can even create multiple employees
    struct employee harry;
    struct employee sam; 


    // using typedef method----->
    struct newEmployees isagi1; //old method 
    eps isagi2;
    isagi2.eIdNew = 19;
    isagi2.nameNew = 'i';
    isagi2.salaryNew = 900;
    cout<<"printing details with typedef method "<<endl;
    cout<<"the name of isagi2 is: "<<isagi2.nameNew<<endl;
    cout<<"the employee ID of isagi2 is: "<<isagi2.eIdNew<<endl;
    cout<<"the salary of isagi2 is: "<<isagi2.salaryNew<<endl;


    return 0;
}
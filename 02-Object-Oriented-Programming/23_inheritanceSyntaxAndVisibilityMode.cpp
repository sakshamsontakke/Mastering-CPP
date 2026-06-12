#include <iostream>
using namespace std; 

// Inheritance Syntax & Visibility Mode in C++
/*
    # Derived class syntax:
    1. class (derived-class-name) : (visibility) (base-class-name)
    2. by default the visibilty is private
    3. Public Visibility Mode: public member of base class becomes public member of derived class
    4. Private Visibility Mode: public member of base class becomes private members of derived class
    5. private members of base class is not inherited (very important)

*/

// Base Class
class Employee{
    // int record;   -->any private variable  will not be inherited (very important)
    public:
        int eID;
        int eSalary;
        Employee(int userInput){
            eID = userInput;
            eSalary = 45;
        }
        Employee(){} //--> we have to create a default constructor since programmer class is derived from employee one

};

//class (derived-class-name) : (visibility) (base-class-name)

class Programmer : Employee{ // by default the visibilty becomes private so base class(employee) Public members becomes Private too. 
    public:
        int noOfProgrammingLang = 9;
        Programmer(int userInput){
            eID = userInput;
        }
        void display(void){
            cout<<eID<<endl;
            
        }
};

// creating a public visibility class
class manager : public Employee{ // public members of base class remains public when th evisibility is Public.
    public:
        int totalSales;
        manager(){
            totalSales = 0;
        }
        manager(int numOfSales){
            totalSales = numOfSales;
        }
        void displayValues(void){
            cout<<"the total sales are: "<<totalSales<<endl;
        }
};  


int main(){ 

    Employee ep1(1) , ep2(2);
    cout<<ep1.eSalary<<endl; // since eSalary and eId is a public member in employee class
    cout<<ep2.eSalary<<endl; // since eSalary and eId is a public member in employee class



    Programmer ep3(3);
    cout<<ep3.noOfProgrammingLang<<endl;
    // cout<<ep3.eID<<endl; 
    // cout<<ep3.eSalary<<endl;
    /*
        1. since the public member of base class(employee) becomes private members in derived class(programmer)
        so that's why we can't access "eID" & "eSalary" directly .\
        2. noOfProgrammingLang will works since it is the public member in Programmer class. 
    */
    ep3.display();




    //creating a public visbilty class
    manager sakky1;
    manager sakky2(50);

    sakky1.displayValues();
    sakky2.displayValues();





    return 0;
}
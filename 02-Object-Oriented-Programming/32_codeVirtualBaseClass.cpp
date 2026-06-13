#include <iostream>
using namespace std; 

// Code Example Demonstrating Virtual Base Class in C ++
/*
    inheritance:
                    Student
                        |
                       /\
                      /  \
                   Test   Sports
                      \   /
                       \ /
                        |                       
                       Results
*/

// virtual class base 
class Student{
    protected:
        int rollNo;
    public:
        void setRollNo(int a){
            rollNo = a;
        }
        void displayRollNo(void){
            cout<<"your roll no. is : "<<rollNo<<endl;
        }    
};

// creating a virtual class 
/*
    syntax: class (derived-class) : virtual (visbility-mode)(base-class)
*/

class Test : virtual public Student{
    protected:
        float maths;
        float physics;
    public:
        void setMarks(float a , float b){
            maths = a;
            physics = b;
        }
        void displayMarks(void){
            cout<<"your marks in maths are : "<<maths<<endl;
            cout<<"your marks in physics are : "<<physics<<endl;
        }    
};

// creating a virtual class 
class Sports : virtual public Student{
    protected:
        int score;
    public:
        void setSportsMarks(int a ){
            score = a;
        }
        void displaySportsMarks(void){
            cout<<"you sports marks is : "<<score<<endl;
        }
};

// creating another derived class from Test and Sports as base classes 
class Results : public Test , public Sports{
    protected:
        float totalMarks;
    public:
        void displayResult(void){
            totalMarks = maths + physics + score;
            displayRollNo();
            displayMarks();
            displaySportsMarks();
            cout<<"your score total score is : "<<totalMarks<<endl;
        }
};

/* 
    If we do not use the keyword "virtual" while inheriting the Student class
    in both Test and Sports, the Results class will inherit two separate copies
    of Student—one through Test and another through Sports.

    This creates ambiguity because the compiler cannot determine which copy of
    Student's members (such as rollNo or displayRollNo()) should be used.

    By declaring Student as a virtual base class, Test and Sports share a single
    common copy of Student. As a result, the Results class contains only one
    instance of Student, eliminating ambiguity and solving the diamond inheritance
    problem. 
*/

int main(){ 

    //creating a class object
    Results saksham;

    //setting values 
    saksham.setRollNo(26);
    saksham.setMarks(90.18,90.15);
    saksham.setSportsMarks(8);

    //displaying values
    saksham.displayResult();

    return 0;
}
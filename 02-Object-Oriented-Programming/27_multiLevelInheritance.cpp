#include <iostream>
using namespace std; 

// Multilevel Inheritance in C++
// A--->B--->C

/*
    # if we are inheriting  B from A and C from B : [A--->B--->C]
    1. A is th ebase class for B and B is the base class for C 
    2. A--->B--->C is called Inheritance Path
    
*/

//creating a student class 
class student{
    protected:  //creating a protected member since we have to inherit it also have to keep it private
        int rollNumber;  
    public:
        void set_roll_number(int);
        void get_roll_number(void);
};

void student ::set_roll_number(int num){
    rollNumber = num;
}
void student ::get_roll_number(void){
    cout<<"the roll no. is : "<<rollNumber<<endl;
}


class exams : public student{
    protected:   // using protect because we have to inherit it while being private
        float maths;
        float physics;
    public:
        void set_marks(int,int);
        void get_marks(void);
};
void exams ::set_marks(int m , int n){
    maths = m;
    physics = n;
}
void exams ::get_marks(void){
    cout<<"the marks in physics is : "<<physics<<endl;
    cout<<"the marks in maths is : "<<maths<<endl;
}


class results : public exams{
    int percentage;  //using private beacause we're not further inheriting and also keeping it private
    public:
        void display(void){
            // calling all public functions from all above class (base classes)
            get_roll_number();
            get_marks();
            cout<<"your percentage is : "<<(maths+physics)/2<<" %"<<endl;
        }

};


int main(){ 

    //creating a object
    results sakky;
    sakky.set_roll_number(45);
    sakky.set_marks(80,80);
    sakky.display();

    return 0;
}
#include <iostream>
using namespace std; 

// Multiple Inheritance in C++
/*
        A        B    (more....)
        |        |
        ----------
             |
             C
     
    # syntax for inherting in multiple inheritance
      class (derivedClass) : (visibility-mode-1) (base-class-1) , (visibility-mode-2) (base-class-2){

        (derived class content)

      }          

*/

class base1{
    protected:
        int baseInt1;
    public:
        void setData1(int a){
            baseInt1 = a;
        }
};
class base2{
    protected:
        int baseInt2;
    public:
        void setData2(int a){
            baseInt2 = a;
        }
};
class base3{
    protected:
        int baseInt3;
    public:
        void setData3(int a){
            baseInt3 = a;
        }
};

//creating a multiple inheritance class 
class derived : public base1 , public base2 , public base3{
    public:
        void display(void){
            cout<<"the value of baseInt1 is: "<<baseInt1<<endl;
            cout<<"the value of baseInt2 is: "<<baseInt2<<endl;
            cout<<"the value of baseInt3 is: "<<baseInt3<<endl;
            cout<<"the sum of baseInt1, baseInt2 and baseInt3 is: "<< (baseInt1+baseInt2+baseInt3)<<endl;
        }
};

/*
    Data Members:
    1.baseInt1 --> protected
    2.baseInt2 --> protected
    3.baseInt3 --> protected

    Member Functions:
    1.setData1() --> public
    2.setData2() --> public
    3.setData3() --> public
    4.display() --> public
*/

int main(){ 

    derived saksham;
    saksham.setData1(40);
    saksham.setData2(60);
    saksham.setData3(100);
    saksham.display();

    return 0;
}
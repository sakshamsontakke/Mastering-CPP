#include <iostream>
using namespace std; 

//Passing Objects as Function Arguments
// complex number program 
/*
    how to add a complex number ?
    ----> (a + bi) + (c + di) = (a + c) + (b + d)i 
*/

class complex{
    int value1;   //we should always write variables in private writing them directly into public is not considered as a good practice .
    int value2;
    public:
        void setValue(int v1 , int v2 ){   // setting values of private variable since we can't acces them from our main function , so instead we use public function inside our class .
            value1 = v1;
            value2 = v2;
        }

        // the data type of complexSum() function is "object"
        void complexSum(complex object1 , complex object2){
            value1 = object1.value1 + object2.value1;     // we will create objects soon
            value2 = object1.value2 + object2.value2; 
            
        }
        void display(void){
            cout<<"the value is : "<< value1 <<" + "<<value2<<"i"<<endl;
        }
};

int main(){ 

    //creating 3 complex equations

    complex eq1 , eq2 , eq3;

    eq1.setValue(2 , 5);
    eq1.display();

    eq2.setValue(8 , 5);
    eq2.display();

    eq3.complexSum(eq1 , eq2);  // the data type of complexSum() function is object as written above , so only object can be used as arguments 
    eq3.display();
    

    return 0;
}
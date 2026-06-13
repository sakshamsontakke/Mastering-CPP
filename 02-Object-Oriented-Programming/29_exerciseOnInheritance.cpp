#include <iostream>
#include <cmath>
using namespace std; 


// Exercise on C++ Inheritance

class normalCalc{
    protected:
        int value1;
    public:
        void sum(int a , int b);
        void sub(int a , int b);
        void multiply(int a , int b);
        void divide(int a , int b);      
};

void normalCalc ::sum(int a , int b){
    value1 = (a+b);
}
void normalCalc ::sub(int a , int b){
    value1 = (a-b);
}
void normalCalc ::multiply(int a , int b){
    value1 = (a*b);
}
void normalCalc ::divide(int a , int b){
    value1 = (a/b);
}


class scientificCalc{
    protected:
        int value2;
    public:
        void power(int , int);
        void sqrRoot(int);
        void trigno(int, int);
        void fac(int);      
};

void scientificCalc ::power(int a , int b){
    value2 = pow(a , b);
}
void scientificCalc ::sqrRoot(int a){
    value2 = sqrt(a);
}

void scientificCalc ::trigno(int a , int b){
        value2 = sin(a/b);
}

void scientificCalc ::fac(int a){
    value2 = 1;
    for(int i = 1 ; i <= a ; i++){
        value2 *= i; 
    }
} 


class completeCalc : public normalCalc , public scientificCalc{
    public:
        void displaySum(){
            cout<<"the sum is : "<<value1<<endl;
        };
        void displaySub(){
            cout<<"the sub is : "<<value1<<endl;           
        }
        void displayMultiply(){   
            cout<<"the multiply is : "<<value1<<endl;
        }
        void displayDivide(){
            cout<<"the sum divide : "<<value1<<endl;
        }
        void displayPower(){
            cout<<"the power is :"<<value2<<endl;
        }
        void displaySqrt(){
            cout<<"the sqrt is :"<<value2<<endl;    
        }
        void displayTrigno(){
            cout<<"the sin x is : "<<value2<<endl;
        }
        void displayFactorial(){
            cout<<"the factorial is : "<<value2<<endl;
        }
};

class checker : public completeCalc{
    public:
        void letsCheck(int value){
            int temp1 , temp2;
            if(value == 1){
                cout<<"enter value 1: ";;
                cin>>temp1;
                cout<<"enter value 2: ";;
                cin>>temp2;
                sum(temp1 , temp2);
                displaySum();
            }
            else if(value == 2){
                cout<<"enter value 1: ";;
                cin>>temp1;
                cout<<"enter value 2: ";;
                cin>>temp2;
                sub(temp1 , temp2);
                displaySub();
            }
            else if(value == 3){
                cout<<"enter value 1: ";;
                cin>>temp1;
                cout<<"enter value 2: ";;
                cin>>temp2;
                multiply(temp1 , temp2);
                displayMultiply();
            }
            else if(value == 4){
                cout<<"enter value 1: ";;
                cin>>temp1;
                cout<<"enter value 2: ";;
                cin>>temp2;
                divide(temp1 , temp2);
                displayDivide();
            }
            else if (value == 5)
            {
                cout<<"enter number to find it's power: ";
                cin>>temp1;
                cout<<"enter it's power: ";
                cin>>temp2;
                power(temp1 , temp2);
                displayPower();
            }
            else if (value == 6)
            {
                cout<<"enter number to find it's sqrt: ";
                cin>>temp1;
                sqrRoot(temp1);
                displaySqrt();
            }
            else if (value == 7)
            {
                cout<<"enter numerator to find sinx: ";
                cin>>temp1;
                cout<<"enter denominator to find sinx: ";
                cin>>temp2;
                trigno(temp1 , temp2);
                displayTrigno();
            }
            else if (value == 8)
            {
                cout<<"enter number to find it's factorial: ";
                cin>>temp1;
                fac(temp1);
                displayFactorial();
            }
            else if (value == -1)
            {
                exit(0);
            }
            else{
                cout<<"enter a valid number"<<endl;
            }
            
        }
};

int main(){ 
    checker operation;
    int userInputTemp;
    while (true){
        cout<<"welcome to our calulator!!"<<endl;
        cout<<" 1) to perform sum\n 2) to perform subtraction\n 3) to perform multiplication"<<endl;
        cout<<" 4) to perform divide\n 5) to get power of no.\n 6) to get sqrt\n 7) to get sinx\n 8) to get factorial\n -1) to exit"<<endl;   
        cin>>userInputTemp;
        operation.letsCheck(userInputTemp);

        
        
    }

    return 0;
}
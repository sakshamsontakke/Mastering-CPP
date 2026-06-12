#include <iostream>
using namespace std; 

//classes , private and public
// NOTE: by default every class is private (important)
class employee
{
    private:
        int a , b , c;  // Accessible only inside the class
    public:
        int d , e;   // these are accesible from any where
        void check(int x, int y , int z);   //this fucntion inside the employee can acces the  a , b , c  and modifies it (this is just declaration of function )
        void checkPrint(){
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;
        }
};

// Function definition outside class
void employee :: check(int x , int y , int z ){  //this is the syntax to complete the funtion made in a class
    a = x;
    b = y;
    c = z;
}

int main(){ 
    employee saksham;  // syntax : nameOfClass newName;
    saksham.d = 15;    // to acces  public variable : newName.variableName = value;
    saksham.e = 25;    
    // saksham.a = 10;  ---> this will give error since we can't access private directly 
    saksham.check(11,22,33);   //to call a function : newName.functionName(aruguments);
    saksham.checkPrint();

    return 0;
}
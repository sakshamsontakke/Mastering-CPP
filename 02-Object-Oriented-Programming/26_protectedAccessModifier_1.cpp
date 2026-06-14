#include<iostream>
using namespace std;

/*  (VERY IMPORTANT!!)
                                         Visibility Mode
     	                Public Derivation      	Private Derivation    	Protected Derivation
Private members           Not Inherited           Not Inherited           Not Inherited              
Protected members          Protected                 Private                Protected                    
Public members               Public                  Private                Protected   

    

    # difference between private and protected:
    1. private : cannot be inherited
    2. protected : they are private but can be inherited

    # how to learn ?
    1. private always not inherited
    2. protected members are protected in public
       protected members are private in private
       protected members are protected in protected
    3. public members depends on the visibility mode
        --> they becomes, public in public derivation   
                          private in private derivation
                          protected in protected derivation   
*/


class Base{

    protected:
        int a; 
    private:
        int b;

};

class Derived: protected Base{  //we use visibility protected this time
   
};

int main(){
    Base b;
    Derived d;
    // cout<<d.a; // Will not work since a is protected in both base as well as derived class
    return 0;
}


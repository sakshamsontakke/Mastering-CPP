#include <iostream>
using namespace std;

// Static Data Members & Methods in C++
// staic data member is accessible only by the class not it's object
/*
    eg.  if we take 3 objects like , employee sakky , employee pakky , employee jackky
        static variable will be same for all (it's meory will be created only once)
        if we change the value of static varible in any object(eg.sakky.staticVarible)
        it will be reflected in other opjects to (eg. pakky.staticVariable  , jakky.staticVariable )
*/
class employee
{
    int id;
    static int count; //---> for creating static varible we have to make sure to also declare outside of  the class too.
    /*
        modification of static varible is not possible inside a class ,
        eg. static int count = 1000; will throw an error . (wrong)
    */
public:
    void getValue(void)
    {
        cout << "enter the id: " << endl;
        cin >> id;
        count++;
    }
    void displayValue(void)
    {
        cout << "the id of the given employee is : " << id << endl;
    }

    // static functions ----> static function only have access to static variables or
    //                        another static funntions
    static void staticFunction(void)
    {
        cout << "the value of count at is : " << count << endl;
    }
};

//  we have to declare staic varible outside the class too.
/*
     modification of static varible can only be done outside the class ,
    it will throw error if we try to change value from  inside a class .
    eg. int employee ::count = 1000; (correct)
 */
int employee::count; // the default value of count will be "0" . (important )

int main()
{
    //creating multiples object to see if count is same for all or not 
    // if we don't use staic varible  , count will work  differently for each object 
    // if we use static varible , count will work directly for class (therefore same for all object )
    employee sakky , pakky , jakky;

    sakky.getValue();
    sakky.displayValue();
    sakky.staticFunction();
    
    pakky.getValue();
    pakky.displayValue();
    pakky.staticFunction();

    jakky.getValue();
    jakky.displayValue();
    jakky.staticFunction();


    /*  OUTPUT:
        
        enter the id: 
        1
        the id of the given employee is : 1
        the value of count at is : 1
        enter the id: 
        2
        the id of the given employee is : 2
        the value of count at is : 2
        enter the id: 
        3
        the id of the given employee is : 3
        the value of count at is : 3
    */
    
    return 0;
}
#include <iostream>
using namespace std; 

int main(){ 

    //enums , syntax: enum nameOfEnum{var1 , var2 , var3}
    enum meals{breakfast , lunch , dinner};
    cout<<"printing the values directly using: "<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    

    //NOTE:(IMPORTANT) , Now we can use "meals" as a data type too!!!(very important!)
    meals m1 = breakfast;  
    meals m2 = lunch;
    meals m3 = dinner;

    cout<<"printing the values by using 'meals' as a datatype for new variables " <<endl;
    cout<<m1<<endl;
    cout<<m2<<endl;
    cout<<m3<<endl;


    return 0;
}
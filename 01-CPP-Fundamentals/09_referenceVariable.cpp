#include <iostream>
using namespace std;

int main(){

    // reference variable

    float x = 500;
    float &y = x; // y will be the reference variable of x (the syntax is "datatype &(varible_name) = original_variable ")
    cout<<x<<endl;
    cout<<y<<endl;
    
    return 0;
}
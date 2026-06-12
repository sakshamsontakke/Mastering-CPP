#include <iostream>
using namespace std;

int main(){

    // floats and double 
    cout<<sizeof(34.5)<<endl; //by deafault , any decimal values uses "double" datatype (output:8)
    cout<<sizeof(34.5f)<<endl; //f means the follwing decimal value is float(output:4 )
    cout<<sizeof(34.5F)<<endl; //F means the follwing decimal value is float(output:4 )(upper or lower case doesn't matter)
    cout<<sizeof(34.5l)<<endl; // l means the follwing decimal value is "long double"(output:12)
    cout<<sizeof(34.5L)<<endl; // L mean the follwing decimal value is "long double"(output:12)(upper or lower case doesn't matter)

    // sizeof() 
    //it is used to get the size of the datatype/variable or or it gives no. of bits in the following variable

    return 0;
}
#include <iostream>
using namespace std;

int main(){

    //logical operators

    int x = 50 , y = 30;

    cout<<((x==y) && x>y)<<endl;  //'and' operator (all conditions have to be true)
    cout<<((x==y) || x>y)<<endl; // 'or' operator (either one of the condtion have to be true)
    cout<<!(x==y)<<endl; // 'not operator'(reverse the the actual condition )

    return 0;
}
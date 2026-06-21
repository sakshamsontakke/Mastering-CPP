#include <iostream>
using namespace std; 

int main(){ 

    int userLimit;
    int first = 0 , second = 1 , next;
    for(int i = 0;i<=userLimit;i++){
        cout<<first<<endl;
        next = first + second;
        first = second;
        second = next;

    }

    return 0;
}
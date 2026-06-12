#include <iostream>
using namespace std;

int main(){

    int userInput;
    cout<<"Enter a value to get it's address: "<<endl;
    cin>>userInput;
    int* userInputPointer = &userInput;
    cout<<"the address of your given variable is "<<userInputPointer<<endl;

    return 0;
}
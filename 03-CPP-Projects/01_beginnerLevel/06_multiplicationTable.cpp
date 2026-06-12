#include <iostream>
using namespace std; 

//multiplication table in c++

int main(){ 

    int userInput;
    while(true){
        cout<<"enter a value to get it's table: "<<endl;
        cin>>userInput;
        cout<<endl;
        for(int i=0;i<=10;i++){
            cout<<userInput<<" X "<<i<<" = "<<userInput*i<<endl;
        }
    }
    
    return 0;
}
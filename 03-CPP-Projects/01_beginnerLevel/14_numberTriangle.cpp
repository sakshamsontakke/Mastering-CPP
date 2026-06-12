#include <iostream>
using namespace std; 

//Number triangle in C++

int main(){ 

    int value;
    cout<<"enter a value :"<<endl;
    cin>>value;
    for(int i = 0 ; i<value;i++){
        for(int j = 0 ; j<=i ; j++ ){
            cout<<j+1;
        }
        cout<<endl;
    }
    

    return 0;
}
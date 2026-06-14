#include <iostream>
using namespace std; 

//pyramid  with cpp

int main(){ 

    int n = 5;
    for(int i = 0  ; i < n ;i++){
        for(int j = 0 ; j <= i ; j++){
            cout<<"\t";
        }
        for(int k = 0; k< n;k++){
            cout<<"*"<<endl;
        }
        cout<<endl;
    }

    return 0;
}
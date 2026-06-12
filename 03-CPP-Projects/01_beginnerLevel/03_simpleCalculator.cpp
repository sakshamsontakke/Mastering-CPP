#include <iostream>
using namespace std; 

//simple calculator

int calculation(int a , int b , char sign ){
    if(sign == '+'){
        return a+b;
    }
    else if(sign == '-'){
        return a-b;
    }
    else if(sign == '*'){
        return a*b;
    }
    else if(sign == '/'){
        return a/b;
    }
}   

int main(){ 

    int x , y ;
    char sign;
    bool isTrue = true;
    while (isTrue){
        cout<<"enter a value 1: "<<endl;
        cin>>x;
        cout<<"enter a value 2: "<<endl;
        cin>>y;
        cout<<"enter the operation you want to perform(+ , - , * , /)"<<endl;
        cin>>sign;      
        cout<<calculation(x, y , sign)<<endl;
          
    }

    return 0;
}
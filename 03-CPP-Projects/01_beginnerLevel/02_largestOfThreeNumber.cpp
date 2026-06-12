#include <iostream>
using namespace std; 
//largest of three number 
//basic if else
int largestNumber(int a ,int b , int c){
    if(a>b){
        if(a>c){
            return a;
        }
        else{
            return c;
        }
    }
    else{
        if(b<c){
            return c;
        }
        else{
            return b;
        }
    }
}

//with && 
int largestNum(int a, int b ,int c){
    if(a>=b && a>=c){
        return a;
    }
    else if(b>=a && b>=c){
        return b;
    }
    else{
        return c;
    }
    
}


int main(){ 
    int x , y , z;
    cout<<"Enter value 1 :"<<endl;
    cin>>x;
    cout<<"Enter value 2 :"<<endl;
    cin>>y;
    cout<<"Enter value 3 :"<<endl;
    cin>>z;
    cout<<"the largest no. is "<<largestNum(x,y,z)<<endl;

    return 0;
}
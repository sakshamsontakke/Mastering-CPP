#include <iostream>
using namespace std; 

//prime number checker in C++

void checkPrime(int num){
  int count = 0;
  for(int i=1;i<=num;i++){
    if(num%i==0){
        count++;
    }
  }
  if(count>2){
    cout<<"not a prime number"<<endl;
  }
  else if(count==1){
    cout<<"this is a whole number"<<endl;
  }
  else{
    cout<<"this is a prime numbe"<<endl;
  }

}

int main(){ 
    
    int value;
    while(true){
        cout<<"enter a value to find wheather it is prime or not : "<<endl;
        cin>>value;
        checkPrime(value);
    }
    

    return 0;
}
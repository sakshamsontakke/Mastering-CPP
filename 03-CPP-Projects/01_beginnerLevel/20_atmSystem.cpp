#include <iostream>
using namespace std; 

// ATM System in C++ 



int main(){ 


    int userInput;
    int balance = 0;
    while(true){
        cout<<endl;
        cout<<"to check balance enter 1 "<<endl;
        cout<<"to deposit money enter 2 "<<endl;
        cout<<"to withdraw money enter 3 "<<endl;
        cout<<"enter 1/2/3 : ";
        cin>>userInput;
        cout<<endl;
        if(userInput == 1){
            cout<<"your balance is : "<<balance<<" $"<<endl;
        }
        else if(userInput == 2){
          int AmountToDeposit;
          cout<<"enter the ammount you want to deposit: ";
          cin>>AmountToDeposit;
          balance += AmountToDeposit;
          cout<<"congratulations!, "<<AmountToDeposit<<" deposited succesfully"<<endl;
        }
        else if(userInput == 3){
            int amountToWithdraw;
            cout<<"enter the amount you want to widthdraw: ";
            cin>>amountToWithdraw;
            if(balance<amountToWithdraw){
                cout<<"insufficient funds"<<endl;
                cout<<"you can widthdraw only: "<<balance<<endl;
            }
            else{
                balance -=amountToWithdraw ;
                cout<<"congratulations!, "<<amountToWithdraw<<" withdrawal succesfully"<<endl;
            }
        }
        else{
            cout<<"invalid inpu"<<endl;
        }
        
    }

    return 0;
}
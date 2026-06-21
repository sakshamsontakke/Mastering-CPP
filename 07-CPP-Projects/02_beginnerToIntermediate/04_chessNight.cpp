#include <iostream>
using namespace std;

void displayBoard(int userInput = 5){
    int board[userInput][userInput];
    int j = 0;
    for(int i = 0 ; i < userInput ; i++){
        for(j; j < userInput ; j++){
            cout<<" "<<j<<" ";
        }
        cout<<endl;
    }
}

int main(){
    bool gameLoop = true;
    int userInputTemp1;
    int x , y;
    while(gameLoop){
        cout<<"enter a number to define chess board : ";
        cin>>userInputTemp1;
        displayBoard(userInputTemp1);
        cout<<"enter intial position of knight";
        cin>>x>>y;
        displayBoard(userInputTemp1);

    }

    return 0;
}
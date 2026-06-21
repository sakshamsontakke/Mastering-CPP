// Sudoku solver in C++
/*
    # How Sudoku works ?
    1. Sudoku have 9 boxes  
    2. each box have 9 more boxes
    3. in each box(big) we have 1-9 digit filled or to be filled
    4. the same number can't exists if,
        i) it is already in a box
        ii) it exists horizontally on the same line
        iii) it exists vertically on the same line
*/
#include <iostream>
using namespace std;

int main(){
    int layout[9][9] = {
    {5, 3, 0, 0, 7, 0, 0, 0, 0},
    {6, 0, 0, 1, 9, 5, 0, 0, 0},
    {0, 9, 8, 0, 0, 0, 0, 6, 0},
    {8, 0, 0, 0, 6, 0, 0, 0, 3},
    {4, 0, 0, 8, 0, 3, 0, 0, 1},
    {7, 0, 0, 0, 2, 0, 0, 0, 6},
    {0, 6, 0, 0, 0, 0, 2, 8, 0},
    {0, 0, 0, 4, 1, 9, 0, 0, 5},
    {0, 0, 0, 0, 8, 0, 0, 7, 9}
    };


    cout<<"-------------------------"<<endl;
    for(int i = 0 ; i < 9 ; i++){
        for(int j = 0 ; j < 9 ; j++){
            if(j%3 == 0){
                cout<<"| ";
            }
            cout<<layout[i][j]<<" ";
            
        }
        cout<<"|"<<endl;
        cout<<"-------------------------"<<endl;
    }

    

}

    

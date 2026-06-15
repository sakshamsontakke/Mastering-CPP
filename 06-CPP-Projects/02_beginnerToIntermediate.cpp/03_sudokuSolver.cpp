#include <iostream>
using namespace std; 

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

class Sudoku{
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

    public:
        void displayLayout(void);
        void checker(void);

        
};


void Sudoku ::displayLayout(void){
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

void Sudoku ::checker(void){
    
    bool in_box = true;
    bool verBool = true;
    bool horBool = true;
    bool verhor = false;

    for(int i = 1 ; i <= 9 ; i++){
        in_box = true;
        verBool = true;
        horBool = true;
        verhor = false;

        for(int j = 0 ; j < 3 ; j++){
            for(int k = 0 ; k < 3 ; k++){
                if(i == layout[j][k]){
                    in_box = false;
                    break;
                }
            }
            if(in_box != true){break;}
        }


        for(int m = 0 ; (m < 3 && in_box) ; m++){
            for(int n = 0 ; n < 3 ; n++){
                if(layout[m][n] == 0){
                    verBool = true;
                    horBool = true;
                    for(int ver = 0 ; ver < 9 ; ver++){
                        if(layout[ver][n] == i){
                            verBool = false;
                        
                        }
                    }
                    for(int hor = 0 ; hor < 9 ; hor++){
                        if(layout[m][hor] == i){
                            horBool = false;
                        
                        }
                    }
                    if(verBool && horBool){
                        layout[m][n] = i;
                        verhor = true;
                        break;
                    }
                }
            }
            if(verhor){break;}
        }  



    }


    
    


    
}

int main(){ 

    Sudoku game;
    game.displayLayout();
    game.checker();
    game.displayLayout();
    

    return 0;
}
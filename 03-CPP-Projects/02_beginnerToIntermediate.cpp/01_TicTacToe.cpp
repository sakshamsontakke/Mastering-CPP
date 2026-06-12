#include <iostream>
using namespace std;

char checkWinner(char arr[3][3]) {

    // check rows
    for (int i = 0; i < 3; i++) {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
            return arr[i][0];
        }
    }

    // check columns
    for (int j = 0; j < 3; j++) {
        if (arr[0][j] == arr[1][j] && arr[1][j] == arr[2][j]) {
            return arr[0][j];
        }
    }

    // diagonal
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
        return arr[0][0];
    }

    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
        return arr[0][2];
    }

    return 'N'; // No winner
}

void printBoard(char arr[3][3]) {
    for (int i = 0; i < 3; i++) {
        cout << "-------------\n";
        for (int j = 0; j < 3; j++) {
            cout << "| " << arr[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "-------------\n";
}

int main() {

    char arr[3][3] = {
        {'0','1','2'},
        {'3','4','5'},
        {'6','7','8'}
    };

    bool playerX = true;
    bool gameLoop = true;
    char input;

    while (gameLoop) {

        printBoard(arr);

        cout << "Enter position: ";
        cin >> input;

        char symbol = playerX ? 'X' : 'O';

        bool placed = false;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (arr[i][j] == input) {
                    arr[i][j] = symbol;
                    placed = true;
                }
            }
        }

        if (!placed) {
            cout << "Invalid move!\n";
            continue;
        }

        char winner = checkWinner(arr);

        if (winner == 'X' || winner == 'O') {
            printBoard(arr);
            cout << "Player " << winner << " wins!\n";
            gameLoop = false;
        }

        playerX = !playerX;
    }

    return 0;
}
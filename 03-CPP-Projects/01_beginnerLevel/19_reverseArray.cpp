#include <iostream>
using namespace std;

// Reverse Array in C++
//vhat gpt code!!

int main() {

    int len;
    int values;

    while(true) {

        cout << "Enter the length of your Array: ";
        cin >> len;

        int linearArr[len];

        // Input Array
        for(int i = 0; i < len; i++) {

            cout << "Enter " << (i + 1) << "'st value of Array: ";
            cin >> values;

            linearArr[i] = values;
        }

        // Reverse Array
        for(int j = 0; j < len / 2; j++) {

            int temp = linearArr[j];

            linearArr[j] = linearArr[len - 1 - j];

            linearArr[len - 1 - j] = temp;
        }

        // Print Array
        cout << "Reversed Array:" << endl;

        for(int k = 0; k < len; k++) {
            cout << linearArr[k] << endl;
        }
    }

    return 0;
}
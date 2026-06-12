#include <iostream>
using namespace std;

// Finding the largest number in the array

int main() {

    int arrLen;

    cout << "Enter the length of the array: ";
    cin >> arrLen;

    int NumberArray[arrLen];

    // Input values
    for(int i = 0; i < arrLen; i++) {
        cout << "Enter the " << (i + 1) << "'st value: ";
        cin >> NumberArray[i];
    }

    // Assume first element is maximum
    int maxValue = NumberArray[0];

    // Find largest number
    for(int i = 1; i < arrLen; i++) {

        if(NumberArray[i] > maxValue) {
            maxValue = NumberArray[i];
        }
    }

    cout << "The largest number in the array is: " << maxValue;

    return 0;
}
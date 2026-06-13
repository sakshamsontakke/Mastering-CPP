#include <iostream>
using namespace std;

// Array of Objects Using Pointers in C++

class Shop {
    int itemId;
    float itemPrice;

public:
    // Function to assign values to object members
    void setData(int id, float price) {
        itemId = id;
        itemPrice = price;
    }

    // Function to display object members
    void getData() {
        cout << "Item ID    : " << itemId << endl;
        cout << "Item Price : " << itemPrice << endl;
        cout << endl;
    }
};

int main() {

    int size = 3;

    // Dynamically create an array of 3 Shop objects
    Shop* ptr = new Shop[size];

    // Create another pointer for traversal.
    // ptr will always store the address of the first object.
    Shop* ptrTemp = ptr;

    int id;
    float price;

    // Taking input for all objects
    for (int i = 0; i < size; i++) {

        cout << "Enter ID of item " << i + 1 << " : ";
        cin >> id;

        cout << "Enter price of item " << i + 1 << " : ";
        cin >> price;

        // Use arrow operator because ptrTemp is a pointer to an object
        ptrTemp->setData(id, price);

        // Move pointer to the next object in the array
        ptrTemp++;
    }

    // Reset ptrTemp back to the beginning of the array
    ptrTemp = ptr;

    cout << "\nDisplaying all items:\n\n";

    // Traverse the array again and print each object
    for (int i = 0; i < size; i++) {

        // Equivalent to (*ptrTemp).getData()
        ptrTemp->getData();

        // Move to the next object
        ptrTemp++;
    }

    // Free the dynamically allocated array
    // Since memory was allocated using new[],
    // it must be deallocated using delete[]
    delete[] ptr;

    return 0;
}
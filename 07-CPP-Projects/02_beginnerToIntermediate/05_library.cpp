#include <iostream>
#include <string>
using namespace std; 

// library program in C++

class Library{
    string books[10];
    int booksPrice[10];
    int counter;
    public:
        Library(){
            counter = 0;
        }
        void setNumberOfBooks(string book , float price = 10.00){
            books[counter] = book;
            booksPrice[counter] = price;
        }
        void getBookDetails(void){
            
        }
};

class personalLibrary : public Library{

};

int main(){ 

    

    return 0;
}
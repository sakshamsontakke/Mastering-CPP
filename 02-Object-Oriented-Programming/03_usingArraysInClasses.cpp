#include <iostream>
using namespace std; 

// C++ Objects Memory Allocation(visit video for better idea )
// memory allocation is very smart in C++  , eg. one function is being used by 10000 times


// using Arrays in classes (eg .shop project )
class shop{
    int productId[100];   //creating an Array
    int productPrice[100];
    int counter;
    public:
        void addProduct(void);
        void showProduct(void);
        void productCounter(void){
            counter = 0;
        }
};


void shop ::addProduct(){
    cout<<endl;
    cout<<"enter the product ID: ";
    cin>>productId[counter];
    cout<<"enter the the price of product: ";
    cin>>productPrice[counter];
    counter++;
    cout<<endl;
}


void shop ::showProduct(){
    cout<<endl;
    for(int i = 0 ; i < counter; i++){
        cout<<"the price of prodcut ID: "<<productId[i]<<" is "<<productPrice[i]<<endl;
    }
    cout<<endl;
}

int main(){ 

    shop dukaan;
    int userInput;
    int nproduct;
    dukaan.productCounter();  // setting counter 0 when needed good way to manage memory 

    while(true){
        cout<<"enter \n ---> 1   to add  products \n --->2   to show product prices \n --->-1   to exit "<<endl;
        cout<<"enter: ";
        cin>>userInput;
        if(userInput == 1){
            cout<<"enter number of product you want to add:";
            cin>>nproduct;
            if(nproduct > 1000){
                cout<<"the range of number of product is only 1000"<<endl;
            }
            else{
                for(int i = 0 ; i < nproduct ; i++){
                    dukaan.addProduct();
                }
            }
        }
        else if(userInput == 2){   
            cout<<endl;
            cout<<"Product Details: "<<endl;
            dukaan.showProduct();
        }
        else if(userInput == -1){
            break;
        }
        else{
            cout<<"please enter a valid  value out of  1 , 2 , -1  only...."<<endl;
        }
    }

    return 0;
}
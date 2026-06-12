#include <iostream>
using namespace std; 

//fibonacci series in C++
//0 , 1 , 1 , 2 , 3 , 5 , 8 , 13 , 21 , 34
int main(){ 

    int userInput , count = 0;
    cout<<"enter a nth term to make a fibonacci series: "<<endl;
    cin>>userInput;

    int arr[userInput];
    for(int i = 2;i<=userInput;i++){
        for(int j = 0;j<2;j++){
            arr[j] = j;
        } 
        arr[i] = (arr[i-1]+arr[i-2]);
    }
   for(int k = 0; k<=userInput;k++){
    cout<<arr[k]<<",";
   }
    return 0;
}
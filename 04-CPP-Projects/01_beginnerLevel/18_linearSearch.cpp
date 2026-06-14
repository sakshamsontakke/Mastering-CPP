#include <iostream>
using namespace std; 

//Linear search in C++

int main(){ 

    int len;
    int values;
    int searchNum;
    bool found;
    while(true){
        cout<<"enter the length of you Array: ";
        cin>>len;
        int linearArr[len];
        for(int i = 0 ; i < len ;i++){
            cout<<"enter "<<(i+1)<<"'st value of Array: ";
            cin>>values;
            linearArr[i] = values ;
        }
        cout<<"enter the number you want to search in the Array: ";
        cin>>searchNum;
        for(int k = 0 ;k < len ; k++){
            if(linearArr[k]==searchNum){
                cout<<"the "<<searchNum<<" exists in the Array at index "<<k<<endl;
                found = true;
                break;
            }
            else{
                found = false;
            }
        }
        if(found==false){
            cout<<"the following number doesn't exists in the array "<<endl;
        }
    }
    

    return 0;
}
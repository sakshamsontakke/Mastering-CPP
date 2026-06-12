#include <iostream>
using namespace std; 


//Finding the largest number in the array 


int main(){ 

    int arrLen;
    int userValues;
    int maxValue;
    while(true){
        cout<<"enter the length of the array: "<<endl;
        cin>>arrLen;
        int NumberArray[arrLen];
        for(int i = 0 ; i<arrLen ; i++){
            cout<<"enter the "<<(i+1)<<"'st value: "<<endl;
            cin>>userValues;
            NumberArray[i] = userValues;
        }
        for(int m = 0; m<arrLen;m++){
            for(int n = 0 ; n<arrLen;n++){
                if(NumberArray[m]>=NumberArray[n]){
                    maxValue = NumberArray[m];
                }
            }
        }
       cout<<"the largest number in the array is "<<maxValue<<endl;
    }

    return 0;
}
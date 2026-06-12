#include <iostream>
using namespace std; 

int main(){ 

    //continue and break statments 

    for(int i = 0 ;i<=40;i++){

        cout<<i<<endl;
        if(i == 2){
            break;    //it breaks the iteration and stops the loop or ends the loop or get out of the loop 
        }

    }

    for(int k = 0; k<=40;k++){

        if(k == 2){
            continue;   //continue skips the current iteration and move forward to other (eg. when k becomes 2 it skips current iteration and then k becomes 3 then loop goes on as it have to )
        }
        cout<<k<<endl;

    }

    return 0;
}
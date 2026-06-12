#include <iostream>
using namespace std; 

//union---> unio works same as struct but provides better MEMORY MANAGEMENT.

union employee
{
    /* data */
    int eId;        //eg. 4 byte  //we can only select 1 out of all variables , so that we can have better memoey management 
    char name;     // 1 byte
    float salary; //5byte       
};
//if we select "salary" then it will only create salary , now other (eId , name) 


int main(){ 

    union employee sakky;
    sakky.eId = 67;// sakky.name = 's';  // by removing it we can get correct output 
    cout<<sakky.name<<endl; //this give output: 115 , but that wrong beacuase we used "sakky.name" but we can only use 1 variable at a time
    //NOTE: This 115 value after using more than 1 varible from the union is called "GARBAGE VALUE".

    return 0;
}





// difference between struct and union:
/*
    STRUCT: it creates memory for all the varibles inside it (so it consumes memory for all varible)
    UNION: it creates memory for only one of the varible inside it (so it consumes memory for only one out of many variable)
            that's why the memory management in Union is better than Struct.  

*/

#include <iostream>
using namespace std; 

//Arrays of objects

class employee {
    int id;
    int salary;
    public:
        void setData(){
            salary = 900;
            cout<<"enter the Id of the employee: ";
            cin>>id;
        }
        void getData(){
            cout<<"the id of the employee is "<<id<<endl;
        }
};

int main(){ 

    employee people[3];   // creating 3 employees and storing thier credential in it 
    for(int i = 0 ; i < 3 ; i++ ){
        people[i].setData();
        people[i].getData();
    }

    return 0;
}
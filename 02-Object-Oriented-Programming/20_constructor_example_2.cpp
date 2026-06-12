#include <iostream>
using namespace std; 

class bank{
    int money = 0;
    public:
        bank(){}
        bank(int num){
            money = num;
        }
        bank(bank &object){
            money = object.money;
            cout<<"copy function called"<<endl;
        }
        void display(void){
            cout<<money<<endl;
        }
};

int main(){ 

    bank obj1(5) , obj2(10);
    bank objCopy(obj1);

    obj1.display();
    obj2.display();
    objCopy.display();

    return 0;
}
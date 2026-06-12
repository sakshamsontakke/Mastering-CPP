#include <iostream>
#include <string>
using namespace std;

class bank{
    string name;
    int balance;

public:
    bank(){
        name = "Unknown";
        balance = 0;
    }

    bank(string n, int b){
        name = n;
        balance = b;
    }

    // Copy Constructor
    bank(bank &obj){
        name = obj.name;
        balance = obj.balance;

        cout << "Copy Constructor Called" << endl;
    }

    void display(){
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main(){

    bank employee("UNIFA", 1000);

    bank send(employee);  // Copy Constructor Called

    employee.display();

    cout << endl;

    send.display();

    return 0;
}
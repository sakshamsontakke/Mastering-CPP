#include <iostream>
using namespace std;

int GlobalVariable = 10;

void Testfunc(){
    GlobalVariable = 20;;
    cout<<GlobalVariable;
}

int main(){


    int intVariable1 = 5 , intVariable2 = 10;
    float floatVariable = 3.14;
    double floatVariableButLong = 3.12345678;
    char charVariable = 'a' ;
    bool booleanVariable = true;

    cout<<"this is int variable: "<<intVariable1<<" , "<<intVariable2<<endl;
    cout<<"this is float variable: "<<floatVariable<<endl;
    cout<<"this is double float (much more digits after point): "<<floatVariableButLong<<endl;
    cout<<"this is char variable: "<<charVariable<<endl;
    cout<<"this is boolean variable: "<<booleanVariable<<endl;

    int localVariable = 30;
    localVariable = 9;
    cout<<localVariable<<endl;

    

    return 0;

}
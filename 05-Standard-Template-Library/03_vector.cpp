#include <iostream>
#include <vector>

using namespace std; 

// Vector In C++ STL 
/*
    1. syntax: vector<data_type> vector_name;
*/
// creating a function to get user inout to set vec1 values

void display(vector<int> &v){
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";// --> both function works same
        // cout<<v.at(i); --> both function works same
    }
    cout<<endl;
    
}

int main(){ 

    //creating a empty vector 
    vector<int> vec1;
    int size , userInput;
    
    cout<<"enter the size of the vector : ";
    cin>>size;

    for (int i = 0; i < size; i++)
    {
        cout<<"enter value "<<i<<" : ";
        cin>>userInput;
        vec1.push_back(userInput);   //push_back inserts elements in the vector
    }

    cout<<"prinitng vec1                                             : ";
    display(vec1);  // gives full vecotr 

    vec1.pop_back();  //--> removes last element from the vector 

    cout<<"printing vec1 with pop_back                               : ";
    display(vec1);  //give vector but last element is removed





    // inserting a value inside a vector
    /*
        vector<dataType> :: iterator iterName = vectorName.begin();
        1. iterator points a elements in a vector
        2. begin()---> starting 
    */

    vector<int> :: iterator iter = vec1.begin();
    vec1.insert(iter , 200);   //insert function need to argument firdt is the iterator name and second one is the value 

    cout<<"priting vec1 with insert function with iterator           : ";
    display(vec1);  // it will add 200 at the begining of the vector 
     


    //creating for vector with diffrent datatypes , or default size or from another vector 
    vector<int> testVec1;  //empty vector
    vector<char> testVec2;  // with diffrent datatype
    vector<int> testVec3(4);  // definig the size of vector by default 
    vector<int> testVec4(vec1); //creating a vector from another vector 

    //printing the vector we formed with another vector 
    cout<<"prinitng testVec4 which is made from another vector(vec1) : ";
    display(testVec4);


    return 0;
}
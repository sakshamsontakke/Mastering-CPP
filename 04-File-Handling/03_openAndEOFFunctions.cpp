#include <iostream>
#include <fstream>
#include <string>

using namespace std; 

// File I/O in C++: open() and eof() functions in C++ 

int main(){ 
    //sending data to file 
    ofstream out;  //--> out is a object
    out.open("Files/03_test.txt");   //--> it selects the files
    
    string str1;
    cout<<"enter your name: ";
    cin>>str1;

    out<<str1;  // --> sending the data to the files 
    out.close();




    //comment out the code written above to make this code work without a flaw also add somthing to the file too.
    ifstream in;
    string str2;

    in.open("Files/03_test.txt");
    while(in.eof() == 0){   //eof() --> 'end of file' and eof() == 0 mean run the program until the end of file
        getline(in , str2);  // getline requires to arguments first is the object we are using which have the path of file and then the variable in which wee're going to store the data
        cout<<str2;
    }
    
    return 0;
}
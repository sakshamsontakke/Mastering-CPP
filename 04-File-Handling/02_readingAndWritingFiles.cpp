#include <iostream>
#include <fstream> //->> we have to include 'fstream'
using namespace std; 

// File I/O in C++: Reading and Writing Files in C++
/*
  # These are some useful classes for working with files in C++
  1. fstreambase
  2. ifstream --> derived from fstreambase (uses in() --> 'in' means retriveing data from this file   )
  3. ofstream --> derived from fstreambase (uses out() --> 'out' mean setting data inside a file)
  4. we can name the object anything , in() or hin() or ourInput() it's on us. 

  # In order to work with files in C++, you will have to open it. Primarily, there are 2 ways to open a file:
  1. Using the constructor
  2. Using the member function open() of the class

*/

int main(){ 

    string para1 = "Hello World";
    string para2;

    //writing data
    ofstream out("Files\02_test_1.txt");
    out<<para1; //--> it uses cout syntax

    //getting data
    ifstream in("Files\02_test_2.txt");
    in>>para2; //--> it uses cin syntaax
    /*
        1.the above code will only read data for first line to get another line we have to 
        use  getline(in, para2); 
        2. each time we run it we move to diffrent lines 
    */

    cout<<para2;
    getline(in , para2);
    cout<<para2;
    getline(in , para2);
    cout<<para2;
    getline(in , para2);
    cout<<para2;
    getline(in , para2);
    cout<<para2;


    // disconnecting the files 
    out.close();
    in.close();
    

    return 0;
}
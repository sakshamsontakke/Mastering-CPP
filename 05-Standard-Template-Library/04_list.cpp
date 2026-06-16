#include <iostream>
#include <list>
using namespace std; 

// List In C++ STL 
/*
    | Feature                           | `vector`                       | `list`                              |
| --------------------------------- | ------------------------------ | ----------------------------------- |
| Internal structure                | Dynamic array                  | Doubly linked list                  |
| Memory layout                     | Contiguous                     | Non-contiguous                      |
| Random access (`v[i]`)            | ✅ O(1)                         | ❌ O(n)                              |
| Insertion/deletion at end         | ✅ O(1) amortized               | ✅ O(1)                              |
| Insertion/deletion in middle      | ❌ O(n)                         | ✅ O(1) if iterator is known         |
| Cache efficiency                  | Excellent                      | Poor                                |
| Extra memory                      | Low                            | High (stores two pointers per node) |
| Supports `sort()` member function | No (`std::sort`)               | Yes (`list.sort()`)                 |
| Iterator invalidation             | Can happen during reallocation | Rarely invalidated                  |

*/

// display lists
void display(list<int> &ls){
    //creating a iterator for list
    list<int> :: iterator itr;
    for (itr = ls.begin() ; itr != ls.end() ; itr++)  // itr point to a element so i behaves like a pointer as we say in array arr becomes the first address of first element
    {
       cout<<*itr<<" ";  // itr will perform operation in a series
    }
    cout<<endl;  
}


int main(){ 

    //creating a empty List
    list<int> ls1;
    ls1.push_back(10);
    ls1.push_back(20);
    ls1.push_back(30);
    ls1.push_back(40);
    ls1.push_back(50);

    cout<<"the elements of the empty list are : ";
    display(ls1);

    //creating a empty list of lenght 3
    list<int> ls2(3);
    list<int> :: iterator itr2;  //creating a iterator to point elements inside a list 
    itr2 = ls2.begin();  //setting the pointer iterator to the begining

    // setting up the value of list same as pointer array 
    *itr2 = 11;
    itr2++;
    *itr2 = 11;
    itr2++;
    *itr2 = 11;
    itr2++;

    cout<<"the elements of the ls2 are        : ";
    display(ls2);


    //deleting elements from the start , end and middle 
    cout<<"using pop_back function deleteing last Element of ls1: ";
    ls1.pop_back();
    display(ls1);
    
    cout<<"using pop_front function deleteing first Element of ls1: ";
    ls1.pop_front();   // deletes first element of the list
    display(ls1);

    cout<<"deleting a in between element from the list using remove function : ";
    ls1.remove(30);
    display(ls1);
    /*
        remove(value) ---> if there are more than 2 same values then it just remove all that to values
        eg . 10 20 30 30 40 50
            ls1.remove(30)
            output: 10 20 40 50 (boh 30 are removed )
    */



    // sorting a list (acending order)
    list<int> ls3;
    ls3.push_back(5);
    ls3.push_back(4);
    ls3.push_back(3);
    ls3.push_back(2);
    ls3.push_back(1);

    cout<<"the elements of the list without sorting : ";
    display(ls3);

    ls3.sort(); // this sorts the value of list 

    cout<<"the elements of the list after sorting : ";
    display(ls3);


    //merging two list together 
    ls1.merge(ls3);  // syntax: list1.merge(list2)

    cout<<"the total element after merging of ls1 and ls3 is : ";
    display(ls1);  
    /*
        output: 1 2 3 4 5 20 40 
        1. which means that ls1 is merged into ls2 but we write it as ls1.merge(ls2)!!
        2. also if we try to display ls3 list it will show nothing since it is merged !!

    */


    // reversing the elements of the list
    cout<<"the elements of list before reversing : ";
    display(ls1);

    ls1.reverse(); //synatx: listName.reverse()

    cout<<" the elements of list after reversing : ";
    display(ls1);



    return 0;
}
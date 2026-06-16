#include <iostream>
#include<string>
#include <map>  // map 

using namespace std; 

// Map In C++ STL 
// Map is used to store data as Key & Value pairs 

void display(map<string , int> m){
    map<string , int> :: iterator itr;
    for (itr = m.begin() ; itr != m.end() ; itr++)   //itr is a pointer 
    {
        cout<<(*itr).first<<" : "<<(*itr).second<<endl;
        /*
                first---> key (so (*itr).first means get us the key  )
                second---> value (so (*itr).second means get us the value  )
        */
    }
    cout<<endl; 
}


int main(){ 

    map<string , int> playerMap;
    playerMap["sakky"] = 50;
    playerMap["takky"] = 100;

    display(playerMap);

    //inserting values manually
    playerMap.insert( { {"isagi" , 120} , { "light" , 200 } } );
    display(playerMap);


    playerMap.size();  //--> will give no. of elements in the map
    playerMap.max_size();  // this will give the max elements we can store
    playerMap.empty();  // this will check if the map is empty or not(0--> for not empty ,  1--> for empty)

    

    return 0;
}
#include <iostream>
#include <string>
using namespace std; 

// Abstract Base Class & Pure Virtual Functions
/*
    1. Sometimes the base class should only provide a common interface and force derived classes to implement 
       their own versions of certain functions. This is achieved using Pure Virtual Functions.
    2. An Abstract Base Class is a class that contains at least one Pure Virtual Function.
    3. syntax: virtual return_type function_name(parameters) = 0;
    4. A Pure Virtual Function is a virtual function that does not provide any implementation 
       in the base class and is declared by assigning    
    5. abstract class can't create object (important) 
*/





//creating a base class with virtual function 
class youtube{
    protected:  
        string title;
        float rating;
    public:    
        youtube(string title , float rating){
            this->title = title;
            this->rating = rating;
        }
        virtual void display() = 0;  // this is do nothing function , also called PURE VIRTUAL FUNCTION
        /*
            1. Once we declare a pure virtual function we have to make sure we re write that function 
            in derived class if we don't this will throw error !
            2. Since there is atleast one pure virtual function in out base class then the whole class 
            becomes abstract base class and it can't create object    
        */
};


//creating a derived class from base class
class youtubeVideo : public youtube{
    int videoLength;
    public:
        youtubeVideo(string title , float rating , int videoLength) : youtube(title , rating){
            this->videoLength = videoLength;
        }
        // once we created Pure Virtual Function then we have to re write the function inside that class(abstract class)
        void display(void){
            cout<<"the title of normal video is : "<<title<<endl;
            cout<<"the rating of the normal video is : "<<rating<<" out of 10 "<<endl;
            cout<<"the length of the video is : "<<videoLength<<" min"<<endl;
        }
};


//creating a derived class from base class
class youtubeText : public youtube{
    int words;
    public:
        youtubeText(string title , float rating , int words) : youtube(title , rating){
            this->words = words;
        }
        void display(void){
            cout<<"the title of text video is : "<<title<<endl;
            cout<<"the rating of the text video is : "<<rating<<" out of 10 "<<endl;
            cout<<"number of words in the video are : "<<words<<" words"<<endl;
        }
};

int main(){ 

    // youtube object1; ---> this will throw error since object of abstract class type "youtube" is not allowed


    // creating useful vars
    string titleTemp;
    float videoLengthTemp , ratingTemp;
    int wordsTemp;


    // for youtubeVideo(creating object videoNormal)
    titleTemp = "cpp tutorial by saksham!";
    ratingTemp = 10;
    videoLengthTemp = 5;
    youtubeVideo videoNormal(titleTemp , ratingTemp , videoLengthTemp);
    // videoNormal.display(); -->old method


    //for youtubeText(creating object videoText)
    titleTemp = "java tutorial by saksham!";
    ratingTemp = 8;
    wordsTemp = 500;
    youtubeText videoText(titleTemp , ratingTemp , wordsTemp);
    // videoText.display(); -->old method



    // using pointers!
    // creating a base class pointer array that will point to the derived class object
    youtube* youtubePtr[2];  //creating a pointer array
    youtubePtr[0] = &videoNormal; //storing address of videoNormal in youtubePtr[0](index 0)
    youtubePtr[1] = &videoText; //storing address of videoText in youtubePtr[1](index 1)

    youtubePtr[0]->display();   
    youtubePtr[1]->display();



    /*
        output:
        the title of normal video is : cpp tutorial by saksham!
        the rating of the normal video is : 10 out of 10 
        the length of the video is : 5 min
        the title of text video is : java tutorial by saksham!
        the rating of the text video is : 8 out of 10 
        number of words in the video are : 500 words
    */
    


    return 0;
}
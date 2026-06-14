#include <iostream>
#include <string>
using namespace std; 

// Virtual Functions Example in C++ 
/*
    # Rules for virtual functions
    1. They cannot be static
    2. They are accessed by object pointers
    3. Virtual functions can be a friend of another class
    4. A virtual function in the base class might not be used.
    5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class   
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
        virtual void display(){
            cout<<"virtual function from base class is invoked!!"<<endl;
        }
};


//creating a derived class from base class
class youtubeVideo : public youtube{
    int videoLength;
    public:
        youtubeVideo(string title , float rating , int videoLength) : youtube(title , rating){
            this->videoLength = videoLength;
        }
        //5. If a virtual function is defined in a base class, there is no necessity of redefining it in the derived class   
        // void display(void){
        //     cout<<"the title of normal video is : "<<title<<endl;
        //     cout<<"the rating of the normal video is : "<<rating<<" out of 10 "<<endl;
        //     cout<<"the length of the video is : "<<videoLength<<" min"<<endl;
        // }
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
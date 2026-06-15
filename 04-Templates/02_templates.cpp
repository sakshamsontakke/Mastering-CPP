#include <iostream>
using namespace std; 

// Templates in C++
/*
    suppose we want to give input in many datatypes somtimes as int or float or bool or anything
    so instead of writing function and class for each we use templates 
    so user can pass the datatype while setting the values too.
*/

// // normal way
// class Vector{
//     public:
//     int* arr;
//     int size;
//         Vector(int m){
//             size = m;
//             arr = new int[size];  // --> creating an array using new 
//         }
//         int getVectorProduct(Vector &obj){
//             int product = 0;
//             for (int i = 0; i < size; i++)
//             {
//                 product += arr[i]*(obj.arr[i]);
//             }
//             return product;
//         }
// };


// using template
template <class T> // creating a temporary datatype 'T'
class Vector{
    public:
    T* arr;
    int size;
        Vector(T m){
            size = m;
            arr = new T[size];  // --> creating an array using new 
        }
        T getVectorProduct(Vector &obj){
            T product = 0;
            for (int i = 0; i < size; i++)
            {
                product += arr[i]*(obj.arr[i]);
            }
            return product;
        }
};

int main(){ 

    // Vector obj1(3);
    // obj1.arr[0] = 1;
    // obj1.arr[1] = 2;
    // obj1.arr[2] = 3;
    
    // Vector obj2(3);
    // obj2.arr[0] = 3;
    // obj2.arr[1] = 2;
    // obj2.arr[2] = 1;

    // int value = obj1.getVectorProduct(obj2);
    // cout<<"the product is: "<<value<<endl;


    

    //syntax: clasName<dataType> object......
    Vector<float> obj1(3);
    obj1.arr[0] = 1.3;
    obj1.arr[1] = 2.7;
    obj1.arr[2] = 3.2;
    
    Vector<float> obj2(3);
    obj2.arr[0] = 3.9;
    obj2.arr[1] = 2.9;
    obj2.arr[2] = 1.6;

    float value = obj1.getVectorProduct(obj2);
    cout<<"the product is: "<<value<<endl;
    

    return 0;
}
#include <iostream>

using namespace std;


class Tail
{
public: 
    int tailWidth; 
    int tailLength; 
    bool isBushy; 
};

class Nose
{
public: 
    int noseWidth; 
    int noseLength; 
    bool isPointy; 
};

class Dog
{
    string name; 
    Nose noseObject; 
    Tail tailObject; //The Dog class is COMPOSED OF a Nose object and a Tail object 
                    //(and an object of the string class) 


    Dog()
    {

    }
};

int main()
{
    
    cout << "Hello World";

    return 0;
}
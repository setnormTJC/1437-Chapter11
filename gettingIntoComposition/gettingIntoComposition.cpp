#include <iostream>

using namespace std;


class Tail
{
public: 
    string tailWidth = "1 cm";
    double tailLength = 23.12; //cm  
    bool isBushy; 
};

class Nose
{
public: 
    string noseWidth = "2 cm";
    double noseLength = 10; //cm  
    bool isPointy; 
};

class Dog /*: public Tail */
{
    string name; 
    Nose noseObject; 
    Tail tailObject; //The Dog class is COMPOSED OF a Nose object and a Tail object 
                    //(and an object of the string class) 

public: 
    Dog()
    {
        cout << "Called the default constructor of `Dog`!" << endl; 

        //insert the member variable initializations
    }

    Dog(string name,
        string tailWidth, double tailLength, bool isBushy,
        string noseWidth, double noseLength, bool isPointy)
    {
        Dog::name = name; 

        tailObject.tailWidth = tailWidth; 
        tailObject.isBushy = isBushy; 
        tailObject.tailLength = tailLength;
        //insert the other stuff... for tails 

        noseObject.noseLength = noseLength; 
        noseObject.isPointy = isPointy; 
        noseObject.noseWidth = noseWidth; 
    }

    void printDogAttributes()
    {
        cout << boolalpha; //displays true or false instead of 1 or 0
        cout << "Tail info: \n"; 
        cout << tailObject.isBushy << "\t" << tailObject.tailLength << "\t" << tailObject.tailWidth << endl; 

        cout << "Insert nose info here ...\n";
        cout << "Name : " << Dog::name << endl;
    }
};

int main()
{
    
    Dog myDog("Doris", "2 cm", 21.23, true, "5 cm", 10, false);

    myDog.printDogAttributes(); 

    

    return 0;
}
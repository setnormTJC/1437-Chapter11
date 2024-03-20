#include <iostream>

#include"House.h"

using namespace std;

int main()
{

    House yourHouse; 
    //house consists of 1 window, 2 doors, and a SINGLE person 
    
    //yourHouse.doStuff1();
    yourHouse.doors[0].paintDoor("pink");

    cout << "You have now painted your door this color: "
        << yourHouse.doors[0].doorColor << endl; 

    //yourHouse.doStuff2();
 


    return 0;
}
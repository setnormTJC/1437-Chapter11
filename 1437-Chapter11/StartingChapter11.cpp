#include <iostream>
#include "Animal.h"

using namespace std;

int main()
{
    Animal genericAnimal{ "generic animal species name", 999.999 };
    genericAnimal.printAnimalDetails(); 
    cout << "\n\n";

    Dog yourDog{ "canus familiaris", 10.10, 23 }; //{} syntax is the "modern C++ style" 
    yourDog.printDogDetails(); 

 /*   cout << "\n\n";
    Animal you{"homo sapiens", 20.22};
    you.print(); */


    return 0;
}
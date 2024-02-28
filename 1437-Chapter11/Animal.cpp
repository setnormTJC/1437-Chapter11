#include "Animal.h"

#include<iostream> 

using std::cout; 
using std::endl; 

Animal::Animal()
{
	speciesName = "some species";
	size = 99.99;
}

/*This "initializer list" constructor type is "modern C++"*/
Animal::Animal(string speciesName, double size)
	:speciesName(speciesName), size(size)
{

}

void Animal::printAnimalDetails()
{
	cout << "species name: " << speciesName << endl; 
	cout << "size (AKA: volume in liters): " << size << endl; 
}



Dog::Dog(string sName, double clientSpecifiedSize, int tLength)
{
	Animal::speciesName = sName; 
	Animal::size = clientSpecifiedSize; 
	tailLength = tLength; 
}

void Dog::printDogDetails()
{
	Animal::printAnimalDetails();
	cout << "Tail length: " << tailLength << " cm" << endl; 
}


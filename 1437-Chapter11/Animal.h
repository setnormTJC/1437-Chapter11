#pragma once
#include <string>

using std::string; 

class Animal
{

public:
	string speciesName; 
	double size; //volume 
	//insert other attributes/member variables as needed!

	Animal(); 
	Animal(string, double);

	void printAnimalDetails(); 

};

class Dog : public Animal 
	//the colon means "inherits from"  (Java -> extends) Python: Dog < Animal
{
	int tailLength; 
	
public: 
	Dog(string sName, double clientSize, int tLength);

	void printDogDetails();
};

class Person : public Animal
{
	double costOfClothing; 
};


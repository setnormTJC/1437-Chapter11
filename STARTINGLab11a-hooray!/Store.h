#pragma once
#include <string>

#include<iostream> 

//using namespace std: //"BAD"

using std::cout; 
using std::endl; 

using std::string; 

class Store
{
	string name; 
	double revenue; 

public: 

	//instead of 3 different getter functions - maybe just a SINGLE print function 
	void print(); 

	Store(string theStoreName, double);
};

class PhysicalStore

{

};

class WebStore : public Store
{

	string webAddress; 
	bool hasDroneDelivery; 

public: 

	WebStore(string name, double revenue, string webAddress, bool hasDroneDelivery);
	void print(); 
};
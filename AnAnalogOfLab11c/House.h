#pragma once

#include <string> 

#include<vector> 

#include<iostream>

using namespace std; 

struct Window
{
	int windowLength = 42; //inches

	double price; 

	void applyTint()
	{
		cout << "Tint has been applied - now you don't have to squint so much." << endl; 
	}

	void openWindow()
	{
		cout << "Opening window ... it feels TERRIFFIC outside!\n"; 
	}

};

class Door
{
public: 
	string doorColor = "brown"; 

	void paintDoor(string doorColor) //setter function 
	{
		Door::doorColor = doorColor; 
	}
};

struct Person
{
	string name; 

	int height; 

	void increaseHeight(int heightIncreaseAmount)
	{
		cout << "You put on high heels that are " << heightIncreaseAmount
			<< "inches tall - now your height is: " << endl; 
		
		height = height + heightIncreaseAmount; 

		cout << height << endl; 
	}
};

class House
{
public: 
	Window frontWindow; 
	//vector<Door> doors; 

	Door doors[2];

	Person you; 


};




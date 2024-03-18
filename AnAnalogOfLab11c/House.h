#pragma once

#include <string> 

class House
{
	Window frontWindow; 
	vector<Door> doors; 

	Door doors2[2];
};


class Window
{
public: 
	int windowLength = 42; 
	std::string windowOpacity = "1 opaqueness units";
};

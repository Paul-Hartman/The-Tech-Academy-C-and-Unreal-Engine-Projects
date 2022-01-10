#pragma once
#include <iostream>
#include <string>

using std::cout;
using std::string;
class Dog
{
public:
	string Breed;
	string Color;
	string Height;
	string Weight;
	Dog(string b, string c, string h, string w);

	void Shake()
	{
		cout << "*The dog shakes*\n \n";
	}

	void Sit()
	{
		cout << "*The dog sits down*\n \n";
	}

	void LayDown()
	{
		cout << "*The dog lays down*\n \n";
	}
		
};


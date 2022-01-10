#pragma once
#include <string>
#include <iostream>

using std::cout;
using std::string;
class Pets
{
public:
	string species;
	string size;
	string name;
	Pets(string x, string y, string z);

	
};

class Dog : public Pets 
{
public:
	void animalSound() {
		cout << "Bark Bark";
	}
};

class Bird : public Pets
{
public:
	void animalSound()
	{
		cout << "Tweet Tweet";
	}
};


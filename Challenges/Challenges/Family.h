#pragma once
#include <iostream>

using std::cout;
class Family
{
public:
	void familyName() 
	{
		cout << "the Smith Family" << '\n';

	}
};

class Father 
{

	protected:
		int age = 50;
		
};

class Child : public Family, protected Father
{
public:
	void familyName() 
	{
		cout <<"Frank is "<< age << '\n';
	}
};

class mother : Family
{
public:
	void familyName()
	{
		cout << "Bellinga Smith \n";
	}
};


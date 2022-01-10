#pragma once
#include <iostream>
using std::cout;
class functions
{
public:
	int add(int a, int b); //defined out of the class
	double add(double a, double b);
	void message()  //defined in the class
	{
		cout << "This funciton was called" << '\n';
	}

	void squarenums(int& x, int& y);

	void setTempurature(int t)
	{
		tempurature = t;
	}

	int getTempurature()
	{
		return tempurature;
	}


private:
	int tempurature;
};





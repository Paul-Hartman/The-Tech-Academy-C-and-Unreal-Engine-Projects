#pragma once
#include <string>
#include <iostream>

using std::string;
using std::cout;

class Shape
{
public:
	string color;

	double getArea() 
	{

	}
	
};

class Rectangle : public Shape
{
public:
	double height;
	double width;
	
	Rectangle(string a, double b, double c); //constuctor 
	void getArea(double height, double width);  //method declaration
	
	
};
class Triangle : public Shape
{
public:
	double base;
	double height;

	Triangle(string a, double b, double c);  //constructor

	void getArea(double base, double height);  //method delclaration
	
};
class Circle : public Shape
{
public:
	double radius;
	Circle(string a, double b);
	void getArea(double radius);
	
};

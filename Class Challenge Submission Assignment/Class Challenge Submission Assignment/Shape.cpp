#include "Shape.h"
Rectangle::Rectangle(string a, double b, double c)
{
	color = a;
	height = b;
	width = c;
}

void Rectangle::getArea(double height, double width)
{
	double area = width * height;
	cout << "The area of this rectangle is: " << area << '\n';
}

Triangle::Triangle(string a, double b, double c)
{
	color = a;
	base = b;
	height = c;
}


void Triangle::getArea(double base, double height)
{

	double area = 0.5 * (base * height);
	cout << "The area of this triangle is: " << area << '\n';
}

Circle::Circle(string a, double b)
{
	color = a;
	radius = b;
	
}

void Circle::getArea(double radius)
{
	double area = 3.14159265359 * (radius * radius);
	cout << "The area of this circle is: " << area << '\n';
}
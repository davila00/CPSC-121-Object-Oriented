#ifndef RECTANGLE_H
#define RECTANGLE_H
//void display(int num, string); example prototype
#include <iostream>
#include <string>
class Rectangle
{
private:
	double length;
	double width;
public:
	//prototyping the functions of a class 
	//must be done within the scope of the class
	Rectangle();
	Rectangle(double l, double w);
	void setLength(double l);
	void setWidth(double w);
	double getLength();
	double getWidth();
	double calcArea();
};
Rectangle::Rectangle()
{
	length = 4.0;
	width = 4.0;
}
Rectangle::Rectangle(double l, double w)
{
	length = l;
	width = w;
}
void Rectangle::setLength(double l)
{
	length = l;
}
void Rectangle::setWidth(double w)
{
	width = w;
}
double Rectangle::getLength()
{
	return length;
}
double Rectangle::getWidth()
{
	return width;
}
double Rectangle::calcArea()
{
	return (length * width);
}


#endif // !RECTANGLE_H
#ifndef CARPET_H
#define CARPET_H
#include <iostream>
#include "Rectangle.h"

class Carpet
{
private:
	double pricePerSqYd;
	//string name;
	//composition
	Rectangle size;//class object used to describe another class
public:
	Carpet(double a, double b, double c);
	double getTotalPrice();
};

Carpet::Carpet(double price, double length, double width)
{
	pricePerSqYd = price;
	size.setLength(length);
	size.setWidth(width);
}
double Carpet::getTotalPrice()
{
	return (pricePerSqYd * size.calcArea());
}
#endif // !RECTANGLE_H
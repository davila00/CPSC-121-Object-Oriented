#ifndef CARPET_H
#define CARPET_H
#include <iostream>
#include "Rectangle.h"
#include "Padding.h"

class Carpet
{
private:
	double pricePerSqYd;
	//string name;
	//composition
	Rectangle size;//class object used to describe another class
	Padding foam;

public:
	Carpet(double a, double b, double c, double p);
	double getTotalPrice();
};

Carpet::Carpet(double price, double length, double width, double pPrice) : size(length, width), foam(pPrice)
{
	pricePerSqYd = price;
	//size.setLength(length);
	//size.setWidth(width);
}
double Carpet::getTotalPrice()
{
	return ((foam.getPadPrice() + pricePerSqYd) * size.calcArea());
}

#endif // !RECTANGLE_H
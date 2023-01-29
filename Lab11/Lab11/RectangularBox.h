#ifndef RECTANGULARBOX_H
#define RECTANGULARBOX_H
#include "GeometricalShape.h"//base class

//VF= H * L * W

class RectangularBox : public GeometricalShape//To inherit the base class
{
private:
	double height;//height belongs to reactangular box's volume
	double length;//length belongs to reactangular box's volume
	double width;//width belongs to reactangular box's volume
public:
	RectangularBox();//default constructor
	RectangularBox(int x, int y, int z, double h, double l, double w);//overloaded constructor
	double calcVolume();//calculates volume
	double getHeight();//returns height
	double getLength();//returns length
	double getWidth();//returns width
	virtual void Abstract() {}//tests for abstraction
};
RectangularBox::RectangularBox()//default constructor
{
	height = 0.0;//default height value
	length = 0.0;//default length value
	width = 0.0;//default width values
}
RectangularBox::RectangularBox(int x, int y, int z, double h, double l, double w) : GeometricalShape(x, y, z)//first 3 parameters use the base class function
{//last 3 parameters use the rectangularbox class functions
	height = h;//fourth parameter is set equal to height
	length = l;//fifth parameter is set equal to length
	width = w;//sixth parameter is set equal to width
}
double RectangularBox::calcVolume()//Function calculates the volume using the height, length, and width values
{
	double volume;
	volume = (height * length * width);//volume formula to calculate
	return volume;//returns the volume value
}
double RectangularBox::getHeight()
{
	return height;//gets height value
}
double RectangularBox::getLength()
{
	return length;//gets length value
}
double RectangularBox::getWidth()
{
	return width;//gets width value
}
#endif // !RECTANGULARBOX_H
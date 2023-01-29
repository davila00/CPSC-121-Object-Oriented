#ifndef CYLINDER_H
#define CYLINDER_H
#include "GeometricalShape.h"//base class
#include <cmath>

//VF= 3.14 * r^2 * H

class Cylinder : public GeometricalShape//To inherit the base class
{
private:
	double height;//height belongs to cylinder's volume
	double radius;//radius belongs to cylinder's volume
public:
	Cylinder();//default
	Cylinder(int x, int y, int z, double h, double r);//overloaded
	double calcVolume();//calculates volume
	double getHeight();//returns height
	double getRadius();//returns radius
	virtual void Abstract() {}//tests for abstraction
};
Cylinder::Cylinder()//default constructor
{
	height = 0.0;//default height value
	radius = 0.0;//default radius value
}
Cylinder::Cylinder(int x, int y, int z, double h, double r) : GeometricalShape(x, y, z)//x,y,z are used with the base class' function to set the coordinates
{//last 2 parameters use Cylinder's member functions; overloaded function
	height = h;//fourth parameter is set equal to height
	radius = r;//fifth parameter is set equal to radius
}
double Cylinder::calcVolume()//Function calculates the volume using the height and radius values
{
	double volume;
	volume = (3.14 * pow(radius, 2) * height);//volume formula to calculate
	return volume;//returns the volume value
}
double Cylinder::getHeight()
{
	return height;//gets height value
}
double Cylinder::getRadius()
{
	return radius;//gets radius value
}
#endif // !Cylinder
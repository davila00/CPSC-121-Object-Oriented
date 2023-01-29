#ifndef SPHERE_H
#define SPHERE_H
#include "GeometricalShape.h"//base class
#include <cmath>

//VF= 4.0/3.0 * 3.14 * r^3

class Sphere : public GeometricalShape//To inherit the base class
{
private:
	double radius;//radius belongs to a sphere's volume
public:
	Sphere();//default constructor
	Sphere(int x, int y, int z, double r);//overloaded constructor
	double getRadius();//returns radius
	double calcVolume();//calculates the volume
	virtual void Abstract() {}//tests abstraction
};
Sphere::Sphere()//default constructor
{
	radius = 0.0;//default radius set to 0
}
Sphere::Sphere(int x, int y, int z, double r) : GeometricalShape(x, y, z)//Values x, y, z are sent to base class to use its overloaded constructor
{
	radius = r;//fourth parameter is set equal to radius
}
double Sphere::getRadius()
{
	return radius;//gets radius value
}
double Sphere::calcVolume()//Function calculates the volume using the radius value
{
	double volume;
	volume = (4.0 * 3.14 * pow(radius, 3)) / 3.0;//volume formula to calculate
	return volume;//returns the volume value
}
#endif // !SPHERE_H
#ifndef GEOMETRICALSHAPE_H
#define GEOMETRICALSHAPE_H
#include <iostream>
using namespace std;

class GeometricalShape
{
private:
	int xPosition;//x coordinate
	int yPosition;//y coordinate
	int zPosition;//z coordinate
public:
	GeometricalShape();//default
	GeometricalShape(int x, int y, int z);//overloaded
	int getX();//returns x coordinate
	int getY();//returns y coordinate
	int getZ();//returns z coordinate
	virtual void Abstract() = 0;//Test abstraction
};
GeometricalShape::GeometricalShape()//default constructor that sets it equal to 0
{
	xPosition = 0;
	yPosition = 0;
	zPosition = 0;
}
GeometricalShape::GeometricalShape(int x, int y, int z)//overloaded constructor
{
	xPosition = x;//first parameter is set equal to the variable xPosition
	yPosition = y;//second parameter is set equal to the variable yPosition
	zPosition = z;//third parameter is set equal to the variable zPosition
}
int GeometricalShape::getX()
{
	return xPosition;//gets x value
}
int GeometricalShape::getY()
{
	return yPosition;//gets y value
}
int GeometricalShape::getZ()
{
	return zPosition;//gets z value
}
#endif // !GEOMETRICALSHAPE_H
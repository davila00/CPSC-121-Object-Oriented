/*
Daniel Avila April 22nd, 2020 Section 19
Lab 11: Inheritance
Description: To use multiple classes derived from a base class to be able
Description: to access its functions as a template
*/
#include <iostream>
#include "Cylinder.h"//To be able to create Cylindrical Object from
#include "RectangularBox.h"//To be able to create a Rectangular Box Object
#include "Sphere.h"//To be able to a create Spherical Object
using namespace std;

int main()
{
	cout << "====Creating Objects with Default Constructors!====" << endl;
	cout << "Sphere info:" << endl;
	shared_ptr<Sphere> sphere = make_shared<Sphere>();//Pointer to create a default sphere object-no parameters
	cout << "The center coordinate is at X: " << sphere->getX() << " Y: " << sphere->getY() << " Z: " << sphere->getZ() << endl;//Inherits the functions from the base class to call the default coordinates-values of 0
	cout << "Dimensions - Radius: " << sphere->getRadius() << endl;//Gets the default radius from the sphere class-value of 0
	cout << "The Volume is " << sphere->calcVolume() << endl;//Calculates the unique volume because of the specific formula for a sphere-0 radius so everything becomes 0

	cout << "Rectagnular Box info:" << endl;
	shared_ptr<RectangularBox> rectbox = make_shared<RectangularBox>();//Pointer to create a default rectangular box object-no parameters
	cout << "The center coordinate is at X: " << rectbox->getX() << " Y: " << rectbox->getY() << " Z: " << rectbox->getZ() << endl;//Gets the coordinates from the base class which are set to 0 by default
	cout << "Dimensions - Height: " << rectbox->getHeight() << ", Length: " << rectbox->getLength() << ", Width: " << rectbox->getWidth() << endl;//The h,l,w comes from its class where it is set to 0
	cout << "The Volume is " << rectbox->calcVolume() << endl;//Object of rectangular box points to member function of its class because the volume formula is specific to it-results in 0 

	cout << "Cylinder info:" << endl;
	shared_ptr<Cylinder> cylinder = make_shared<Cylinder>();//Cylinder object created with no parameters so it uses default constructor
	cout << "The center coordinate is at X: " << cylinder->getX() << " Y: " << cylinder->getY() << " Z: " << cylinder->getZ() << endl;//Gets the coordinates from the base class which are set to 0
	cout << "Dimensions - Height: " << cylinder->getHeight() << ", Radius: " << cylinder->getRadius() << endl;//Height and Radius are specific to cylinder class so it points to its own member function to get 0 for both
	cout << "The Volume is " << cylinder->calcVolume() << endl << endl;//Cylinder volume formula is specfic to it so it points to its own member function in the class
	

	cout << "====Creating Objects with Overloaded Constructors!====" << endl;
	cout << "Sphere info:" << endl;
	sphere = make_shared<Sphere>(2, 2, 5, 3.5);//Using same object name but with overloaded parameters to use the overloaded constructors
	cout << "The center coordinate is at X: " << sphere->getX() << " Y: " << sphere->getY() << " Z: " << sphere->getZ() << endl;//Set to 2, 2, 5 respectively for the coordinates with inherits from the base class' member function
	cout << "Dimensions - Radius: " << sphere->getRadius() << endl;//Overloaded parameter passes it to the radius so it overwrites default and displays 3.5
	cout << "The Volume is " << sphere->calcVolume() << endl;//Calculates with 3.5 instead of 0 to get an actual result of 179.503

	cout << "Rectagnular Box info:" << endl;
	rectbox = make_shared<RectangularBox>(5, 0, -5, 2.5, 3.2, 1.5);//Using same object name but with overloaded parameters to use the overloaded constructors
	cout << "The center coordinate is at X: " << rectbox->getX() << " Y: " << rectbox->getY() << " Z: " << rectbox->getZ() << endl;//Using inheritance, the parameters use the overloaded constructors in the base class as 5, 0, -5
	cout << "Dimensions - Height: " << rectbox->getHeight() << ", Length: " << rectbox->getLength() << ", Width: " << rectbox->getWidth() << endl;//Uses the 2.5, 3.2, 1.5 from arguments to set to its member function's use
	cout << "The Volume is " << rectbox->calcVolume() << endl;//Calculates the volume with its specific fomula using the argument values to get 12

	cout << "Cylinder info:" << endl;
	cylinder = make_shared<Cylinder>(1, 1, 1, 4, 1.75);//Using same object name but with overloaded parameters to use the overloaded constructor
	cout << "The center coordinate is at X: " << cylinder->getX() << " Y: " << cylinder->getY() << " Z: " << cylinder->getZ() << endl;//Uses 1, 1, 1 to set the coordinates to these values from the base class
	cout << "Dimensions - Height: " << cylinder->getHeight() << ", Radius: " << cylinder->getRadius() << endl;//Uses 4, 1.75 to set the height and radius to it in order to calculate the volume in the class' member function
	cout << "The Volume is " << cylinder->calcVolume() << endl;//Uses the 4 and 1.75 to calculate the volume spcific to a cylinder and returns 38.465 for the volume

	system("pause>nul");
	return 0;
}
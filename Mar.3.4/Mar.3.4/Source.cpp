#include <iostream>
#include "Carpet.h"
using namespace std;

//MARCH 25th EXAM 2

int main()
{
	/*
	Rectangle rect1;
	cout << rect1.calcArea() << endl;
with Rectangl.h
	rect1.setLength(3.0);
	rect1.setWidth(5.0);
	cout << rect1.calcArea() << endl;
	*/

	Carpet rug(3.4, 30.0, 30.0, 1.4);

	cout << "The total price for this rug is $" << rug.getTotalPrice() << endl;

	system("pause>nul");
	return 0;
}
#include <iostream>
using namespace std;

/*
//default arguments
//defaults are right to left
void display(int a, int b = 10);



int main()
{
	display(5);


	system("pause>nul");
	return 0;
}

void display(int cols, int rows)
{
	for (int down = 0; down < rows; down++)
	{
		for (int across = 0; across < cols; across++)
		{
			cout << "*";
		}
		cout << endl;
	}


}


*/
//===============================================================================
/*
//overloaded functions
//these are functions with the same name
//but different types of params or different number of params
int square(int a);
double square(double a);

int main()
{
	int myInt = 5;
	double myDouble = 4;

	cout << square(myInt) << endl;
	
	system("pause>nul");
	return 0;
}

int square(int a)
{
	return a * a;
}
double square(double a)
{
	cout << "We are in the overloaded function" << endl;
	return a * a;
}
*/
//==============================================================================
//STRING IS THE ARRAY OF CHARACTERS
//we will refer to the objects of this class 
//by the "ClassName"
/*
class ClassName
{
	//Declaration for the class member variables
	//(variables that describe the class)
	//Attributes
	int num;
	char c;
	string name;
	//Declarations for the classes member functions
	//functions associated with the class object
	//can only be used with this object

	//Can do prototypes
	void print();
	//or full function bodies
	int sum()
	{

	}
	string getName()
	{
		return name;
	}
}; //semi-colon ends the class


int main()
{
	//string is a class
	string name = "Jimmy";
	string name2 = "Timmy";

	system("pause>nul");
	return 0;
}
*/
//========================================================================
#include <cmath>
#include <string>
class Circle
{
	//access specifier
	//private implies ownership
	//the class object controls private values
	private:
		double radius;
		//gives access to these functions outside the class
		//we can call these in the main
	public:
		void setRadius(double r)
		{
			radius = r;
		}
		double calcArea()
		{
			return 3.14 * pow(radius, 2);
		}
};


int main()
{
	//Class Name VarName
	//string name;

	Circle circle1;
	Circle circle2;
	//setRadius is a member function of circle
	//and must be called on a circle object
	circle1.setRadius(2.0);
	circle2.setRadius(4.0);

	cout << circle1.calcArea() << endl;
	cout << circle2.calcArea() << endl;

	//name.length

	system("pause>nul");
	return 0;
}
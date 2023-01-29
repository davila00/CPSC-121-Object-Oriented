#include <iostream>
#include <cmath>
#include <string>
using namespace std;

/*
class Circle
{
	//access specifier
	//private implies ownership
	//the class object controls private values
private:
	double radius;
	//gives access to these functions outside the class
	//we can call these in the main
	double calcArea()
	{
		return 3.14 * pow(radius, 2);
	}
public:
	double getRadius()
	{
		return radius;
	}
	void setRadius(double r)
	{
		radius = r;
	}
	/*double calcArea()
	{
		return 3.14 * pow(radius, 2);
	}*//*
	void display()
	{
		cout << calcArea() << endl;
	}
};


int main()
{
	//Class Name VarName
	string name;
	string lastname;

	Circle circle1;
	Circle circle2;
	//setRadius is a member function of circle
	//and must be called on a circle object
	circle1.setRadius(2.0);
	circle2.setRadius(4.0);

	cout << circle1.getRadius() << endl;
	circle1.display();

	//name.length

	system("pause>nul");
	return 0;
}
*/
//=======================================================================================

class Student
{
	private:
		string name;
		double gpa;

	public:
		//default constructor 
		//function with no return type/same name as class
		//empty parameters
		Student()
		{//default constructor is for making default values
		 //these are set whenever we make a student
			name = "Kimmy";
			gpa = 3.0;
			cout << "We are in the default constructor" << endl;
		}
		//setters are void and have 1 parameter of same type
		void setName(string n)
		{
			name = n;
		}
		void setGPA(double g)
		{
			gpa = g;
		}
		//getters return a value and have no parameters
		string getName()
		{
			return name;
		}
		double getGPA()
		{
			return gpa;
		}
		void display()
		{
			cout << gpa << endl;
			cout << name << endl;
		}
	
};

int main()
{
	//string timmy;
	Student Jimmy;
	Jimmy.setName("Jimmy");
	Jimmy.setGPA(4.0);

	cout << Jimmy.getName() << " "
		 << Jimmy.getGPA() << endl;

	Student Timmy;
	Timmy.setName("Timmy");
	Timmy.setGPA(2.0);

	cout << Timmy.getName() << " "
		 << Timmy.getGPA() << endl;

	Student Kimmy;
	cout << Kimmy.getName() << " "
		 << Kimmy.getGPA() << endl;

	system("pause>nul");
	return 0;
}
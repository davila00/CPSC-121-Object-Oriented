#ifndef STUDENT_H
#define STUDENT_H
//contents of .H file must be between these # signs
#include <iostream>
#include <string>
using namespace std;
//redfine the includes in .H files

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
	Student(string n, double g)
	{
		name = n;
		gpa = g;
		cout << "We are in the overloaded constructor" << endl;
	}
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
	}//obj.display("Tim")
	void display(string p)
	{

	}
};
#endif STUDENT_H
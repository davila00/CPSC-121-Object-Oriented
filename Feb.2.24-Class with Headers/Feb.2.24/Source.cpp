#include "Student.h"
using namespace std;

int main()
{
	//string timmy;
	Student Jimmy;
	Jimmy.setName("Jimmy");										//Default
	Jimmy.setGPA(4.0);

	cout << Jimmy.getName() << " "
		<< Jimmy.getGPA() << endl;

	Student Timmy;
	Timmy.setName("Timmy");										//Default
	Timmy.setGPA(2.0);

	cout << Timmy.getName() << " "
		<< Timmy.getGPA() << endl;

	Student Kimmy;
	cout << Kimmy.getName() << " "								//Default
		<< Kimmy.getGPA() << endl;

	Student Limmy("Limmy", 1.5);									//Overloaded
	cout << Limmy.getName() << " "
		<< Limmy.getGPA() << endl;


	system("pause>nul");
	return 0;
}

//           WITH STUDENT.H HEADER
//=======================================================================================
/*

#include "Rectangle.h"
int main()
{
	Rectangle rect1;
	cout << rect1.calcArea() << endl;

	rect1.setLength(3.0);
	rect1.setWidth(5.0);
	cout << rect1.calcArea() << endl;

	system("pause>nul");
	return 0;
}
*/
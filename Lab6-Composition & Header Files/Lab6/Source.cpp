/*
Daniel Avila March 11th 2020 Section 19
Lab 6: Composition and Header Files
Description: In this lab, creating two different header files for two different classes was needed
Description: and using composition syntax to integrate one header into another and both in main.
*/
#include "Patient.h"//To implement the header Patient which has the #includes and the other header file

int main()
{
	Patient Timmy;
	cout << "Patient ID: " << Timmy.getID() << endl;
	cout << "Patient Age: " << Timmy.getAge() << endl;
	Timmy.displayBlood();

	Patient Spike(1337, 19, '-', "AB");
	cout << "Patient ID: " << Spike.getID() << endl;
	cout << "Patient Age: " << Spike.getAge() << endl;
	Spike.displayBlood();

	system("pause>nul");
	return 0;
}
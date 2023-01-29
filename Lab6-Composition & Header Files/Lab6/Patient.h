#ifndef PATIENT_H
#define PATIENT_H
#include "BloodData.h"//Includes the data from the previous header in BloodData
//This class pertains to the patient's information where the blood type is attained
//from the BloodData header file
class Patient
{
private:
	int ID_number;//The patients ID
	int age;//The patients age
	BloodData patientBT;//Uses the data from the other header's class
public:
	Patient()//Default constructor
	{
		ID_number = 0;
		age = 0;
	}
	Patient(int ID, int a, char rf, string bt) : patientBT(rf,bt)
	{//Overloaded constructor that references the overloeaded contstructor from the other header file
		ID_number = ID;//Overloaded ID number
		age = a;//Overloaded age number
	}
	int getID()//Gets the ID number that has been entered
	{
		return ID_number;//Returns the ID number; displays it/hoolds it
	}
	int getAge()//Gets the age that has been entered
	{
		return age;//Returns the age; displays it/holds it
	}
	void displayBlood()//Displays the patients blood type
	{
		cout << "Blood Type: " << patientBT.bloodType() << endl;//Uses the function from the other class(header file)
	}																//to attain the blood type
};
#endif // !PATIENT_H
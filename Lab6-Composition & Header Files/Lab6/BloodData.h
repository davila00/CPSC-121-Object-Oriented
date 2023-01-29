#ifndef BLOODDATA_H
#define BLOODDATA_H
#include <iostream>//Used here so that the other files do not need them re-typed
#include <string>
using namespace std;
//This class will store the user's blood type as a string and char but combine them as a string
class BloodData
{
private:
	string blood_type;//For type of blood like AB, A, B, O
	char RhFactor;//For the factor of + or -
public:
	BloodData()//This constructor sets default values for both variables
	{
		blood_type = "O";//Sets default value to variable 
		RhFactor = '+';//Sets default value to variable
	}
	BloodData(char rF, string bt)//Overloaded constructor where parameters overload
	{							   //the default O and +
		RhFactor = rF;//Variable to overload default, O
		blood_type = bt;//Variable to overload default, +
	}
	string bloodType()//This function puts both inputs as one whole string
	{
		return (blood_type + RhFactor);//Combines the string and char to make one string
	}
};
#endif // !BLOODDATA_H
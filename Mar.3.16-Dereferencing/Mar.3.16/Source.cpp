#include <iostream>
#include <string>
using namespace std;

int main(int argc, const char* argv[])
{
	class MyClass
	{
	//data members are typically private
	};
	struct PayRoll
	{
		//NO OWNERSHIP
		//data members are typically public
		//structs typically never have functions (ie setters/getters)
		int empNumber;
		string name;
		double hours;
		double payRate;
	};

	PayRoll employee; // instance of struct
	employee.empNumber = 68;
	employee.name = "Timmy";
	employee.hours = 40;
	employee.payRate = 11;
	cout << "Emp # is " << employee.empNumber << endl;
	cout << "Emp name is " << employee.name << endl;

	PayRoll *nodePtr = nullptr;
	nodePtr = &employee;
	//printing the node value using non-object syntax
	cout << "Value is " << (*nodePtr).name << endl;
	cout << "Pay rate is " << (*nodePtr).payRate << endl;

	//print the node value using object syntax
	//gives us the contents of mem location (replaces *)
	cout << "Value is " << nodePtr->name << endl;
	cout << "Pay rate is " << nodePtr->payRate << endl;

//==================================================================================
	/*
	int num = 5;
	int* ptr = &num;//when we init the ptr we use * to ref the mem location
	cout << *ptr << endl;

	int myNum = 8;
	ptr = &myNum; //when we change the ptr, we leave off the * to ref mem location
	cout << *ptr << endl;

	int myNum2 = 11;
	ptr = &myNum2;
	cout << *ptr << endl;
	*/
//==================================================================================
	/*
	int grades[] = { 98, 88, 76, 54, 34 };
		//This defines and initiliazes an int array
		//Since grades is an array name, it is really a pointer
		//that holds the starting address of the array
	cout << "The first grade is " //The * before grades
		<< *grades << grades[0] << endl;//dereferences it so that the contents of 
										 //array location 0 is printed insteead of its address
	cout << "The second grade is " 
		<< *(grades + 1) << grades[0+1] << endl;
	cout << "The second grade is " 
		<< *(grades + 2) << grades[0 + 1] << endl;
	cout << "The second grade is " 
		<< *(grades + 3) << grades[0 + 1] << endl;
	cout << "The second grade is " 
		<< *(grades + 4) << grades[0 + 1] << endl;
	*/
	system("pause>nul");
	return 0;
}
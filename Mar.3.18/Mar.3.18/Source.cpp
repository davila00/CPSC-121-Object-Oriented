#include <iostream>
using namespace std;

struct PayRoll
{
	//NO OWNERSHIP
	//data members are typically public
	//structs typically never have functions (ie setters/getters)
	int empNumber;
	string name;
	double hours;
	double payRate;
	PayRoll* nextPtr;
};

int main(int argc, const char* argv[])
{
	PayRoll* head = nullptr;
	head = new PayRoll;

	//create the first node
	head = new PayRoll;
	head->name = "Timmy";
	head->hours = 40;
	head->nextPtr = nullptr;
	
	//create the second object 
	head->nextPtr = new PayRoll;
	head->nextPtr->name = "Kimmy";
	head->nextPtr->hours = 60;


	/*
	//No object explicitly created 
	//no PayRoll Jimmy
	PayRoll *head = nullptr;
	head = new PayRoll; //allocating obj in memory

	head->name = "Jimmy";
	head->hours = 50;

	cout << head->name << endl;
	cout << head->hours << endl;

	PayRoll* currPtr = nullptr;
	currPtr = new PayRoll;
	currPtr->name = "Kimmy";
	currPtr->payRate = 60.8;
	cout << currPtr->name << endl;
	cout << currPtr->payRate << endl;
	*/

	/*
	PayRoll employee; // instance of struct
	employee.empNumber = 68;
	employee.name = "Timmy";
	employee.hours = 40;
	employee.payRate = 11;
	cout << "Emp # is " << employee.empNumber << endl;
	cout << "Emp name is " << employee.name << endl;

	PayRoll* nodePtr = nullptr;
	nodePtr = &employee;
	//printing the node value using non-object syntax
	cout << "Value is " << (*nodePtr).name << endl;
	cout << "Pay rate is " << (*nodePtr).payRate << endl;

	//print the node value using object syntax
	//gives us the contents of mem location (replaces *)
	cout << "Value is " << nodePtr->name << endl;
	cout << "Pay rate is " << nodePtr->payRate << endl;

	int num = 5;
	int* ptr = &num;//when we init the ptr we use * to ref the mem location
	cout << *ptr << endl;

	int myNum = 8;
	ptr = &myNum; //when we change the ptr, we leave off the * to ref mem location
	cout << *ptr << endl;

	ptr = &myNum;


	int myNum2 = 11;
	ptr = &myNum2;
	cout << *ptr << endl;
	*/

	system("pause>nul");
	return 0;
}
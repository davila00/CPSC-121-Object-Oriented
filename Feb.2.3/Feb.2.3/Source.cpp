#include <iostream>
using namespace std;

//this is being passed by value 
//it is a copy of the original in main
//void testRef(int num);

//& passes the param by ref
//it uses a ptr to the original value in main
void testRef(int &num); 

//never use global variables unless its a constant
const int MYGLOBAL = 8;

int main()
{
	//local scope
	int num1 = 5;
	//cout << MYGLOBAL;
	cout << "We are in the main" << endl;
	cout << num1 << endl;
	testRef(num1);
	cout << "We are back in the main" << endl;
	cout << num1 << endl;
	//cout << myNum;

	system("pause>nul");
	return 0;
}

void testRef(int &num)
{
	//local scope
	int myNum = 7;

	//static variables are initiliazed once 
	//retained throughout lifetime of program
	//every call we can alter them and save the data
	//within the scope of the function
	static int funcCalls = 0;
	funcCalls = funcCalls + 1;
	cout << funcCalls << endl;
	//cout << num1;
	num = 3;
	cout << "We are in the function " << endl;
	cout << num << endl;
}
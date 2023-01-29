#include <iostream>
using namespace std;
//Should be first line of code

// CH.1 compiler
//source code -> preprocessor -> modified source code -> compiler -> object

//CH.2 variables
//int floats char strings bool

//CH.3 data type conversion
//float * int = float | constants

//CH.4 
//if statements | if else | operators (& ||)

//CH.5 loops
//for loop | while (0 or more times)| do-while (1 or more times)

//CH.8 arrays
//1D and 2D

//===========================================

//CH.6 functions
//passed by value or reference

//CH.7 classes
//object types

int main() {
	//const int NUMEMPLOYEE = 3;

	//int hours[NUMEMPLOYEE];//holds the hours worked for 3 employees 

	//cout << "Enter the hours worked by the employee" << endl;
	//cin >> hours[0];
	//cin >> hours[1];
	//cin >> hours[2];

	//hours[1] = 9;

	//cout << "The hours you entered are" << endl;

	//cout << hours[0] << endl;
	//cout << hours[1] << endl;
	//cout << hours[2] << endl;
	//

	// rows | cols
	char arr[3];
	
	//init arr
	for (int r = 0; r < 3; r++) //rows
	{
		for (int c = 0; c < 3; c++) //cols
		{
			arr[r][c] = 'x';// cin >> arr[i]
		}
	}
	//print arr
	arr[1][1] = '0';
	for (int r = 0; r < 3; r++) //rows
	{
		for (int c = 0; c < 3; c++) //cols
		{
			cout << arr[r][c] = " ";// every col print space
		}
		cout << endl; //every row print new line
	}

	system("PAUSE");
	return 0;

}
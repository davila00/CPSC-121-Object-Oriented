#include <iostream>
using namespace std;
/*
EXAM 2
CLASSES CHAPTER 7	pg 493
#6-13,17,22,24-30,35,52(a,b),53
DUE MARCH 24th
*/
//pg 647 for more help

int main()
{
	char letter;
	short number;
	float amount;
	double profit;
	char ch;

	//hex 123456789abcdef
	cout << "The memory address of letter is " <<	  long(&letter) << endl;
	cout << "The memory address of number is " << long(&number) << endl;
	cout << "The memory address of amount is " <<  long(&amount) << endl;
	cout << "The memory address of profit is " <<	  long(&profit) << endl;
	cout << "The memory address of   ch   is " <<    long(&ch) << endl;
	cout << endl << endl << endl;
	//syntax for making a pointer (ptr)
	//used for storing a location in memory
	int x = 25;

	//what type of data will I point to? (int, char, object, string...)
	//*- this means pointer
	//give it a variable name
	//= &var - this means save memory location of my variable
	int* iPtr = &x;
	cout << &x << endl;//Prints out x's mem location
	cout << iPtr << endl;//Prints out x's mem location
	cout << endl;
	//display value of x
	cout << x << endl;//Prints out the contents of x's mem location
	cout << *iPtr << endl;//Prints out the contents in that mem location
	cout << endl << endl << endl;
//====================================================================
	letter = 'A';
	char *cPtr = &letter;
	cout << long(cPtr) << endl;
	cout << *cPtr << endl;
	cout << endl << endl << endl;
//====================================================================
	profit = 4.99;
	double *lPtr = &profit;
	cout << *lPtr << endl;

	system("pause>nul");
	return 0;
}
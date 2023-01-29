/*
Lecture 2.cpp
3 types of comments

1: File Comments
Name Date Section#
Lab# or assignment#
program description: ex This program will demonstrate
how to implement functions

2:Function Comments
expect inputs / outputs ex accepts a float/int
purpose of funtion 

3:Inline comments
details about tricky or non-obvious parts of your code
when you have a formula
a loop
or a chain of if-else

*/

#include <iostream>
using namespace std;

//void - does not return a value
//deep - identifier (or name of function)
//() - hold the arguments (values that we pass from main)
//empty () means no arguments

//============================================================================

//This is a prototype that promises the precompiler we 
//will implement the functiion after the main

//void deep();
//void deeper();
//
//int main() 
//{
//	cout << "We are in main" << endl;
//	deep();
//	//deeper();
//	cout << "We are back in main" << endl;
//
//	system("pause>nul");
//	return 0;
//}
//
//void deeper()
//{
//	cout << "We are inside the DEEPER function" << endl;
//}
//
//void deep()
//{
//	cout << "We are inside the function" << endl;
//	deeper();
//	cout << "We are back inside deep" << endl;
//}

//===========================================================================

//return type | also 2 parameters
int sum(int a, int b);


int main()
{
	//sum(4, 3);//int mySum = sum (4,3)
	//cout << sum(4,3);

	int num1;
	int num2;
	cin >> num1;
	cin >> num2;
	cout << sum(num1, num2);

	system("pause>nul");
	return 0;
}

int sum(int a, int b)
{
	int c = a + b;
	return c;
}
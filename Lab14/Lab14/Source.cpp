/*
Daniel Avila May 13th, 2020 Section 19
Lab 14: Recursion
Description: Using recursion to simplify functions use for its purpose
*/
#include <iostream>
#include <string>
using namespace std;

//function to find the gcd of two numbers
int gcd(int x, int y)
{
	if (x % y == 0)//tests the second value for the greatest gcd
	{
		return y;//sends value of second number
	}
	else
	{
		return gcd(y, (x % y));//keeps calculating until it equals zero; to 1
	}
}
//function that reverses a user input string
void frequency(string input, int position)
{
	if (position < input.length())//start position is the beginning; 0
	{//if its less than 0, then it will start to iterate through the string 
		frequency(input, position + 1);//next letter in the string
		cout << input[position];//displays the string backwards
	}
}
//function to test if string is a palindrome
bool palindromeTest(string input) 
{	
	if (input.size() <= 1)//tests for single char string input
	{
		return true;//always is a palindrome
	}
	else if (input[0] == input[input.size() - 1])//checking for same letters from start and end
	{//if it does, then it will go to the set of letters
		return palindromeTest(input.substr(1, input.size() - 2));//checking for next set of letters
	}
	else 
	{
		return false;//two letters don't match so automatically it is not a palindrome
	}
}


int main()
{
	int int1, int2;
	cout << "Enter two integers" << endl;
	cin >> int1 >> int2;
	cout << "The greatest common divisor of " << int1 << " and ";
	cout << int2 << " is " << gcd(int1, int2) << endl << endl;//function is called
	cin.ignore();//to get rid of previous input

	string str1;
	cout << "The unaltered string is:" << endl;
	getline(cin, str1);
	cout << "The string backwards is:" << endl;
	frequency(str1, 0);//calls funtion that displays the string reversed
	cout << endl << endl;

	string str2;
	cout << "Enter possible palindrome:" << endl;
	getline(cin, str2);
	if (palindromeTest(str2))//if statement that checks for T/F return
	{
		cout << "The string " << str2 << " is a Palindrome" << endl;//if it's true
	}
	else
	{
		cout << "The string " << str2 << " is Not a Palindrome" << endl;//if it's false
	}

	system("pause>nul");
	return 0;
}
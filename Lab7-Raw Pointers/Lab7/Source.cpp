/*
Daniel Avila March 18th 2020 Section 19
Lab 7: Practice with Raw Pointers
Description: In this lab, we use pointers variables that
Description: point to the set variable and access its storage.
*/
#include <iostream>
using namespace std;

int main()
{
	int length; //Holds length
	int width; //holds width
	int area; // holds area
	int* lengthPtr = nullptr; //int pointer which will be set to point to length
	int* widthPtr = nullptr; //int pointer which will be set to point to width

	cout << "Please input the length of the rectangle" << endl;
	cin >> length;
	cout << "Please input the width of the rectangle" << endl;
	cin >> width;

	//Fill in code to make lengthPtr point to length (holds its address)
	lengthPtr = &length;
	//Fill in code to make widthPtr point to width (holds its address)
	widthPtr = &width;

	area = *lengthPtr * *widthPtr; //Fill in code to find the area by using only the pointer variables
	cout << "The area is " << area << endl;

	// Fill in the condition of length > width by using only the pointer variables
	if (*lengthPtr > * widthPtr)
		cout << "The length is greater than the width" << endl;
	// Fill in the condition of width > length by using only the pointer variables
	else if (*widthPtr  > *lengthPtr)
		cout << "The width is greater than the length" << endl;
	else
		cout << "The width and length are the same" << endl;
	return 0;
}
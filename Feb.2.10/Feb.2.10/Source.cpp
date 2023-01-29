#include <iostream>
using namespace std;

//read
void printArr(char[3][3]);
//write to arr
void initArr(char[3][3]);

int main()
{
	char arr[3][3]; 
	//string arr2[3][3];
	//// 0 1 2 
	//for (int rows = 0; rows < 3; rows++)
	//{
	//	for (int cols = 0; cols < 3; cols++)
	//	{
	//		arr[rows][cols] = 'X';
	//	}
	//}

	initArr(arr);
	// reading from array
	/*for (int rows = 0; rows < 3; rows++)
	{
		for (int cols = 0; cols < 3; cols++)
		{
			cout << arr[rows][cols] << " ";
		}
		cout << endl;
	}*/
	
	//pass just the name not the size or a certain index

	printArr(arr);
	/*for (int rows = 0; rows < 3; rows++)
	{
		for (int cols = 0; cols < 3; cols++)
		{
			cout << arr[rows][cols] << " ";
		}
		cout << endl;
	}*/

	system("pause>nul");
	return 0;
}
void initArr(char arr[3][3])
{
	for (int rows = 0; rows < 3; rows++)
	{
		for (int cols = 0; cols < 3; cols++)
		{
			arr[rows][cols] = 'X';
		}
	}
}
void printArr(char arr[3][3])
{
	cout << "We are in the function" << endl;
	//arrays are always passed by reference
	arr[1][1] = 'P';
	for (int rows = 0; rows < 3; rows++)
	{
		for (int cols = 0; cols < 3; cols++)
		{
			cout << arr[rows][cols] << " ";
		}
		cout << endl;
	}
}
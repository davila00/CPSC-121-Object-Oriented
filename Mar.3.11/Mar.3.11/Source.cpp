#include <iostream>
using namespace std;

int main()
{
	//                     0     1     2
	char arr[3] = { 'a', 'b', 'c' };
	cout << "The first index of arr is " << *arr << endl;
	//cout << arr[1];
	cout << "The second index of arr is " << *(arr + 1) << endl;

	cout << "The final index of arr is " << *(arr + 2) << endl;
	//Arrays are really just pointers that we can use to navigate through memory
	//in this example we are taking the location in memory and adding 1, 2 to it,
	//to move the pointer to the next location

	system("pause>nul");
	return 0;
}
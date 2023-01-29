#include <iostream>
using namespace std;

int main()
{
	int length = 8;
	int width = 5;
	int area = 0;
	int* len = &length;
	int* wid = &width;

	cout << (*len * *wid);

	return 0;
}
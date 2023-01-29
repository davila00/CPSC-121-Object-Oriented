/*
#include <iostream>
using namespace std;

class Demo
{
private:
	//dynamically allocate memory
	//allocate memory for an int without initializing it
	//reserving memory in ram
	int* p = (int*)malloc(sizeof(int));
public:
	Demo() 
	{
		cout << "Inside the constructor" << endl;
	}
	//deconstructor
	//deleting the object when deconstructor is called
	//there  can only be one deconstructor; cannot overload
	~Demo()//automatically called when program is over
	{
		delete p;//releasing the memory
		//save to files
		//release allocated memory
		//do any additional clean-up
		cout << "We are in the deconstructor" << endl;
	}
};

int main()
{
	Demo demoObj;
	cout << "The object now exists, bu is about to be destroyed" << endl;

	system("pause>nul");
	return 0;
}
*/
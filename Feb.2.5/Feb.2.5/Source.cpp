#include <iostream>
#include <string>
#include <time.h> //needed for rand numbers
using namespace std;

void initGame(string &n);
int generate();
void checkWin(int d1, int d2, string name);


int main()
{
	srand(time(0));//seeds the rand generator
	string name;
	initGame(name);
	cout << "Welcome player " << name <<  endl;


	int dice1, dice2;
	//save the return value
	dice1 = generate();
	dice2 = generate();

	cout << dice1 << endl;
	cout << dice2 << endl;

	checkWin(dice1, dice2, name);

	system("pause>nul");
	return 0;
}

void initGame(string &n)
{
	cout << "Enter your name" << endl;
	cin >> n;
}

int generate()
{
	//			    max | min
	return (rand() % 6 + 1);
}

void checkWin(int d1, int d2, string name)
{

	if (d1 == d2)
	{
		cout << "You win, there is a pair!" << endl;
	}
	else
	{
		cout << "Better luck nest time" << endl;
	}
	cout << "Goodbye " << name << endl;
}
#ifndef DICE_H
#define DICE_H

#include <iostream>
#include <memory>//used for pointers
#include <time.h>//for random number to assign
using namespace std;

class Dice
{
private:
	int dice1;
	int dice2;
	int dice3;
public:
	Dice();
	~Dice();
	void displayDice();
	void diceMatch();
	void reRoll(int num);
};
Dice::Dice()
{
	srand(time(0));//seed a random number
	dice1 = rand() % 6 + 1;//1-6
	dice2 = rand() % 6 + 1;//1-6
	dice3 = rand() % 6 + 1;//1-6
}
Dice::~Dice()
{//Deconstructor for when the object is not being pointed at
	cout << "No shared Pointers left to manage dice object, ";
	cout << "Deconstructor called on dice object!" << endl;
}
void Dice::displayDice()
{//Displays the values of each dice
	cout << "Dice #1 is " << dice1 << endl;
	cout << "Dice #2 is " << dice2 << endl;
	cout << "Dice #3 is " << dice3 << endl;
}
void Dice::diceMatch()
{//checks to see if any of the die match to one another
	if ((dice1 == dice2) && (dice2 == dice3) && (dice3 == dice1))
	{//for all three matching
		cout << "All Three Dice Are Equal" << endl << endl;
	}
	else if ((dice1 == dice2) || (dice1 == dice3) || (dice2 == dice3))
	{//for 2 of 3 matching
		cout << "Two Dice Are Equal" << endl << endl;
	}
	else
	{//nothing matches
		cout << "No Dice Are Equal" << endl << endl;
	}

}
void Dice::reRoll(int num)
{
	srand(time(0));//seed a random number
	if (num == 1)
	{//first dice is re-rolled
		dice1 = rand() % 6 + 1;
	}
	else if (num == 2)
	{//second dice is re-rolled
		dice2 = rand() % 6 + 1;
	}
	else if (num == 3)
	{//third die is re-rolled
		dice3 = rand() % 6 + 1;
	}
}

#endif // !DICE_H

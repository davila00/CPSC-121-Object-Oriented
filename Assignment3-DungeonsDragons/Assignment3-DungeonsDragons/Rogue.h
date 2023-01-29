#ifndef ROGUE_H
#define ROGUE_H
#include "CommonStatistics.h"

class Rogue : public CommonStatistics
{
private:
	int attack;
	int attackModifier;//Agility
	int initiativeModifier;//Speed
	int dodge;//50% chance to dodge
	int initRoll = rand() % 20 + 1;//roll of 1-20
public:
	Rogue(string n, int hlth, int ar);//overloaded constructor
	virtual void printStats();//prints stats
	int initiativeRoll();//value of 1-20
	int makeAttack();//to attack
	int getInitRoll();//return value of 1-20
	int getAttack();//gets 2-8 value
	int getAttackModifier();//4
	int getInitiativeModifier();//5
	int getDodge();//1 or 2 value
};
Rogue::Rogue(string n, int hlth, int ar) : CommonStatistics(n, hlth, ar)
{//function that inherits from bas class
	srand(time(0));
	attack = ((rand() % 4 + 1) + (rand() % 4 + 1));//2-8
	attackModifier = 4;
	initiativeModifier = 5;
	dodge = rand() % 2 + 1;//1 or 2
}
void Rogue::printStats()
{//function that prints stats
	cout << "Rogue " << name << "'s current stats:" << endl;
	cout << "Health: " << health << endl;
	cout << "Base Attack Die: 2 D4" << endl;
	cout << "Armor: " << armor << endl;
	cout << "Attack Modifier (Agility): " << attackModifier << endl;
	cout << "Initiative Modifier (Speed): " << initiativeModifier << endl;
	cout << "Dodge: 50% chance to dodge an incoming attack" << endl;
}
int Rogue::initiativeRoll()
{
	return (initRoll + initiativeModifier);//adds roll + modifier
}
int Rogue::makeAttack()
{
	return (attack + attackModifier);//adds attack + modifier
}
int Rogue::getInitRoll()
{
	return initRoll;//value of 1-20
}
int Rogue::getAttack()
{
	return attack;//2-8 values
}
int Rogue::getAttackModifier()
{
	return attackModifier;//value of 4
}
int Rogue::getInitiativeModifier()
{
	return initiativeModifier;//value of 5
}
int Rogue::getDodge()
{
	return dodge;//value of 1 or 2
}
#endif // !ROGUE_H
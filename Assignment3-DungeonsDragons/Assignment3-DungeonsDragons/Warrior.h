#ifndef WARRIOR_H//Knight
#define WARRIOR_H//Knight
#include "CommonStatistics.h"
class Warrior : public CommonStatistics 
{
private:
	int attack;//value the player attacks
	int heal;//value to heal with
	int attackModifier;//Strength
	int initiativeModifier;//Speed
	int initRoll = rand() % 20 + 1;//roll of 1-20
public:
	Warrior(string n, int hlth, int ar);//3 parameters that can be overwritten
	virtual void printStats();//prints user stats
	void move();//option to heal or attack
	int initiativeRoll();//calculates final intitiative
	int getInitRoll();//gets value from 1-20
	int makeAttack();//makes attack from the attack and its modifier
	int getAttack();//gets value from 1-6
	int getHeal();//gets value from 2-10
	int getNewHealth();//adds generated value to current health
	int getAttackModifer();//gets value of 3
	int getInitiativeModifier();//gets value of 4
	
};
Warrior::Warrior(string n, int hlth, int ar) : CommonStatistics(n, hlth, ar)
{//inherits 3 parameters of name, health, and armor
	srand(time(0));//to seed a random number
	heal = ((rand() % 5 + 1) + (rand() % 5 + 1));//2-10
	attack = rand() % 6 + 1;//1-6
	attackModifier = 3;
	initiativeModifier = 4;
}
void Warrior::printStats()
{//function to print stats
	cout << "Warrior " << name << "'s current stats:" << endl;
	cout << "Health: " << health << endl;
	cout << "Healing Die : 2 D5" << endl;
	cout << "Base Attack Die : 1 D6" << endl;
	cout << "Armor : " << armor << endl;
	cout << "Attack Modifier (Strength) : " << attackModifier << endl;
	cout << "Initiative Modifier (Speed) : " << initiativeModifier << endl;
}
int Warrior::getInitRoll()
{
	return initRoll;//returns the roll of 1-20
}
int Warrior::initiativeRoll()
{
	return (initRoll + initiativeModifier);//adds final initiative roll number
}
void Warrior::move()
{//function for the user to choose between healing or attacking
	cout << "Your Move:" << endl;
	cout << "What will you do?" << endl;
	cout << "1. Attack" << endl;
	cout << "2. Heal" << endl;
}
int Warrior::makeAttack()
{
	return (attack + attackModifier);//returns final damaging going to be dealt
}
int Warrior::getAttack()
{
	return attack;//gets attack value from 1-6
}
int Warrior::getHeal()
{
	return heal;//gets heal from 2-10
}
int Warrior::getNewHealth()
{//function to return new health
	if ((heal + health) > 20)//if the new health goes over 20
	{//then health is set to 20
		health = 20;
		return health;
	}
	else//if not, it returns the value under 20 or less
	{
		return (heal + health);
	}
}
int Warrior::getAttackModifer()
{
	return attackModifier;//gets value of 3
}
int Warrior::getInitiativeModifier()
{
	return initiativeModifier;//gets value of 4
}
#endif // !WARRIOR_H
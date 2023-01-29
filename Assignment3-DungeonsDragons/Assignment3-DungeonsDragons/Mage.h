#ifndef MAGE_H
#define MAGE_H
#include "CommonStatistics.h"

class Mage : public CommonStatistics
{
private:
	int attack;
	int attackModifier;//Intellect
	int initRoll = rand() % 20 + 1;//roll of 1-20
public:
	Mage(string n, int hth, int ar);
	virtual void printStats();
	int initiativeRoll();//gets roll of 1-20
	int makeAttack();//makes attack of 1-4
	int getAttack();//gets attack value
	int getAttackModifier();//gets modifier value of 7
};
Mage::Mage(string n, int hlth, int ar) : CommonStatistics(n, hlth, ar)
{//inheritance overloaded constructor 
	srand(time(0));
	attack = rand() % 4 + 1;//1-4
	attackModifier = 7;
}
void Mage::printStats()
{//function to print stats
	cout << "Mage " << name <<"'s current stats:" << endl;
	cout << "Health: " << health << endl;
	cout << "Base Attack Die : 1 D4" << endl;
	cout << "Armor : " << armor << endl;
	cout << "Attack Modifier (Intellect) : " << attackModifier << endl;
}
int Mage::initiativeRoll()
{
	return initRoll;//value of 1-20
}
int Mage::makeAttack()
{
	return (attack + attackModifier);//calculates for a total of 8-11
}
int Mage::getAttack()
{
	return attack;//value of 1-4 
}
int Mage::getAttackModifier()
{
	return attackModifier;//value of 7
}
#endif // !MAGE_H
#ifndef COMMONSTATISTICS_H
#define COMMONSTATISTICS_H
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

class CommonStatistics
{
protected:
	string name;//player names
	int health;//health is fixed respectively but all shared
	int armor;//armor is unique but they share the common stat
public:
	CommonStatistics(string n, int h, int ar);//overloaded constructor the other classes can use
	string getName();//gets player name
	int getHealth();//gets player health
	int getArmor();//gets player armor
	virtual void printStats() = 0;//function to test for abstraction
	void receiveDamage(int damageTaken);//function to deal with damage taking
};
CommonStatistics::CommonStatistics(string n, int h, int ar)//overwritten arguments are set
{//equal to their respective variable in each class
	name = n;//1st
	health = h;//2nd
	armor = ar;//3rd
}
string CommonStatistics::getName()
{
	return name;//gets name of the desired player
}
int CommonStatistics::getHealth()
{
	return health;//gets health of the desired player
}
int CommonStatistics::getArmor()
{
	return armor;//gets armor of the desired player
}
void CommonStatistics::receiveDamage(int damageTaken)//receives the enemy's attack
{//the attack value is then taken away from the current player receiving the damage
	health = (health - (damageTaken - armor));//health is subtracted with armor as well
	cout << name << " has taken " << damageTaken << " damage and is now at ";
	cout << health << " HP" << endl;//hp left after attack
}
#endif // !COMMONSTATISTICS_H
#include <iostream>
using namespace std;

class Character
{
private:
	//keep it private
protected://was private:
	int hitPoints;
	//pass it down to the derived classes
public:
	Character()
	{
		hitPoints = 9;
	}
	int getHP()
	{
		return hitPoints;
	}
	void receiveDamage(int damageTaken)//not specific to a player
	{										//same damage system
		hitPoints = hitPoints - damageTaken;
		cout << hitPoints << " Hit Points left!" << endl;
	}
	//pure virtual function
	virtual int getAttackDamage() = 0;
};
class Player : public Character
{
private:
	string name;
	int attackPower;//can be in base class *strength*
public:
	Player() : Character()
	{
		name = "Timmy";
		attackPower = 2;
	}
	string getName()
	{
		return name;
	}
	void printStats()
	{
		cout << name << endl;
		cout << attackPower << endl;
		cout << hitPoints << endl;
	}
	virtual int getAttackDamage()
	{
		int d4 = rand() % 4 + 1;
		cout << "You strike at the zombie for " << (d4 + attackPower) << endl;
		return (d4 + attackPower);
	}
};
class Zombie : public Character
{
private:
	int baseAttackPower;//can be in base class *agility*
	string voiceLine;
public:
	Zombie() : Character()
	{
		baseAttackPower = 3;
		voiceLine = "Must eat BRAINS...";
	}
	virtual int getAttackDamage()
	{
		cout << "The zombie bites you for " << baseAttackPower << endl;
		return baseAttackPower;
	}
	void printVL()
	{
		cout << voiceLine << endl;
	}
};
int main()
{
	//pg 963-virtual function
	//pg 797-overriding base class functions

	shared_ptr<Player> human = make_shared<Player>();
	human->printStats();

	shared_ptr<Zombie> enemy = make_shared<Zombie>();
	enemy->printVL();

	int tempAttack = 0;//Zombies attack and Player attack
	do
	{
		tempAttack = enemy->getAttackDamage();
		human->receiveDamage(tempAttack);//human->receiveDamage(enemy->getAttackDamage());

		tempAttack = human->getAttackDamage();
		enemy->receiveDamage(tempAttack);//enemy->receiveDamage(human->getAttackDamage());

	} while (human->getHP() > 0 && enemy->getHP() > 0);

	system("pause>nul");
	return 0;
}
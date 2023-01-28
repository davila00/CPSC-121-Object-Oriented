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
	//pure virtual function-all classes that inherit MUST INCLUDE this function with body
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

	//example syntax
	int num = 5;
	num = 4;
	shared_ptr<Character> p1 = make_shared <Player>();
	shared_ptr<Character> p2 = make_shared <Zombie>();

	//runtime polymorphism
	shared_ptr<Character> selection = nullptr;

	cout << "1 zombie, 2 player" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		selection = make_shared<Zombie>();
	}
	else if (choice == 2)
	{
		selection = make_shared<Player>();
	}
	cout << selection->getAttackDamage() << endl;

	//EXCEPTIONS
	//USED FOR ERROR CHECKING / HANDLING

	int quotient = 0;
	int numerator = 3;
	int denominator = 0;
	try
	{
		//code you want o execute that could be buggy
		//cin int but you get a string
		//USER INPUT
		//DIVIDE BY ZERO
		if (denominator == 0)
		{
			//throw 404;//any error code
			throw string("ERROR: can not divide by ZERO");
		}
		quotient = numerator / denominator;
		cout << quotient << endl;
	}
	catch (string exceptionString)//ERROR CODE
	{
		//substitution code
		//runs only if try code fails
		//keeps program from crashing
		cout << exceptionString << endl;
	}

	/*
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
	*/

	system("pause>nul");
	return 0;
}
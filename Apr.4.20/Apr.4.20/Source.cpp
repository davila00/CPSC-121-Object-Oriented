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
		cout << hitPoints << "Hit Points left!" << endl;
	}
	virtual int getAttackDamage() = 0;
};
class Player : public Character
{
private:
	string name;
	int attackPower;
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
		int d4 = rand() * 4 + 1;
		return (d4 + attackPower);
	}
};

int main()
{
	//pg 963-virtual function
	//pg 797-overriding base class functions

	shared_ptr<Player> human = make_shared<Player>();

	human->printStats();

	system("pause>nul");
	return 0;
}
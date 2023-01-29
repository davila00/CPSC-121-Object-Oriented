#ifndef MONSTER_H
#define MONSTER_H
#include "Creature.h"

class Monster : public Creature//to inherit from Creature
{
public:
	Monster(string name) : Creature(name)//overloaded constructor that 
	{//uses the parameter from the base class Creature which sets the name to CreatureName

	}
	virtual void DoAction();//function for testing abstraction
	virtual void DrawOnScreen();//function to test for abstract
};
void Monster::DoAction()
{
	cout << "is doing monster stuff!!" << endl << endl;//action object is doing
}
void Monster::DrawOnScreen()
{
	cout << "Monster " << CreatureName << " ";//protected variable from base class
	DoAction();//calls the action
}
#endif // !MONSTER_H
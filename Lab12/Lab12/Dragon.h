#ifndef DRAGON_H
#define DRAGON_H
#include "Monster.h"

class Dragon : public Monster//to inherit from Monster that inherits from Creature
{
public:
	Dragon(string name) : Monster(name)//overloaded constructor that uses overloaded
	{//Monster constructor that uses Creature's overloaded constructor

	}
	virtual void DoAction();//test for abstraction function
	virtual void DrawOnScreen();//test for abstraction function
};
void Dragon::DoAction()
{
	cout << "is breathing fire!!" << endl << endl;//action the object is doing
}
void Dragon::DrawOnScreen()
{
	cout << "Dragon " << CreatureName << " ";
	DoAction();//calls the action to do
}
#endif // !PLAYER_H
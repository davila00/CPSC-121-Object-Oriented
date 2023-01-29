#ifndef WILDPIG_H
#define WILDPIG_H
#include "Monster.h"

class WildPig : public Monster//to inherit from Monster class
{
public:
	WildPig(string name) : Monster(name)//sets the name to Monster class constructor
	{//that sets it to the base class constructor

	}
	virtual void DoAction();//virtual to test abstraction from Monster to Creature
	virtual void DrawOnScreen();//virtual to test abstraction from Monster to Creature
};
void WildPig::DoAction()
{
	cout << "is running!!" << endl << endl;//action object doing
}
void WildPig::DrawOnScreen()
{
	cout << "WildPig " << CreatureName << " ";//protected variable used
	DoAction();//calls the function above
}
#endif // !WILDPIG_H
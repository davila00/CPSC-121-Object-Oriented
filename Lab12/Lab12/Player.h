#ifndef PLAYER_H
#define PLAYER_H
#include "Creature.h"

class Player : public Creature//to inherit from Creature
{
public:
	Player(string name) : Creature(name)//overloaded constructor that 
	{//uses the parameter from the base class Creature which sets the name to CreatureName
		
	}
	virtual void DoAction();//virtual function being used for abstraction
	virtual void DrawOnScreen();//second virtual function being used for abstraction
};

void Player::DoAction()//the action the pointer will be doing
{
	cout << "is attacking!!" << endl << endl;//action
}
void Player::DrawOnScreen()//printing the outputs 
{
	cout << "Player " << CreatureName << " ";//uses protected variable from base class
	DoAction();//calls the above function for the action the object is doing
}

#endif // !PLAYER_H
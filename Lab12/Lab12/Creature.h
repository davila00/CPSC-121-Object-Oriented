#ifndef CREATURE_H
#define CREATURE_H
#include <string>
#include<iostream>
using namespace std;

class Creature
{
protected:
	string CreatureName;//variable accessible to other classes
public:
	Creature(string cN);//overloaded constructor
	virtual void DoAction() = 0;//pure virtual function
	virtual void DrawOnScreen() = 0;//pure virtual function
};
Creature::Creature(string cN)//name is accessed within the class
{
	CreatureName = cN;//parameter is to the protected variable
}

#endif // !CREATURE_H
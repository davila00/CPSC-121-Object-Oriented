/*
Daniel Avila April 29th, 2020 Section 19
Lab: Virtual Interfaces
Description: Using virutal functions to test for abstraction
Description: from using inheritance
*/
//#include "Creature.h" //can include but isn't necessary
#include "Player.h"//for player object
//#include "Monster.h" //can include but isn't necessary
#include "WildPig.h"//for wildpig object
#include "Dragon.h"//for dragon object
#include <memory>

int main()
{
	//makes pointer with overloaded argument using a name-Timmy
	shared_ptr<Player> player = make_shared<Player>("Timmy");
	player->DrawOnScreen();//Points to function that prints the action while also
							   // calling another virtual function that prints the name

	//makes pointer with overloaded argument using a name-UFO
	shared_ptr<Monster> monster = make_shared<Monster>("UFO");
	monster->DrawOnScreen();//Points to function that prints the action while also
							   // calling another virtual function that prints the name

	//makes pointer with overloaded argument using a name-Piglet
	shared_ptr<WildPig> wildpig = make_shared<WildPig>("Piglet");
	wildpig->DrawOnScreen();//Points to function that prints the action while also
							   // calling another virtual function that prints the name

	//makes pointer with overloaded argument using a name-Viserion
	shared_ptr<Dragon> dragon = make_shared<Dragon>("Viserion");
	dragon->DrawOnScreen();//Points to function that prints the action while also
							   // calling another virtual function that prints the name
	system("pause>nul");
	return 0;
}
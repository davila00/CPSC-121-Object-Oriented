#include <iostream>
#include <memory>//for pointers
#include "Mage.h"
#include "Rogue.h"
#include "Warrior.h"
using namespace std;

int main()
{
	int choice;//variable for choice to heal or attack
	cout << "You are now Knight Timmy, a ferocious Warrior." << endl;
	cout << "A Mage named Wizard Gandolfo appears and is ready to battle!" << endl;
	cout << endl;
	//players with overwritten name, health, armor with the class it belongs to
	shared_ptr<Warrior> Knight_Timmy = make_shared<Warrior>("Knight Timmy", 20, 5);
	shared_ptr<Mage> Wizard_Gandolfo = make_shared<Mage>("Wizard Gandolfo", 15, 2);
	shared_ptr<Rogue> Assassin_Jim = make_shared<Rogue>("Assassin Jim", 10, 3);

	Knight_Timmy->printStats();//prints stats of the player(user)
	cout << endl;
	Wizard_Gandolfo->printStats();//prints stats of enemy 1(mage)
	cout << endl;
	while (Knight_Timmy->getHealth() > 0)
	{
		do//do-while runs code as long as enemy player is above 0
		{
			cout << "You rolled one dice (1-20): Initiative score of " << Knight_Timmy->getInitRoll();//gets a value between 1-20
			cout << " + a speed modifier of " << Knight_Timmy->getInitiativeModifier();//gets modifier
			cout << " for a total of " << Knight_Timmy->initiativeRoll() << endl;//calculates both numbers for a total roll

			cout << "The Mage rolled one dice (1-20): Initiative score of " << Wizard_Gandolfo->initiativeRoll();
			cout << " and has no bonus speed modifier" << endl;//rolls 1-20 but has no modifier so the roll is final
			cout << endl;
			//if the user rolls a higher number, then it will go first and choose between attack and heal
			if (Knight_Timmy->initiativeRoll() > Wizard_Gandolfo->initiativeRoll())
			{
				Knight_Timmy->move();//user chooses from the two option
				cin >> choice;//user input
				if (choice == 1)//option to attack
				{
					cout << endl;
					cout << "You rolled one dice(1-6): Damage score of " << Knight_Timmy->getAttack();//gets a value from 1-6
					cout << " + a strength modifier of " << Knight_Timmy->getAttackModifer() << " for a total of ";//gets modifier and calculates total
					cout << Knight_Timmy->makeAttack();//user atttacks the mage for the total attack damage
					cout << endl;
					Wizard_Gandolfo->receiveDamage(Knight_Timmy->makeAttack());//the mage receives the damage from the player
					cout << "Wizard Gandolfo's Move:" << endl;
					cout << "Wizard Gandolfo rolled one dice(1-4): Damage score of " << Wizard_Gandolfo->getAttack();//gets a values from 1-4
					cout << " + an intellect modifier of " << Wizard_Gandolfo->getAttackModifier() << " for a total of ";//gets modifier and calculates total
					cout << Wizard_Gandolfo->makeAttack();//mage attacks the user for the total damage dealt
					cout << endl;
					Knight_Timmy->receiveDamage(Wizard_Gandolfo->makeAttack());//user receives the damage from the mage
					cout << endl << endl;
				}
				else if (choice == 2)//option to heal
				{
					cout << endl;
					cout << "You heal yourself for " << Knight_Timmy->getHeal() << " hit points!" << endl;//user heals for 2-10 values
					cout << "Total HP now at: " << Knight_Timmy->getNewHealth() << endl << endl;//calculates new health from heal and current health
				}
			}//if the mage rolls a higher number than the user, then the mage moves first and attacks
			else if (Knight_Timmy->initiativeRoll() < Wizard_Gandolfo->initiativeRoll())
			{
				cout << endl;
				cout << "Wizard Gandolfo's Move:" << endl;
				cout << "Wizard Gandolfo rolled one dice(1-4): Damage score of " << Wizard_Gandolfo->getAttack();//gets value from 1-4
				cout << " + an intellect modifier of " << Wizard_Gandolfo->getAttackModifier() << " for a total of ";//gets modifier and calculates total
				cout << Wizard_Gandolfo->makeAttack();//makes attack for the calculated damage
				cout << endl;
				Knight_Timmy->receiveDamage(Wizard_Gandolfo->makeAttack());//user receives the damage from the mage's attack
				cout << endl;
				Knight_Timmy->move();//player chooses it option of heal or attack
				cin >> choice;
				if (choice == 1)//player attacks
				{
					cout << "You rolled one dice(1-6): Damage score of " << Knight_Timmy->getAttack();//gets value from 1-6
					cout << " + a strength modifier of " << Knight_Timmy->getAttackModifer() << " for a total of ";//gets modifier and calculates total
					cout << Knight_Timmy->makeAttack();//player attacks the enemy for total calculated damage
					cout << endl;
					Wizard_Gandolfo->receiveDamage(Knight_Timmy->makeAttack());//mage receives damage from the user
					cout << endl << endl;
				}
				else if (choice == 2)//player heals
				{
					cout << endl;
					cout << "You heal yourself for " << Knight_Timmy->getHeal() << " hit points!" << endl;//user heals for 2-10 values
					cout << "Total HP now at: " << Knight_Timmy->getNewHealth() << endl << endl;//calculates new health from heal and current health
				}
			}//if the rolls are equal to each other then they roll again
			else if (Knight_Timmy->initiativeRoll() == Wizard_Gandolfo->initiativeRoll())
			{
				cout << "Rolling again..." << endl;
				cout << "You rolled one dice (1-20): Initiative score of " << Knight_Timmy->getInitRoll();//gets a value between 1-20
				cout << " + a speed modifier of " << Knight_Timmy->getInitiativeModifier();//gets modifier
				cout << " for a total of " << Knight_Timmy->initiativeRoll() << endl;//calculates both numbers for a total roll

				cout << "The Mage rolled one dice (1-20): Initiative score of " << Wizard_Gandolfo->initiativeRoll();
				cout << " and has no bonus speed modifier" << endl;//rolls 1-20 but has no modifier so the roll is final
				cout << endl;
			}
		} while (Wizard_Gandolfo->getHealth() > 0);//code executes as long as their health is over 0

		if (Wizard_Gandolfo->getHealth() < 0)//when mage reaches below 0 health, the fight is over and it will fight a new enemy
		{
			Knight_Timmy = make_shared<Warrior>("Knight Timmy", 20, 5);
			cout << "The Mage has been slain!" << endl << endl;
			cout << "A magical fairy visits ou, health has been reset to 20!" << endl;
			cout << "A Rogue named Assassin Jim appears and is ready to battle!" << endl << endl;
			Knight_Timmy->printStats();//prints reset stats of the user
			cout << endl;
			Assassin_Jim->printStats();//prints enemy 2 stats(rogue)
			cout << endl;
		}

		do
		{
			cout << "You rolled one dice (1-20): Initiative score of " << Knight_Timmy->getInitRoll();//gets a value from 1-20
			cout << " + a speed modifier of " << Knight_Timmy->getInitiativeModifier();//gets modifier
			cout << " for a total of " << Knight_Timmy->initiativeRoll() << endl;//calculates both numbers for a total roll

			cout << "The Rogue rolled one dice (1-20): Initiative score of " << Assassin_Jim->getInitRoll();//gets a value from 1-20
			cout << " + a speed modifier of " << Assassin_Jim->getInitiativeModifier();//gets modifier
			cout << " for a total of " << Assassin_Jim->initiativeRoll() << endl;//calculates both numbers for a total roll
			//if user rolls a greater number than the rogue, then it chooses between heal and attack
			if (Knight_Timmy->initiativeRoll() > Assassin_Jim->initiativeRoll())
			{
				Knight_Timmy->move();//user chooses from heal or attack
				cin >> choice;
				if (choice == 1)//option to attack
				{
					cout << endl;
					cout << "You rolled one dice(1-6): Damage score of " << Knight_Timmy->getAttack();//gets value from 1-6
					cout << " + a strength modifier of " << Knight_Timmy->getAttackModifer() << " for a total of ";//gets modifier and calculates total
					cout << Assassin_Jim->makeAttack() << endl;//rogue makes attack for total damage done
					Assassin_Jim->getDodge();//50% chance for rogue to dodge the attack
					if (Assassin_Jim->getDodge() == 1)//50% to dodge
					{
						cout << endl << "Assassin Jim dodged the attack!" << endl;
					}
					else if (Assassin_Jim->getDodge() == 2)//50% to be attacked
					{
						cout << endl;
						Assassin_Jim->receiveDamage(Knight_Timmy->makeAttack());//rogue receives damage 
						cout << "Assassin Jim's Move:" << endl;
						cout << "Assassin Jim rolled two dice(1-4): Damage score of " << Assassin_Jim->getAttack();//gets values from 2-8 damage
						cout << " + an agility modifier of " << Assassin_Jim->getAttackModifier() << " for a total of ";//gets modifier value
						cout << Assassin_Jim->makeAttack();//calculates total for its attack
						cout << endl;
						Knight_Timmy->receiveDamage(Assassin_Jim->makeAttack());//user receives damage from the rogue
						cout << endl << endl;
					}
				}
				else if (choice == 2)//option to heal
				{
					cout << endl;
					cout << "You heal yourself for " << Knight_Timmy->getHeal() << " hit points!" << endl;//gets heal value from 2-10
					cout << "Total HP now at: " << Knight_Timmy->getNewHealth() << endl << endl;//adds generated health to current health
				}
			}//if rogue rolls a higher number than user, then it attacks first
			else if (Knight_Timmy->initiativeRoll() < Assassin_Jim->initiativeRoll())
			{
				cout << endl;
				cout << "Assassin Jim's Move:" << endl;
				cout << "Assassin Jim rolled two dice(1-4): Damage score of " << Wizard_Gandolfo->getAttack();//attacks from 2-8
				cout << " + an agility modifier of " << Wizard_Gandolfo->getAttackModifier() << " for a total of ";//gets modifier
				cout << Wizard_Gandolfo->makeAttack();//calculates total and attacks user for total damage generated
				cout << endl;
				Knight_Timmy->receiveDamage(Assassin_Jim->makeAttack());//user receives the damage from rogue
				cout << endl;
				Knight_Timmy->move();//user chooses from heal or attack
				cin >> choice;
				if (choice == 1)//option to attack
				{
					cout << "You rolled one dice(1-6): Damage score of " << Knight_Timmy->getAttack();//attacks from 1-6
					cout << " + a strength modifier of " << Knight_Timmy->getAttackModifer() << " for a total of ";//gets modifier
					cout << Assassin_Jim->makeAttack() << endl;//calculates and attacks for total damage generated
					Assassin_Jim->getDodge();//rogue has 50% chance to Dodge attack from user
					if (Assassin_Jim->getDodge() == 1)//50% to Dodge 
					{
						cout << endl << "Assassin Jim Dodged the attack!" << endl;
					}
					else if (Assassin_Jim->getDodge() == 2)//50% chance to be attacked
					{
						cout << endl;
						Assassin_Jim->receiveDamage(Knight_Timmy->makeAttack());//receives damage from attack value generated
						cout << "Assassin Jim's Move:" << endl;
						cout << "Assassin Jim rolled two dice(1-4): Damage score of " << Assassin_Jim->getAttack();//gets values from 2-8
						cout << " + an agility modifier of " << Assassin_Jim->getAttackModifier() << " for a total of ";//gets modifier
						cout << Assassin_Jim->makeAttack();//calculates total attack to give to user
						cout << endl;
						Knight_Timmy->receiveDamage(Assassin_Jim->makeAttack());//user receives damage from rogue
						cout << endl << endl;
					}
				}
				else if (choice == 2)
				{
					cout << endl;
					cout << "You heal yourself for " << Knight_Timmy->getHeal() << " hit points!" << endl;//gets heal values from 2-10
					cout << "Total HP now at: " << Knight_Timmy->getNewHealth() << endl << endl;//adds heal generated to current health
				}
			}
			else if (Knight_Timmy->initiativeRoll() == Assassin_Jim->initiativeRoll())
			{
				cout << "You rolled one dice (1-20): Initiative score of " << Knight_Timmy->getInitRoll();//gets a value from 1-20
				cout << " + a speed modifier of " << Knight_Timmy->getInitiativeModifier();//gets modifier
				cout << " for a total of " << Knight_Timmy->initiativeRoll() << endl;//calculates both numbers for a total roll

				cout << "The Rogue rolled one dice (1-20): Initiative score of " << Assassin_Jim->getInitRoll();//gets a value from 1-20
				cout << " + a speed modifier of " << Assassin_Jim->getInitiativeModifier();//gets modifier
				cout << " for a total of " << Assassin_Jim->initiativeRoll() << endl;//calculates both numbers for a total roll
			}
		} while (Assassin_Jim->getHealth() > 0);//executes code as long as rogue is still alive
		{
			if (Assassin_Jim->getHealth() < 0)//if rogue dies then the player has won the game
			{
				cout << "The Rogue has been slain!" << endl;
				cout << "You won the video game" << endl;
			}
		}//entire code will continue to execute as long as the player is above 0 health
		if (Knight_Timmy->getHealth() < 0)
		{
			cout << "You died..." << endl;//once the user reaches under 0, the game is over
		}
	}

	system("pause>nul");
	return 0;
}
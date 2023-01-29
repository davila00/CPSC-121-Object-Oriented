/*
Daniel Avila April 15th, 2020 Section 19
Lab 10: Smart Pointers
Description: To use smart pointers to match dice and use its functions
Description: to manage the object and destroy the object
*/
#include "Dice.h"//to include the class

void checkPtrs(shared_ptr<Dice>& p1, shared_ptr<Dice>& p2);//prototype
void ptrRef(shared_ptr<Dice>& p1, shared_ptr<Dice>& p2);//prototype

int main()
{
	int diceReroll;

	cout << "===Creating Shared Pointer #1 to manage the object===" << endl;
	shared_ptr<Dice> p1(new Dice());//creating first smart pointer
	p1->displayDice();//displays the Dice's firsts values
	p1->diceMatch();//determines how many dices match

	cout << "===Now creating Shared Pointer #2 to manage the same object===" << endl;
	shared_ptr<Dice> p2 = p1;//creates second smart pointer and sets it equal to the first
	cout << "Pick a dice to reroll" << endl;
	cin >> diceReroll;//dice option to change
	p2->reRoll(diceReroll);//dice to reroll in the class
	p2->displayDice();//displays the new value of chosen dice along with the other 2
	p2->diceMatch();//determines if any dice match

	cout << "==Checking if pointers are being utilized==" << endl;
	checkPtrs(p1, p2);//if the pointer is pointing to any objects
	ptrRef(p1, p2);//how many times the pointers have been referenced

	cout << "===Releasing Pointer #1===" << endl;
	p1.reset();//reset the number of references the pointer has 
	cout << "==Checking if pointers are being utilized==" << endl;
	checkPtrs(p1, p2);//if the pointer is pointing to any objects
	ptrRef(p1, p2);//how many times the pointers have been referenced

	cout << "===Releasing Pointer #2===" << endl;
	p2.reset();//resets the second smart pointer's pointing of an object
	cout << "==Checking if pointers are being utilized==" << endl;
	checkPtrs(p1, p2);//if the pointer is pointing to any objects
	ptrRef(p1, p2);//how many times the pointers have been referenced

	system("pause>nul");
	return 0;
}
void checkPtrs(shared_ptr<Dice>& p1, shared_ptr<Dice>& p2)//passed by reference
{//function used to check if the pointers are pointing to an object
	if (p1)//first pointer
		cout << "Ptr 1 currently points to an object" << endl;
	else
		cout << "Ptr 1 currently points to no object" << endl;
	if (p2)//second pointer
		cout << "Ptr 2 currently points to an object" << endl;
	else
		cout << "Ptr 2 currently points to no object" << endl;
}
void ptrRef(shared_ptr<Dice>& p1, shared_ptr<Dice>& p2)//passed by reference
{//used to check how many references each pointer has using use_count()
	cout << endl;
	cout << "Ptr 1's # of references in shared grouping: " << p1.use_count() << endl;//number of times it is referenced
	cout << "Ptr 2's # of references in shared grouping: " << p2.use_count() << endl;
	cout << endl;
}
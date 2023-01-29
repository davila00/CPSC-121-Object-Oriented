/*
Daniel Avila	February 19th 2020	Section 19
Lab 4: Classes
Description: In this lab, we implement a Class and using it to code functions within the scope of the class
*/
#include <iostream>
#include <time.h>
#include <string>
using namespace std;

//This class will act as a head of multiple functions so that the rest of the functions are sub-calls of the class
class Pet
{
	private://The class' variables that only correspond to the class' purpose
		string name;//For the pet's name
		int age=0;//For the pet's age
		int hunger=0;//For the pet's hunger
		int happiness=0;//For the pet's happiness
	public://Allows all the functions to be called in the main with the class syntax
		Pet()//This is the default construtor
		{
			hunger = rand() % 5 + 1;//number for hunger
			happiness = rand() % 5 + 1;//number for happiness
		}
		string setName()//This function is to get the pet's name
		{
			cout << "Please Enter A Name For Your Pet Orangutan: ";
			getline(cin, name);//This is used to receive the user's input
			cout << endl;
			return name;//Returns the name so that it stays with the function
		}
		void displayAttributes()//This function is for displaying the attributes
		{
			cout << "- - - - - - - - - - - - - - - - - - - - - -" << endl;
			cout << "\t--" << name << "'s stats--" << endl << endl;
			cout << name << "'s Age: " << age << endl;//Displays the age that starts at 0
			cout << name << "'s Hunger: " << hunger << endl;//Displays arandom number for it
			cout << name << "'s Happiness: " << happiness << endl;//Displays a random number for it
			cout << "- - - - - - - - - - - - - - - - - - - - - -" << endl << endl;
			age = age + 1;//Age goes up one after it is called
		}
		int getAge()//Function to reference the pet's age
		{
			return age;//Gives cuurent age
		}
		int getHunger()//Function to reference the pet's hunger
		{
			return hunger;//Gives cuurent hunger
		}
		int getHappiness()//Function to reference the pet's happiness
		{
			return happiness;//Gives cuurent happiness
		}
		void feed()//This function will have add the hunger but deplete the happiness when the first option is called 
		{
			cout << name << " dances with joy and devours pasta. (+1 Hunger)" << endl;
			hunger = hunger + 1;
		}
		void play()//This function will have deplete the hunger but add the happiness when the second option is called 
		{
			cout << name << " goes for a bike ride.  (+1 Happiness)" << endl;
			happiness = happiness + 1;
		}
		void decreaseFeed()//This function is for decreasing the hunger of the pet
		{
			cout << name << " is looking hungry (-1 Hunger)" << endl << endl;
			hunger = hunger - 1;//Decreases hunger by 1
		}
		void decreasePlay()//This function is for decreasing the happiness of the pet
		{
			cout << name << " is looking like he is about to cry (-1 Happiness)" << endl << endl;
			happiness = happiness - 1;//Decreases happiness by 1
		}
		void deathByAge()//Once the pet has passed away it will call this fucntion so that it displays the attributes
		{
			displayAttributes();//Calls the function above but still within scope
			cout << name << " died of old age." << endl;
		}
		void deathByZero()//Function to keep the pet alive the attributes above zero whilst alive
		{					//If any of the attributes reach 0, it will die
			if (happiness == 0 || hunger == 0 && age != 5)//As long as the conditions are true
			{												  //it will display attributes and the pet dies
				displayAttributes();
				cout << name << " died tragically." << endl;
			}
		}
		void decrease()//To make a random attribute decrase by calling when it equals number 0 or 1
		{
			int random = rand() % 2;//Use to create a random number from 0 or 1
			if (random == 0)
				decreaseFeed();//When number is 0, it will call the hunger depletion function
			if (random == 1)
				decreasePlay();//When number is 1, it will call the happiness depletion function
		}
};
int menu(int &choice)//Displays a menu and references the choice to the class
{
	cout << "\t--Main Menu-- " << endl;
	cout << "1. Feed" << endl;
	cout << "2. Play" << endl;
	cout << "Select(1 or 2): ";
	cin >> choice; //Receives the user input and returns it
	cout << endl;
	return choice;//Output will be the user's choice
}
int main()
{
	srand(time(0));//So that a random number gets generated
	int choice;//Initialized variables
	Pet Pet;//A class defintion so that it gets from the class above
	Pet.setName();
	do
	{
		Pet.displayAttributes();//To display the menu of attributes
		menu(choice);//To display the menu of the choices to do for the user
		if (choice == 1)//This if-else-if loop is to decide whether to do this function or
		{				//the next function depending on the option of the user
			Pet.feed();//Feed inside the class is being called
			Pet.decrease();//Calls a random attribute to be decreased
			Pet.deathByZero();//Checks if the attributes are above zero, if not then the pet dies
		}
		else if (choice == 2)//When the second choice is chosen then the next function is done
		{
			Pet.play();//Play inside the class is called
			Pet.decrease();//Calls a random attribute to be decreased
			Pet.deathByZero();//Checks if the attributes are above zero, if not then the pet dies
		}
		else
		{
			cout << "Invalid Choice!Type A Valid Input!" << endl;//To make sure a valid choice is chosen
		}
	} while (Pet.getAge() < 5 && Pet.getHunger() > 0 && Pet.getHappiness() > 0);//Do-while loop is iterated as long as the age is less than 5
	if (Pet.getAge() == 5)//When the pet's age is 5 then is dies					  //and attributes are greater than 0
	{
		Pet.deathByAge();//Dead function is called
	}

	system("pause>nul");
	return 0;
}
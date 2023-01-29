/*
Daniel Avila	April 8th, 2020	Section 19
Assignment 2: Inventory Management System
Description: In this assignment using a class and 
Description: implementing an array for its objects
*/
#include "Item.h"
const int NUM_ITEMS = 4;//Number of items that are being added to inventory
int main()
{
	Item Inventory[NUM_ITEMS];//Array of 4 Objects
	double discount;//Discount used in new retail values
	char choice, discountChoice;//For the Y's and N's
	int menuChoice, menuQuantity, counter = 0;//For selecting which item to buy
												  //how many to buy, and an accumulator
	cout << "===Welcome To The Inventory Helper===" << endl;
	cout << "-Store Hours Will Begin Shortly-" << endl;//The greeting of the program
	cout << "Please Update Your Inventory..." << endl << endl;
	
	for (int x = 0; x < NUM_ITEMS; x++)
	{
		Inventory[x].addInventory(x);//Adds the items to the Inventory array
	}
	for (int x = 0; x < NUM_ITEMS; x++)
	{
		Inventory[x].displayInventory();//Displays the items from the Inventory array 
	}
	cout << endl << "Business Hours Are Now Open!" << endl << endl;
	cout << "Would You Like To Perform A Transaction?" << endl;
	cout << "(y/n)" << endl;
	cin >> choice;//Receives user's transaction choice to follow code for purchase
	cout << endl;
	if (choice == 'y')//When the user chooses 'y', it will make the user select which item,
	{				  //how many of that item and the cost for that quantity of items 
		do
		{
			cout << "===Menu===" << endl;
			cout << "Enter Which Item You Would Like To Purchase:" << endl;
			for (int x = 0; x < NUM_ITEMS; x++)
			{
				cout << (x + 1) << ". ";
				Inventory[x].displayInventory();//Displays the inventory and the number
			}									  //it is for purchase to the user
			cin >> menuChoice;//User's item number
			while (menuChoice < 1 || menuChoice > 4)//Checks to make sure the choice is
			{										    //between 1 and 4
				cout << "Invalid Option! Try Again:" << endl;
				cin >> menuChoice;//Validates the input until it's within the bounds
			}
			cout << "How Many Would You Like To Buy?" << endl;
			cin >> menuQuantity;//Amount of items being bought
			while (menuQuantity > Inventory[menuChoice - 1].getQuantity())//Checks if the amount is greater
			{//than the amount the user input for that specfic item; it validates the input until it's less than it
				cout << "Not Enough " << Inventory[menuChoice - 1].getProductName() << " In Stock ("
					<< Inventory[menuChoice - 1].getQuantity() << ") Total Stock!" << endl;
				cout << "Enter New Amount:" << endl;
				cin >> menuQuantity;//Keeps validating until it's within bounds
			}//Using [menuChoice - 1] to compensate for the user's item in the correct array index(1,2,3,4) ->(0,1,2,3)
			cout << "SOLD " << menuQuantity << " " << Inventory[menuChoice - 1].getProductName();
			cout << " for $" << (Inventory[menuChoice - 1].getRetailValue()*menuQuantity) << endl << endl;//Calculates total cost
			Inventory[menuChoice - 1].setNewQuantity(menuQuantity);//Subtracts user quantity from overal quantity

			cout << "Would You Like To Perform Another Transaction? (y/n)" << endl;
			cin >> choice;
			counter++;//Accumulator is added by one if the response is 'y' because it will reach here again to add only when it is 'y'
			cout << endl;

			if (counter == 2)//Once the user has input two 'y' then discount is applied to all the retail values and new values are displayed for them
			{
				cout << counter << " items sold!" << endl; //2 items sold
				cout << "Sale Starting!" << endl;
				cout << "Would You Like to Enter A Discount %?" << endl;
				cout << "(y/n)" << endl;
				cin >> discountChoice;
				if (discountChoice == 'y')//When the choice is 'y' then the user inputs a unique discount percentage for all costs
				{
					cout << "Enter The Custom Discount Percentage:" << endl;
					cin >> discount;//The discount amount
					for (int x = 0; x < NUM_ITEMS; x++)
					{
						Inventory[x].setDiscountedRV(discount);//Sets the discount percentage to all the retail values
					}
					for (int x = 0; x < NUM_ITEMS; x++)//Displays the new values with the discount applies
					{
						cout << "Price for ";
						cout << Inventory[x].getProductName() << " ";
						cout << "on sale for $";
						cout << Inventory[x].getRetailValue();
						cout << endl;
					}
				}
				else if (discountChoice == 'n')//If the discount choice is 'n' then nothing occurs
				{
					cout << endl;
				}
			}
		} while (choice != 'n');//Repeats as long as the answer is 'y' or when it is 'n', it ends
	}
	if (choice == 'n')//When the choice is 'n', the final display is shown
	{
		cout << "Closing Shop -- Inventory Left" << endl;
		for (int x = 0; x < NUM_ITEMS; x++)
		{
			Inventory[x].displayInventory();//Shows the remaining inventory with the discounted prices
		}
	}
	system("pause>nul");
	return 0;
}
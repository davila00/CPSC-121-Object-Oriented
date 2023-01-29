#ifndef ITEM_H
#define ITEM_H
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class Item
{
private:
	string productName;//Name
	int manufacturerID;//ID
	int quantity;//Amount
	double retailValue;//Cost
public:
	Item();//Default Constructor

	void setNewQuantity(int menuQuantity);//User Quantity - Overall Quantity
	void setDiscountedRV(double discount);//Discount to Retail Value

	string getProductName();
	int getManufacturerID();
	int getQuantity();
	double getRetailValue();
	
	void addInventory(int cnt);//Inititializes Inventory from User
	void displayInventory();//Prints Inventory by User
};

Item::Item()
{//Default values for the privates
	productName = " ";
	manufacturerID = 0;
	quantity = 0;
	retailValue = 0.0;
}
void Item::setNewQuantity(int menuQuantity)
{
	quantity = quantity - menuQuantity;//New quantity to display
}
void Item::setDiscountedRV(double discount)
{
	retailValue = retailValue - (retailValue*discount);//New cost for product
}
string Item::getProductName()
{
	return productName;
}
int Item::getManufacturerID()
{
	return manufacturerID;
}
int Item::getQuantity()
{
	return quantity;
}
double Item::getRetailValue()
{
	return retailValue;
}
void Item::addInventory(int cnt)
{
	cout << "Enter Item " << (cnt + 1) << " To Add To Inventory." << endl;
	cout << "Please Enter The Product Name:" << endl;
	getline(cin, productName);//Takes product name
	cout << "Enter Product Manufacturer's ID:" << endl;
	cin >> manufacturerID;//takes ID
	cout << "Enter The Retail Value:" << endl;
	cin >> retailValue;//takes cost
	cout << "Enter Quantity Available:" << endl;
	cin >> quantity;//takes amount
	cin.ignore();//used to forget previous input
	cout << endl;
}
void Item::displayInventory()
{
	cout << getQuantity() << " " << getProductName() << " left in stock at $";
	cout << fixed << setprecision(2) << getRetailValue() << " Item ID ";//for two places after decimal
	cout << getManufacturerID() << endl;
}
#endif // !ITEM_H
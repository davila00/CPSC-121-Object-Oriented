#include <iostream>
using namespace std;
/*
class Student
{
private:
	string name;
	double gpa;

public:
	//default constructor 
	//function with no return type/same name as class
	//empty parameters
	Student()
	{//default constructor is for making default values
	 //these are set whenever we make a student
		name = "Kimmy";
		gpa = 3.0;
		cout << "We are in the default constructor" << endl;
	}
	//setters are void and have 1 parameter of same type
	Student(string n, double g)
	{
		name = n;
		gpa = g;
		cout << "We are in the overloaded constructor" << endl;
	}
	void setName(string n)
	{
		name = n;
	}
	void setGPA(double g)
	{
		gpa = g;
	}
	//getters return a value and have no parameters
	string getName()
	{
		return name;
	}
	double getGPA()
	{
		return gpa;
	}
	void display()
	{
		cout << gpa << endl;
		cout << name << endl;
	}//obj.display("Tim")
	void display(string p)
	{

	}

};

int main()
{
	//string timmy;
	Student Jimmy;
	Jimmy.setName("Jimmy");
	Jimmy.setGPA(4.0);

	cout << Jimmy.getName() << " "
		<< Jimmy.getGPA() << endl;

	Student Timmy;
	Timmy.setName("Timmy");
	Timmy.setGPA(2.0);

	cout << Timmy.getName() << " "
		<< Timmy.getGPA() << endl;

	Student Kimmy;
	cout << Kimmy.getName() << " "
		<< Kimmy.getGPA() << endl;

	Student Limmy("Limmy", 1.5);
	cout << Limmy.getName() << " "
		<< Limmy.getGPA() << endl;


	system("pause>nul");
	return 0;
}
*/
//===============================================================================
class Item
{
	private:
		int inStock;

	public:
		Item()//default
		{
			inStock = 5;
		}
		Item(int i)//overloaded
		{
			inStock = i;
		}
		void showStock()
		{
			cout << inStock << endl;
		}
		void purchase(int quant)
		{
			inStock = inStock - quant;
		}
};

void buy(Item &current)
{
	cout << "We are in the function" << endl;
	current.showStock();
	current.purchase(1);
	current.showStock();
	cout << "We are leaving the function" << endl;
}

int main()
{
	//string name;
	//myFunc(name)
	cout << "\tOranges:" << endl;
	Item oranges;
	oranges.showStock();
	oranges.purchase(2);
	oranges.showStock();
	buy(oranges);
	oranges.showStock();
	cout << "\tApples" << endl;
	Item apples(7);
	apples.showStock();
	apples.purchase(3);
	apples.showStock();
	buy(apples);
	apples.showStock();

	system("pause>nul");
	return 0;
}
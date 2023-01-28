#include <iostream>
#include <memory>
#include <string>
using namespace std;

//Person is the base class in which all derived classes will stem from
class Person
{
private:
	string name;
public:
	Person(string n)
	{
		name = n;
	}
	void setName(string n)
	{
		name = n;
	}
	string getName()
	{
		return name;
	}
};
//A Student is a Person
class Student : public Person
{
private:
	string major;
public:
	//Init base class params with derived classes param
	Student(string m, string n) : Person(n)				//******
	{
		major = m;
	}
	void setMajor(string m)
	{
		major = m;
	}
	string getMajor()
	{
		return major;
	}
};
//Student and Teacher are different
class Teacher : public Person
{
private:
	string department;
public:
	Teacher(string d, string n) : Person(n)
	{
		department = d;
	}
	void setDepartment(string d)
	{
		department = d;
	}
	string getDepartment()
	{
		return department;
	}
};

int main()
{
	/*
	Person* rawPtr = new Person(); //1
	shared_ptr<Person> p3;//2

	//The constructor at the end of makeshared is the Person()
	shared_ptr<Person> jeff = make_shared<Person>();//3
	*/
	shared_ptr<Teacher> prof = make_shared<Teacher>("CS", "Mr. H");

	prof->setDepartment("Math");
	cout << prof->getName() << " " << prof->getDepartment() << endl;

	shared_ptr<Student> stud = make_shared<Student>("CS", "Daniel");

	cout << stud->getName() << " " << stud->getMajor() << endl;

	system("pause>nul");
	return 0;
}
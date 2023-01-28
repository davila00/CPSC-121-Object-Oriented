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
	//PURE VIRTUAL FUNCTION
	//make abstract to not make it an instance
	//must implememnt this function in the derived classes
	virtual void testAbstract() = 0;
	/*{
		cout << "Testing Abstraction" << endl;
	}*/
	virtual void printStats() = 0;
	//optional to be in derived classes
	//not a pure virtual function
	virtual void testAbstract2()
	{
		cout << "in the base" << endl;
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
	virtual void testAbstract()
	{
		cout << "Testing Abstraction Student" << endl;
	}
	virtual void printStats()
	{
		cout << major << endl;
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
	virtual void testAbstract()
	{
		cout << "Testing Abstraction Teacher" << endl;
	}
	virtual void testAbstract2()
	{
		cout << "in the student" << endl;
	}
	virtual void printStats()
	{
		cout << department << endl;
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

	prof->testAbstract2();//design decision------Student
	stud->testAbstract2();//design concept------Teacher

	//shared_ptr<Person> people = make_shared < Person("Timmy");

	system("pause>nul");
	return 0;
}
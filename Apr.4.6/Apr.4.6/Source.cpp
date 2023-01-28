#include <iostream>
#include <memory>//needed for smart pointers
#include <string>
using namespace std;

class Person
{
private:
	string name;
	int age;
public:
	Person()
	{
		name = "Timmy";
		age = 5;
	}
	void print()
	{
		cout << name << " " << age << endl;
	}
};
//Smart pointer is a wrapper for a raw pointer
//It is basically a class that contains a raw pointer as a data
//member and reference count.
//Ref count is keeping track of how many places we are using
//this pointer. If the ref count hits 0 (not in use), the 
//deconstructor is called
int main()
{
	int num = 5;

	//int *ptr = &num;    1 line to 2 next lines
	int* ptr = nullptr;
	ptr = &num;

	cout << *ptr << endl;
	//delete ptr;
	//node* nptr = new node;

	//smart pointer
	//class name, template of data type, variable name
	shared_ptr	<int> sptr(new int(5));

	//shared_ptr<int> sp;
	//sp = new int(5);
	//ERROR smart pointers should be init on 1 line

	//int *ptr = new node;
	cout << *sptr << endl;
	*sptr = 45;
	cout << *sptr << endl;

	///////#####NEW NOTES HERE##########
	shared_ptr<Person> p1(new Person());
	//alt ways of making a shared ptr
	//convert raw ptr to smart ptr
	Person* rawPtr = new Person();
	shared_ptr<Person> p2(rawPtr);
	///////#####NEW NOTES HERE
	p1->print();//member fucntion
	//-> is short for *(ptr)
	
	cout << "# of references in the ref-count: " << p1.use_count() << endl;//1

	//now p1 is used to init another shared pointer
	shared_ptr<Person> p2 = p1;
	cout << "# of references in the ref-count: " << p1.use_count() << endl;//2
	//we can see both ref counts are 2, both sharing ownership over the person
	//object and shared grouping; 2ptrs - 1obj
	cout << "# of references in the ref-count: " << p2.use_count() << endl;//2

	p2.reset();//releases ownership of the object						   p2 //0
	cout << "# of references in the ref-count: " << p1.use_count() << endl;//1
	cout << "# of references in the ref-count: " << p2.use_count() << endl;//0

	p1.get();//returns the raw pointer
	

	system("pause>nul");
	return 0;
}
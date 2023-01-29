#include <iostream>
#include <string>
using namespace std;

void message()
{
	//recursive means it calls itself
	cout << "This is a recursive function" << endl;
	message();
}

int frequency(char ch, string input, int position)
{
	//		frequency('b', "abcb", 0) <- call in main
	if (position == input.length())
	{
		return 0;//don't add any more to total
	}
	if (input[position] == ch)
	{
		return 1 + frequency(ch, input, position + 1);
	}
	else
	{
		return 0 + frequency(ch, input, position + 1);
	}
}

//factorial 5! = 5 * 4 * 3 * 2 * 1
int factorial(int num)
{
	//basecase
	if (num == 0)
	{
		return 1;
	}
	else
	{
		//5 * (4) * (3) * (2) * (1) -> (0) which is (1)
		return num * factorial((num - 1));
	}
}

//fibonacci sequence
int fib(int num)
{
	if (num <= 0)//base case 0
	{
		return 0;
	}
	else if (num == 1)
	{
		return 1;
	}
	else
	{
		return fib((num - 2)) + fib((num - 1));
	}
}
//OPERATOR OVERLOADING
int main()
{
	//cout << frequency('a', "ababfdadh", 0);
	//cout << factorial(5);
	cout << fib(5);

	system("pause>nul");
	return 0;
}
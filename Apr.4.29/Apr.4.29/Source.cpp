#include <iostream>
#include <string>
using namespace std;

void message()
{
	//recursive means it calls itself
	cout << "This is a recursive function" << endl;
	message();
}
//we will make a function that finds out how mnay times
//a letter appears in a word
//a char appears in a string

int frequency(char ch, string input, int position)
{
	//0123
	//abcb
	//b
	//4
	//base case to exit recursive function
	//base case should be the first thing we check
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
		return 0 +frequency(ch, input, position + 1);
	}
}
//freq 0                              return 0
	//freq 1                         return 1
		//freq 2                   return 1
			//freq 3...           return 0
				//freq 4        return 0
					//freq 5  return 0

//freq 0                       return 1 + 0 + 0 + 0 + 0
	//freq 1                  return 0 + 0 + 0 + 0
		//freq 2            return 0 + 0 + 0
			//freq 3...    return 0 + 0
				//freq 4 return 0

int main()
{
	


	system("pause>nul");
	return 0;
}
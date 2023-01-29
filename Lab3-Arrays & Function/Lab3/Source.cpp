/*
Daniel Avila	February 12th 2020	Section 19
Lab 3: Functions and Arrays
Description: In this lab, we implement arrays and functions into one program that makes a user-created quiz
*/
#include <iostream>
#include <string>
using namespace std;

void addQuestion(string array[5][2], int x);//This function is used to enter the user's question if they choose to do so
void displayQuiz(string array[5][2]);//This function is used to display the user made quiz
char menu(char response);//This displays the menu that is the same as long as they keep adding questions
int questionCounter(int &questionNum);//To count the number of questions

int main()
{
	string array[5][2];
	int numOfQuestions = 0;
	int x =0;
	string q, a;//Varaibles to use for the void functions
	char response{};//To use the user's choice in the menu in the main
	cout << "Welcome to QuizMaker" << endl;
	cout << "Make a quiz up to 5 questions long!" << endl << endl;

	while (numOfQuestions < 5)//As long as there is 5 or less questions made
	{
		response = menu(response);//This calls the menu function and updates the choice of the user
		//This is for validating and making sure the user enters either 'a' or 'b'
		if (response == 'a' || response == 'A')
		{//If the user chooses 'a' then it will do the function where it adds a question and answer
			addQuestion(array, x);
			questionCounter(numOfQuestions);
		}
		else if (response == 'b' || response == 'B')
		{//If the user enters 'b' then it will stop adding questions and display their quiz in order
			displayQuiz(array);
			break;
		}
		else
		{//To make sure they enter either of the two options into the program
			cout << "Invalid Option" << endl << endl;
		}
	}
	if (numOfQuestions == 5)//Once it reaches 5, it ends
	{
		displayQuiz(array);//displays the quiz
	}

	system("pause>nul");
	return 0;
}//This function is used to get the user's questions and answer and then put them into an array index respectively
void addQuestion(string array[5][2], int x)
{
	string question, answer;
	cout << "Please Enter Your Question: ";
	getline(cin, question);//Used to get the full line from the user
	array[x][0] = question;//for the answers column
	cout << endl;
	cout << "Please Enter The Answer: ";
	getline(cin, answer);//Used to get the answer from the user with the question
	array[x][1] = answer;//for the columns part
	
}//This displays the user made quiz from the array index and fills in the empty ones with default value
void displayQuiz(string array[5][2])
{
	cout << "Thank you for using QuizMaker!" << endl << endl;
	cout << "\tCreated Quiz:" << endl << endl;
	//This will display the user made question and answers from each array index
	for (int rows = 0; rows < 5; rows++)//For loop so that the input is inputted into an array
	{
		cout << "Q" << rows + 1 << ":" << "Blank Question" << endl;//for rows
		cout << "A:" << array[rows][1] << "Blank Answer" << endl << endl;//for cols
	}
	cout << endl << endl;
}//This function is used to display the iterating menu and use their response to guide the program
char menu(char response)
{
	cout << "What would you like to do?" << endl;
	cout << "a. Create a Question" << endl;
	cout << "b. Quit" << endl << endl;
	cout << "Choice: ";
	cin >> response;//Receives the user input
	cin.ignore();
	cout << endl;
	//The function returns the input so that it's blank every time it calls the function
	return response;
}
int questionCounter(int &questionNum)//Function to count the number of questions
{
	questionNum = questionNum + 1;//Add the questions + 1 when it is created
	cout << "Question " << questionNum << " added!" << endl << endl;
	
	return questionNum;//Returns the number of question
}
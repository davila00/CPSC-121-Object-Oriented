/*
Daniel Avila	March 4th, 2019	Section 19
Assignment 1: Tic-Tac-Toe
Description: In this assignment 2D-arrays and functions are used to recreate TicTacToe
*/
#include <iostream>
#include <string>
using namespace std;

void initGame(char [3][3]);//Function to initialize the "empty" board
void printGame(char[3][3]);//Function to print the grid the player sees to make their move
void playerX(int [3][3], char [3][3]);//Function to pass the choice of Player X into the game's grid
void playerO(int [3][3], char [3][3]);//Function for Player O to pass into the game's grid
char checkWin(char[3][3]);//Function to check what state the game is at after every turn
int rowCol(int &, int &);//Function that repeats similar lines of code in both players' function and if it's legal in order to repeat


int main()
{
	char arr1[3][3];//For the X or O
	int arr2[3][3];//For the position in which they are choosing their spot
	char winner = ' ';//Blank return value for the winner
	
	cout << "Welcome to Tic-Tac-Toe" << endl;
	cout << "=======================" << endl << endl;
	initGame(arr1);//Calls the "blank board"
	printGame(arr1);//Fills and Shows the board
	for (int x = 0; x < 999; x++)//Keeps iterating through until there's a winner
	{
		playerX(arr2, arr1);//Does it once for the player's turn and goes ne
		checkWin(arr1);//Checks win for X
		winner = checkWin(arr1);//Assigns the return value into a new variable
		playerO(arr2, arr1);//Player O takes its turn
		checkWin(arr1);//Checks winner for O
		winner = checkWin(arr1);//Assign the return value to new variable for winner
		if (winner == ' ')//Checks variable for the return type and announces winner
		{
			continue;//Conitinues through codes
		}
		if (winner == 'C')//Cat's game return value
		{
			break;//Stops code
		}
		if (winner == 'X' || winner == 'O')//Checks for X or O winner
		{
			break;//Stops code
		}
		
	}
	if (winner == 'X' || winner == 'O')//What to output when there is a winner
	{
		cout << endl;
		cout << "Player ";
		if (winner == 'X')//For X winner
		{
			cout << 1 << " (X)";
		}
		else if (winner == 'O')//For O winner
		{
			cout << 2 << " (O)";
		}
		cout << " wins!" << endl;
		printGame(arr1);//Prints the final board
	}
	else if (winner == 'C')//For Cat's Game
	{
		cout << endl;
		cout << "Cat's Game" << endl;
		printGame(arr1);//Prints full board
	}
	
	system("pause>nul");
	return 0;
}

void initGame(char board[3][3])//To initiliaze 
{
	//This is a for loop, starts a counter at 0, the second part checks if the int row is less
	for (int row = 0; row < 3; row++) //than the constant ROWS (3)and the last 
	{										   //part increases row by 1.
		for (int col = 0; col < 3; col++)// Same thing here, except it's for the column.
		{ 
			board[row][col] = '8'; // This will set the element to a space. 
		}
	}
}
void printGame(char board[3][3])//To print the board...prints a fancy one
{
	cout << "   0" << "   1" << "   2"                                                      << endl;
	cout << "0  " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "  " << endl;
	cout << "  ---" <<                "|" << "---" <<         "|" <<                "--- " << endl;
	cout << "1  " << board[1][0] <<  " | " << board[1][1] << " | " << board[1][2] << "  " << endl;
	cout << "  ---" <<                "|" << "---" <<         "|" <<                "--- " << endl;
	cout << "2  " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "  " << endl;
	cout << "  ---" <<                "|" << "---" <<         "|" <<                "--- " << endl;
}
void playerX(int choice[3][3], char board[3][3])//For player X's turn
{
	cout << endl;
	int x = 0, y = 0;//Initializes default values
	cout << "Player 1's turn. Use 'X'." << endl << endl;
	printGame(board);//Prints board for X
	cout << endl;
	rowCol(x, y);//Uses the repeated code for rows and cols input
	if (board[x][y] == '+')//if the specified element is empty,
	{
		board[x][y] = 'X';//assign the player's symbol. (eg; X or O.)
	}
	else
	{
		cout << "Illegal Move by X!" << endl;//else, notify the spot is taken. 
		rowCol(x, y);//Inputs new choice to array
		board[3][3] = choice[x][y];
	}
	board[3][3] = choice[x][y];//Inputs choice to board
}
void playerO(int choice[3][3], char board[3][3])//For player O's turn
{
	cout << endl;
	int x = 0, y = 0;//Initializes default values
	cout << "Player 2's turn. Use 'O'." << endl << endl;
	printGame(board);//Prints board for X
	cout << endl;
	rowCol(x, y);//Uses the repeated code for rows and cols input
	if (board[x][y] == '+')//if the specified element is empty,
	{
		board[x][y] = 'O';//assign the player's symbol. (eg; X or O.)
	}
	else
	{
		cout << "Illegal Move by O!" << endl;//else, notify the spot is taken.
		rowCol(x,y);//Inputs new choice to array
		board[3][3] = choice[x][y];
	}
	board[3][3] = choice[x][y];//Inputs choice to board
}
int rowCol(int &x, int &y)//For the rows and column inputs
{
	cout << "Which Row would you like?" << endl;
	cin >> x;//Passes by reference and updates every time the function is called
	if (x < 0 || x > 2)//makes sure it's in bounds
	{
		cout << "Out of bounds!! Enter a row (0-2)." << endl;
		cin >> x;
	}
	cout << "Which Column would you like?" << endl;
	cin >> y; //Passes by reference and updates every time the function is called
	if (y < 0 || y > 2)//makes sure it's in bounds
	{
		cout << "Out of bounds!! Enter a column (0-2.)." << endl;
		cin >> y;
	}
	return x, y;//Returns x and y for the parameters
}
//========================================================================
//Checks for Completed Game
char checkWin(char board[3][3])
{	//Check for a win on diagonals
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2])
	{
		return board[0][0];
	}
	else if (board[2][0] == board[1][1] && board[2][0] == board[0][2])
	{
		return board[2][0];
	}
	//Check for a win in rows
	for (int rows = 0; rows < 3; rows++)
	{
		if (board[rows][0] == board[rows][1] && board[rows][0] == board[rows][2])
		{
			return board[rows][0];
		}
	}
	//Check for a win in columns
	for (int cols = 0; cols < 3; cols++)
	{
		if (board[0][cols] == board[1][cols] && board[0][cols] == board[2][cols])
		{
			return board[0][cols];
		}
	}
	//Check for Cats Game
	for (int rows = 0; rows < 3; rows++)
	{
		for (int cols = 0; cols < 3; cols++)
		{
			if (board[rows][cols] != '+' && (board[rows][cols] == 'X' && board[rows][cols] == 'O'))
			{
				return 'C';
			}
		}
	}
	return ' ';
}
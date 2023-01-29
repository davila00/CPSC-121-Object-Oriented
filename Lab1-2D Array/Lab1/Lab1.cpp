/*
Daniel Avila	January 29th 2020	Section 19
Lab 1: Arrays
Description: In this lab, we use the concept of 2-D arrays to make a gradebook that can be tuned
*/
#include <iostream>
using namespace std;

int main()
{
	const int NUM_STUDENTS = 3, NUM_SCORES = 3; //Number of students and number of exams that each student has
	int row, col, x, y;
	double sum, newScore, average, array[NUM_STUDENTS][NUM_SCORES];			   //The accumulator in sum; The new score that is fixed in newScore; 
															   //Calculates: sum / 3 in average;Array made of 3x3 elements in exams and students
	char response;											   //The user input needed in from updating a score in form of a character

	//This nested for loop is "drawing" out the table and attaining user input for the student's exam score and putting it into its cell
		for (row = 0; row < NUM_STUDENTS; row++)	   //This creates the row as only one student with each of their 3 exams
		{
			for (col = 0; col < NUM_SCORES; col++)	   //This creates the columns as only one exam with each of their 3 students
			{
				cout << "Enter Student " << (row + 1) << "'s Exam " << (col + 1) << " score.\n";
				cin >> array[row][col];						   //Each cell receives input from the user and inserts it into it as R[]C[]
			}
		}
		cout << endl;
	//This nested for loop creates the block of output where each student has their 3 exams displayed together
		for (row = 0; row < NUM_STUDENTS; row++)	   //This creates the student block with 3 lines each
		{
			for (col = 0; col < NUM_SCORES; col++)	   //This puts the exam scores for each student at the end of the line
			{
				cout << "Student " << (row + 1) << "'s Exam " << (col + 1) << " score is: " << array[row][col] << endl;
			}
			cout << endl;
		}
	//This nested for loop displays the average score for each student 
		for (row = 0; row < NUM_STUDENTS; row++)
		{
			sum = 0;										   //The accumulator starts at 0 because of the average calculation
			for (col = 0; col < NUM_SCORES; col++)
			{
				sum += array[row][col];					   //Each cell is added together by the row because it's added by student's exams
			}
			average = sum / NUM_SCORES;				   //The calculation of all 3 exams added and then divided by 3(the number of exams each student has)
			cout << "The average score for Student " << (row + 1) << " is " << average << endl;
		}
		cout << endl;
	//This block of code is a while loop that asks the user if they need to update a score for a student's exam
		cout << "Would you like to update an exam score Y/N? \n";
		cin >> response;
		cout << endl;
		while ((response != 'y' && response != 'Y') || (response != 'n' && response != 'N'))
		{
			if (response == 'y' || response == 'Y')		   //This section of code is done for data validation to ensure the user input a legal option 
			{
				cout << "Enter a student's number (1-3): \n";//Which student to update in terms of rows
				cin >> x;
				if (x < 1 || x > 3)							   //This nested if statement makes data validation for the student option to update 
				{
					cout << "Please enter a valid student option!\n";
					cin >> x;
				}
				cout << "Enter an exam number (1-3): \n";   //Which exam to update in terms of columns
				cin >> y;
				if (y < 1 || y > 3)							   //This nested if statement makes data validation for the exam option to update 
				{
					cout << "Please enter a valid exam option!\n";
					cin >> y;
				}
				cout << "Enter a new score for Student " << x << "'s Exam " << y << ": \n";
				cin >> newScore;							   //The new score is inputted into this variable for better tracking
				cout << "Student " << x << "'s Exam " << y << " score is: " << newScore << endl << endl;
				array[x][y] = newScore;					   //Ensuring that the new score is inputted into the array by setting equal to the array cell the user chose
				cout << "Would you like to change the score for another student Y/N?\n";
				cin >> response;
				cout << endl;
			}
			else if (response == 'n' || response == 'N')	   //Using an else-if statement to occupy the other option of the question which is the 'no'
			{
				for (row = 0; row < NUM_STUDENTS; row++)
				{
					sum = 0;
					for (col = 0; col < NUM_SCORES; col++)
					{
						sum += array[row][col];			   //With the updated score, it calculates a new average the same as the loop before
					}										   //In the same block section of code it will display the new average of each student
					average = sum / NUM_SCORES;
					cout << "The new average score for Student " << (row + 1) << " is " << average << endl;
				}
				cout << endl;
				cout << "You have stopped updating\n\n";
				break;
			}
			else											   //Used with data validation, if an illegal input is inputted, it tells the user to fix it
				cout << "Invalid response! Please re-enter a valid response option. \n";
		}

	system("pause>nul");
	return 0;
}
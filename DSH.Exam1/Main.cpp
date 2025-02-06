// Dustin Henderson
// Exam 1

using namespace std;

#include <iostream>
#include <conio.h>

// function prototypes
int GetFirstNumber();
int GetSecondNumber();
int GetOperation();
void DisplayAddition(int firstNum, int secondNum);
void DisplaySubtration(int firstNum, int secondNum);


int main()
{
	int firstNum = GetFirstNumber();
	int secondNum = GetSecondNumber();
	char operation = GetOperation();
	if (operation == 1)
	{
		DisplayAddition(firstNum, secondNum);
	}
	else if (operation == 2)
	{
		DisplaySubtration(firstNum, secondNum);
	}

	(void)_getch();
	return 0;


}

// functions
int GetFirstNumber()
{
	int firstNum = 0;
	cout << "Enter the first number: ";
	cin >> firstNum;
	return firstNum;
}

int GetSecondNumber()
{
	int secondNum = 0;
	cout << "Enter the second number: ";
	cin >> secondNum;
	return secondNum;
}

void DisplayAddition(int firstNum, int secondNum)
{
	int answer = firstNum + secondNum;
	cout << "\n" << "The result of " << firstNum << " + " << secondNum << " is " << answer;
}

void DisplaySubtration(int firstNum, int secondNum)
{
	int answer = firstNum - secondNum;
	cout << "\n" << "The result of " << firstNum << " - " << secondNum << " is " << answer;
}

int GetOperation()
{
	bool mistake;
	do {
		int operation;
		cout << "Choose an operation (1 for addition, 2 for subtraction): ";
		cin >> operation;
		if (operation == 1)
		{
			bool mistake = false;
			return operation;
		}
		else if (operation == 2)
		{
			bool mistake = false;
			return operation;
		}
		else
		{

		}

	} while (mistake = true);


}
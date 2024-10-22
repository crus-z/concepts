#include <iostream>
using namespace std;

int main()
{
	double num1;
	double num2;
	int choice;


	int value1;
	int value2;




	cout << "Enter the operation you want to do:" << endl;
	cout << "[1] Addition" << endl;
	cout << "[2] Subtraction" << endl;
	cout << "[3] Multiplication" << endl;
	cout << "[4] Division" << endl;
	cin >> choice;

	if (choice == 1)
	{
		cout << "Choose the first number you want to add:" << endl;
		cin >> num1;
		cout << "Choose the second number you want to add:" << endl;
		cin >> num2;

		double sumResult = num1 + num2;

		cout << "The result of your sum is " << sumResult << "." << endl;
	}
	else if (choice == 2)
	{
		cout << "Choose the number you want to be subtracted:" << endl;
		cin >> num1;
		cout << "Choose the number you want to subtract with:" << endl;
		cin >> num2;

		double subtractionResult = num1 - num2;
		cout << "The result of your subtraction is " << subtractionResult << "." << endl;
	}
	else if (choice == 3)
	{
		cout << "Choose the first number you want to multiplicate:" << endl;
		cin >> num1;
		cout << "Choose the second number you want to multiplicate:" << endl;
		cin >> num2;
		
		double multiplicationResult = num1 * num2;
		cout << "The result of your multiplication is " << multiplicationResult << "." << endl;
	}

	else if (choice == 4)
	{
		cout << "Choose the first number you want to be the numerator:" << endl;
		cin >> num1;
		cout << "Choose the second number you want to be the denominator:" << endl;
		cin >> num2;

		double divisionResult = num1 / num2;
		cout << "The result of your division is " << divisionResult << "." << endl;
	}
	else
	{
		cout << "Please, choose a number indicated." << endl;
	}
}
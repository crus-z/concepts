#include <iostream>
using namespace std;

int main()
{
	int choice;

	cout << "Choose the conversion you want to make:" << endl;
	cout << "[1] Celsius to Fahrenheit" << endl;
	cout << "[2] Fahrenheit to Celsius" << endl;
	cin >> choice;

	if (choice == 1)
	{
		double celsiusValue;
		
		cout << "Enter the value: ";
		cin >> celsiusValue;

		double fahrenheitValue = (celsiusValue * 1.8) + 32;
		cout << "The value in Fahrenheit is " << fahrenheitValue << "F";
	}
	else if (choice == 2)
	{
		double fahrenheitValue;

		cout << "Enter the value: ";
		cin >> fahrenheitValue;

		double celsiusValue = (fahrenheitValue - 32) / 1.8;
		cout << "The value in Celius is " << celsiusValue << "C";
	}
	else
	{
		cout << "Choose 1 or 2.";
	}
}
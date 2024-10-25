#include <iostream>
using namespace std;

int main()
{
	double num1, num2, num3, num4, average;
	cout << "Enter the first two numbers (separated by space):" << endl;
	cin >> num1 >> num2;

	cout << "Enter the last two numbers (separated by space): " << endl;
	cin >> num3 >> num4;

	double sum = num1 + num2 + num3 + num4;
	double avg = sum / 4;

	cout << "The sum of the four numbers is " << sum << " and the average of the four numbers is " << avg << ".";
}
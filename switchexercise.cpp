// Switch exercise I got to practice. The exercise is: Write a program that allows the user to enter the grade scored in a programming class (0-100). Modify the program so that it will notify the user of their letter grade using switch statement. F: 0-49, E: 50-59, D: 60-69, C: 70-79 B: 80-89, A: 90-100.

#include <iostream>
using namespace std;

int main()
{
	int grade;

	cout << "Insert your grade to show your letter grade:" << endl;
	cin >> grade;

	switch (grade / 10)
	{
	case 10:
		cout << "Your letter grade is A." << endl;;
		break;
	case 9:
		cout << "Your letter grade is A." << endl;
		break;
	case 8:
		cout << "Your letter grade is B." << endl;
		break;
	case 7:
		cout << "Your letter grade is C." << endl;
		break;
	case 6:
		cout << "Your letter grade is D." << endl;
		break;
	case 5:
		cout << "Your letter grade is E." << endl;
		break;
	default:
			cout << "Your letter grade is F." << endl;
			break;
	}
}
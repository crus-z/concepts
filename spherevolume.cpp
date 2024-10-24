#include <iostream>
using namespace std;

int main()
{
	double radius;
	double diameter;
	int choice;

	cout << "Choose a value of the sphere to enter:" << endl;
	cout << "[1] Radius" << endl;
	cout << "[2] Diameter" << endl;
	cin >> choice;

	if (choice == 1)
	{
		cout << "Insert the radius:" << endl;
		cin >> radius;

		double volume = (radius * radius * radius * 4 * 3.14 / 3);

		cout << "The volume is (approximately) " << volume << ".";
	}

	else if (choice == 2)
	{
		cout << "Insert the diameter:" << endl;
		cin >> diameter;

		double toRadius = diameter / 2;
		double volume = (toRadius * toRadius * toRadius * 4 * 3.14 / 3);

		cout << "The volume of the sphere is (approximately) " << volume << ".";
	}

	else
	{
		cout << "Please, insert 1 for radius or 2 for diameter.";
	}
}
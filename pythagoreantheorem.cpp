#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double cathet1;
	double cathet2;
	double hypotenuse;
	int choice;

		cout << "What do you want to discover, a cathet or the hypotenuse?" << endl;
		cout << "[1] Cathet" << endl;
		cout << "[2] Hypotenuse" << endl;
		cin >> choice;

			if (choice == 1)
			{
				cout << "Input the value of the other cathet:" << endl;
					cin >> cathet1;
					cout << "Now, input the value of the hypotenuse:" << endl;
						cin >> hypotenuse;
						double cathetValue = sqrt (hypotenuse * hypotenuse - cathet1 * cathet1);
						cout << "The value of the second cathet is " << cathetValue << "." << endl;
			}
			else if (choice == 2)
			{
				cout << "Input the value of the first cathet:" << endl;
				cin >> cathet1;
				cout << "Input the value of the second cathet:" << endl;
				cin >> cathet2;

				double hypotenuseValue = sqrt (cathet1 * cathet1 + cathet2 * cathet2);
				cout << "The value of the hypotenuse is " << hypotenuseValue << "." << endl;
			}
			else
			{
				cout << "Please, insert only 1 or 2." << endl;
			}
}
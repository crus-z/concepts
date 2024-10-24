#include <iostream>
using namespace std;

int main()
{
	double angle1, angle2, angle3;
	
	cout << "Insert the first angle of the triangle: ";
	cin >> angle1;
	cout << "Insert the second angle of the triangle: ";
	cin >> angle2;

	angle3 = 180 - angle1 - angle2;

	cout << "The third angle is " << angle3 << ".";
}
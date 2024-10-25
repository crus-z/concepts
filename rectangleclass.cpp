#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{
private:
	double length, width;
public:
	Rectangle(double len, double wid) : length(len), width(wid) {}
	double areaCalc()
	{
		return width * length;
	}
	double perimeterCalc()
	{
		return width * 2 + length * 2;
	}
};

int main()
{
	double width, length;

	cout << "Insert the width and the length (separated):" << endl;
	cin >> width >> length;

	Rectangle rectangle(width, length);
	double area = rectangle.areaCalc();
	double perimeter = rectangle.perimeterCalc();

	cout << "The area is " << area << " and the perimeter is " << perimeter << ".";
}
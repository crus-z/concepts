#include <iostream>
#include <cmath>
using namespace std;

const double PI = 3.14159;

class Circle
{
private:
	double radius;

public:
	Circle(double rad) : radius(rad) {}
	double areaCalc() 
	{
		return PI * radius * radius;
	}
	double circumference()
	{
		return 2 * PI * radius;
	}
};

int main()
{
	double radius;

	cout << "Insert the radius value: ";
	cin >> radius;
	Circle circle(radius);

	double area = circle.areaCalc();
	double circumference = circle.circumference();

	cout << "The area of the circle is " << area << ", and the circumference is " << circumference << ".";
}
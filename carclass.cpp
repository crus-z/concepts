#include <iostream>
using namespace std;

class Car
{
private: 
	string company, model;
	int year;
public:
	void setCompany(const string & c)
	{
		company = c;
	}
	void setModel(const string & m)
	{
		model = m;
	}
	void setYear(const int & y)
	{
		year = y;
	}
	string getCompany()
	{
		return company;
	}
	string getModel()
	{
		return model;
	}
	int getYear()
	{
		return year;
	}
};

int main()
{
	Car car;

	car.setCompany("Ford");
	car.setModel("Ka");
	car.setYear(2022);

	cout << "Company: " << car.getCompany() << endl;
	cout << "Model: " << car.getModel() << endl;
	cout << "Year: " << car.getYear();
}
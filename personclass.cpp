#include <iostream>
using namespace std;

class Person
{
private:
	int age;
	string name, country;

public:
	void setAge(const int & a)
	{
		age = a;
	}
	void setName(const string & n)
	{
		name = n;
	}
	void setCountry(const string & c)
	{
		country = c;
	}
	int getAge()
	{
		return age;
	}
	string getName()
	{
		return name;
	}
	string getCountry()
	{
		return country;
	}
};

int main()
{
	Person person;

	person.setAge(17);
	person.setName("Cristiano");
	person.setCountry("Brazil");

	cout << "Name: " << person.getName() << endl;
	cout << "Age: " << person.getAge() << endl;
	cout << "Country: " << person.getCountry();
}
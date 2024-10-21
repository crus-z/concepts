#include <iostream>
using namespace std;

int main()
{
	int num;
	int divisorsAmount = 0;
	
	cout << "Insert a number to check if it is prime or not:" << endl;
	cin >> num;

	if (num <= 1)
		cout << num << " is not prime." << endl;
	else
	{
		for (int i = 1; i <= num; i++)
		{
			if (num % i == 0)
				divisorsAmount++;
		}
		if (divisorsAmount == 2)
			cout << num << " is prime.";
		else
			cout << num << " is not prime.";
	}
}
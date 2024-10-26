#include <iostream>
using namespace std;

class BankAccount
{
private:
	float balance;
	int Accnumber;
public:
	void setBalance(const float& b)
	{
		balance = b;
	}
	void setAccnumber(const int& a)
	{
		Accnumber = a;
	}
	float getBalance()
	{
		return balance;
	}
	int getAccnumber()
	{
		return Accnumber;
	}
};

int main()
{
	BankAccount bankaccount;

	bankaccount.setBalance(5000.50);
	bankaccount.setAccnumber(200);

	cout << "Balance: " << bankaccount.getBalance() << endl;
	cout << "Account number: " << bankaccount.getAccnumber();
}
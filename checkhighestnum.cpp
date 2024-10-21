#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int num3;
    cout << "Input 3 numbers to check the highest. Number 1: " << endl;
    cin >> num1;
    cout << "Number 2: " << endl;
    cin >> num2;
    cout << "Number 3: " << endl;
    cin >> num3;
        cout << "The highest number is " << max({num1, num2, num3}) << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Input a number to check if it is even or odd: " << endl;
    cin >> num;
    if (num % 2 == 0)
        cout << "Your number is even.";
    else
        cout << "Your number is odd.";
}
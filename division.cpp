#include<iostream>
using namespace std;

int main()
{
float numerator;
float denominator;

cout << "Type your positive non-integer numerator:" << endl;
cin >> numerator;

cout << "Type your positive non-integer denominator:" << endl;
cin >> denominator;

float divisionResult;
divisionResult = numerator/denominator;

cout << "The result of your division is " << divisionResult << "." << endl;
}
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
double a;
double b;
double c;

 cout << "Type your a:" << endl;
 cin >> a;
 
 cout << "Type your b:" << endl;
 cin >> b;
 
 cout << "Type your c:" << endl;
 cin >> c;
 
 double resultDelta;
 resultDelta = b * b - 4 * a * c;
 
 if (resultDelta < 0)
{
cout << "The equation has no real roots." << endl;
}
else
{
double sqrtDelta;
sqrtDelta = sqrt (resultDelta);
 double result1;
 result1 = (-b + sqrtDelta) / (2 * a);
 double result2;
 result2 = (-b - sqrtDelta) / (2 * a);
 
 cout << "The first result is " << result1 << " and the second result is " << result2 << "." << endl;
 }
}
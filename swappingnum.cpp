#include <iostream>
using namespace std;

int main()
{
    int a = 100, b = 200;
    int temp;
    cout << "The first, initially, is " << a << ". The second number, initially, is " << b << endl;
temp = a;
a = b;
b = temp;
cout << "The first number got swapped to " << a << ". The second number got swapped to " << b << endl; 
}
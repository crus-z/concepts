#include<iostream>
using namespace std;

int main()
{
    int integerType;
    float floatType;
    double doubleType;
    char charType;
    
    cout << "The size of integer is " << sizeof(integerType) << " bytes" << endl;
    cout << "The size of float is " << sizeof(floatType) << " bytes" << endl;
    cout << "The size of double is " << sizeof(doubleType) << " bytes" << endl;
    cout << "The size of char is " << sizeof(charType) << " bytes" << endl;
}
#include <iostream>
using namespace std;

int main()
{
    int limit;

    cout << "Find prime numbers up to: ";
    cin >> limit;

    if (limit < 2)
    {
        cout << "Your number must be greater than or equal to 2.";
        return 0;
    }

    
    for (int num = 2; num <= limit; num++)
    {
        int divisorsAmount = 0; 

        
        for (int i = 1; i <= num; i++)
        {
            if (num % i == 0)
            {
                divisorsAmount++;
            }
        }

        
        if (divisorsAmount == 2)
        {
            cout << num << endl; 
        }
    }
}

#include <iostream>
using namespace std;

bool isPrimeNumber(int number)
{
    for (int i = 2; i < number; i++)
    {
        if (number % i == 0)
        {
            return false;
            /*isPrimeFlag = false;
            break;*/
        }
    }
    return true;
}

void main()
{
    
    int number;
    cout << "Number: ";
    cin >> number;

    if (isPrimeNumber(number))
    {
        cout << "the number is a prime number!" << endl;
    }
    else
    {
        cout << "the number is NOT a prime number...." << endl;
    }

    system("pause>0");
}


#include <iostream>
using namespace std;



int main()
{
    // build a programe to reverse a digit number:
    int number, reversedNumber = 0;
    cout << "Number: ";
    cin >> number;


    while (number != 0)
    {
        reversedNumber *= 10;
        int lastDigit = number % 10;
        reversedNumber += lastDigit;
        number /= 10;
    }

    cout << "Reversed: " << reversedNumber;


    system("pause>0");
}
 
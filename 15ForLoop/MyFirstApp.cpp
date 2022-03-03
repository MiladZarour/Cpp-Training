#include <iostream>
using namespace std;



int main()
{
    // the factorial of a number 6
    // 6! = 1*2*3*4*5*6 = 720

    long long unsigned  factorial = 1;
    long long unsigned number;
    cout << "Number: ";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        factorial = factorial * i;
    }
    cout << "factorial of number " << number << " is " << factorial;

 /*   for (int i = number; i >= 1; i--)
    {
        factorial = factorial * i;
 
    }*/

    system("pause>0");
}
 
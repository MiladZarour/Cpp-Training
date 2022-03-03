#include <iostream>
using namespace std;



int main()
{
    //Program for swapping values of two variables

    int a = 20;
    int b = 10;

    a = a + b; //20+10 = 30
    b = a - b; //30-10 = 20
    a = a - b; // 30-20 = 10

    cout << "a = " << a << ", b = " << b << endl;
    
    system("pause>0");
}

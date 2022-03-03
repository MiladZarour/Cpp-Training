#include <iostream>
using namespace std;



int main()
{

    int luckyNumbers[5];
    //cout << luckyNumbers << endl;
    //cout << &luckyNumbers[0] << endl; // 1000101101111100111011111111011000111000       0000008B7CEFF638
    //cout << &luckyNumbers[2] << endl; // 1000101101111100111011111111011001000000       0000008B7CEFF640
    //cout << luckyNumbers[2] << endl;  //  cout << *(luckyNumbers + 2) << endl;
    //cout << *(luckyNumbers + 2) << endl;

    for (int i = 0; i <= 4; i++)
    {
        cout << "Number: ";
        cin >> luckyNumbers[i];
    }

    for (int i = 0; i <= 5; i++)
    {
        
        cout << *(luckyNumbers+i) << "  ";
    }

    system("pause>0");
    return 0;
}
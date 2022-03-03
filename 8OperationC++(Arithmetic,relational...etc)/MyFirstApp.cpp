#include <iostream>
using namespace std;



int main()
{
    cout << 5 + 2 << endl;
    cout << 5 / 2 << endl;
    cout << 5 / 2.0 << endl; // 2.5
    cout << 5 % 2 << endl; // 1

    //++, --
    int counter = 7;
    counter++;
    cout << counter << endl;
    counter--;
    cout << counter << endl<< endl;

    int counter2 = 7;
    cout << counter2++ << endl; //post-increment printing 7 but insdie become 8
    cout << ++counter2 << endl; //pre-increment printfing 9
    cout << counter2-- << endl; //post-decrement  printing 9 but inside now it's 8
    cout << --counter2 << endl; //pre-decrement

    system("cls");

    //<,>,<=,>=,==,!=

    int a = 5, b = 5;
    cout << (a > b)<<endl; // 0 is false and 1 is 
    int c = 4, d = 2;
    cout << (c > d) << endl;; // 0 is false and 1 is true

    system("cls");
    //&&,||,!
    c = 5;
    cout << (a == 5 && b == 5) << endl;
    cout << (c == 5 || d == 5) << endl;
    cout << !(c == 5 || d == 5) << endl;
    system("cls");

    //=,+=,-=,*=,/=,%= (assignment operator)



    
    system("pause>0");
}

#include <iostream>
using namespace std;



int main()
{
    int n = 5;
    cout << &n << endl;

    int* ptr;
    ptr = &n;
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 6;
    cout << *ptr << endl;


    system("pause>0");
    return 0;
}


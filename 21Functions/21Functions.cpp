#include <iostream>
using namespace std;

void function();

void main()
{
    cout << "Hello from main()\n";
    function();
    function();
    function();
    function();
    system("pause>0");
}


void function()
{
    cout << "Hello from function()" << endl;
}
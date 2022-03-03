#include <iostream>
using namespace std;


void printNumber(int* numberPtr)
{
    cout << *numberPtr << endl;

}
void printLetter(char* charPtr)
    {
        cout << *charPtr << endl;
    }

void print(void* ptr, char type)
{
    switch (type)
    {
    case 'i': cout << *((int*)ptr) << endl; break;//handle int*
    case 'c': cout << *((char*)ptr) << endl; break;//handle char*
    default:
        break;
    }
}


int main()
{

    int number = 5;
    char letter = 'a';
    //printNumber(&number);
    //printLetter(&letter);

    print(&number, 'i');
    print(&letter, 'c');


    


    system("pause>0");
    return 0;
}


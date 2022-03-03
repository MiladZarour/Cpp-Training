#include <iostream>
using namespace std;



void main()
{
	//Multiplication Tabel
	int multi;

	for (int i = 1; i <= 100; i++)
	{
		for (int j = 1; j < 100; j++)
		{
			multi = i * j;
			cout << i << " * " << j << " = " << multi << endl;
		}
	}
    
    system("pause>0");
}
 
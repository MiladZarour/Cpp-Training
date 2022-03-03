#include <iostream>
#include<iomanip>
using namespace std;



void main()
{
	//Draw a rectangular shape

	int height, width;
	cout << "Height: ";
	cin >> height;
	char symbol;
	cout << "symbol:";
	cin >> symbol;

	for (int h = 0; h < height; h++)
	{
		for (int w = 0; w <=h ; w++)
		{
			cout << setw(3) << symbol;
		}
		cout << endl;
	}

    system("pause>0");
}
 
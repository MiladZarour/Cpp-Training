#include <iostream>
using namespace std;


int recursive_sum(int m, int n) // m=2, n=4
{
	if (m==n)
	{
		return m;
	}
	return m + recursive_sum(m + 1, n); // 2+(3+(4)) = 9
}


//Sum numbers between m-n

int main()
{

    int m=2, n=4;
	cout << "Sum = " << recursive_sum(m, n);

	//int d = 1, b = 7;
	//cout << "Sum = " << recursive_sum(d, b);

	//int sum = 0;
	//for (int i = m; i <= n; i++)
	//{
	//	sum += i;
	//}
	//cout << "Sum: " << sum << endl;

    system("pause>0");
}


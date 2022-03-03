#include <iostream>
using namespace std;

int sum(int a, int b);
double sum(double a, double b);
float sum(float a, float b, float c);

int main()
{
    cout << sum(4, 3) << endl;
    cout << sum(4.3, 3.4) << endl;
    cout << sum(4.3, 3.4, 3.435) << endl;
    system("pause>0");
}

int sum(int a, int b)
{
    int result = a + b;
    return result;
}
double sum(double a, double b)
{
    return a + b;
}
float sum(float a, float b, float c)
{
    return a + b + c;
}


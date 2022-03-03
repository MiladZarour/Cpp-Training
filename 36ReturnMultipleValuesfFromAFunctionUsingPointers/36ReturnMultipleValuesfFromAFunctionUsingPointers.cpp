#include <iostream>
using namespace std;


int getMin(int numbers[], int size)
{
    int min = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] < min)
        {
            min = numbers[i];
        }
       
    }
    return min;
}


int getMax(int numbers[], int size)
{
    int max = numbers[0];
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > max)
        {
            max = numbers[i];
        }

    }
    return max;
}


void getMinAndMax(int numbers[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }
        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }

}

int main()
{

    int number[5] = { 5,4,-2,29,6 };
    int min = number[0];
    int max = number[0];
    getMinAndMax(number, 5, &min, &max);
    cout << "min is " << min << endl;
    cout << "max is " << max << endl;
    //cout << "Min is " << getMin(number, 5) << endl;
    //cout << "Max is " << getMax(number, 5) << endl;

    system("pause>0");
    return 0;
}
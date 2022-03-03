#include <iostream>
using namespace std;



int main()
{
    //BMI calculator
    //weight(kg) / height * height(m)
    //Underweight < 18.5
    //NormalWeight < 18.5-24.9
    //Overweight > 25
    
    float weight, height, bmi;
    cout << "Weight(kg): ";
    cin >> weight;
    cout << "Height(m): ";
    cin>> height;
    bmi = weight / (height * height);
    
    if (bmi<18.5)
    {
        cout << "Underweight" << endl;
    }
    else if(bmi>25)
    {
        cout << "Overweight" << endl;
    }
    else
    {
        cout << "Normal Weight" << endl;
    }

    cout << "Your BMI is " << bmi;
    system("pause>0");
}

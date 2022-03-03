#include <iostream>
using namespace std;

void introduceMe(string name="Idon't know", string city ="default", int age = 0)
{
    cout << "My name is " << name << endl;
    cout << "I am from " << city << endl;
    if (age!=0)
    {
        cout << "I am " << age << " years old" << endl;
    }
}

void main()
{
    string name, city;
    int age;
    cout << "Name: ";
    cin >> name;
    cout << "City: ";
    cin >> city;
    cout << "Age: ";
    cin >> age;
    cout << "Hello World!\n";
    introduceMe(name, city, age);
    //introduceMe("Milad", "Syria", 29);
    //introduceMe("aasd", "asgwea");
    //introduceMe();
    system("pause>0");
}


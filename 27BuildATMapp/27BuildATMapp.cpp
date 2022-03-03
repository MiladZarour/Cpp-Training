#include <iostream>
using namespace std;

template<typename T>
void Swap(T& a, T& b) //generics
{
    T temp = a;
    a = b;
    b = temp;
}

//void Swap(int& a, int& b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//}
//void Swap(char& a, char& b)
//{
//    char temp = a;
//    a = b;
//    b = temp;
//}


int main()
{
    int a = 5, b = 7;
    cout << a << " - " << b << endl;
    Swap(a, b);
    cout << a << " - " << b << endl;

    char c='c', d='d';
    cout << c << " - " << d << endl;
    Swap(c, d);
    cout << c << " - " << d << endl;


    int e = 13, f = 20;
    cout << e << " - " << f << endl;
    Swap<int>(e, f); //the T up will change to int that we included <int>
    cout << f << " - " << f << endl;

    char g = 'c', h = 'd';
    cout << g << " - " << h << endl;
    Swap<char>(g, h);//the T up will change to char that we included <char>
    cout << g << " - " << h << endl;

    system("pause>0");
}


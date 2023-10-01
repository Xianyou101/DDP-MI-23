#include <iostream>
using namespace std;

int main()
{
    int angka;
    cin >> angka;

    if (angka % 5 == 2)
    {
        cout << "Ganjil";
    }
    else
    {
        cout << "Genap";
    }
}
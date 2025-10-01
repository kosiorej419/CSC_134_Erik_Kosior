//@author: Erik Kosior
//@author: date: 10/1/2025
//@purpose: calculate the increse in membership price of a country club

#include <iostream>

using namespace std;

int main()
{
    const double increase_percent = .06;
    double membership_price = 250000.0;
    int years = 5;
    double increased_price = 0;

    for(int i = 0; i < years; i++)
    {
        increased_price = membership_price + (membership_price * increase_percent);
        membership_price = increased_price;
        cout << "Year " << i + 1 << " price: " << increased_price << endl;
    }
}
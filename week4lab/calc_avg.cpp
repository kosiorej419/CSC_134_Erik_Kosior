//@author: Erik Kosior
//@date: 9/8/2025
//@purpose: calculate the average of 3 user input numbers

#include <iostream>

using namespace std;

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    cout << "Enter 3 numbers: ";
    cin >> num1 >> num2 >> num3;

    double avg = (num1 + num2 + num3) / 3.0;

    cout << "The average is " << avg;
}
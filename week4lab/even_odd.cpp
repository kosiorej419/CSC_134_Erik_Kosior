//@author: Erik Kosior
//@date: 9/8/2025
//@purpose: determine if a user input integer is even or odd

#include <iostream>

using namespace std;

int main()
{
    int num;

    cout << "Enter a whole number: ";
    cin >> num;

    int even_odd = num % 2;

    if(even_odd == 0)
    {
        cout << "Your number is even.";
    }
    else
    {
        cout << "Your number is odd";
    }
}
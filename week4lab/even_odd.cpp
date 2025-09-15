//@author: Erik Kosior
//@date: 9/8/2025
//@purpose: determine if a user input integer is even or odd

#include <iostream>

using namespace std;

int main()
{
    int num = 0;

    cout << "Enter a whole number: ";

    while((!(cin >> num)))
    {
        cout << "Invalid.\nEnter an integer: ";
        cin.clear();
        cin.ignore(10,'\n');
    }

    int even_odd = num % 2;

    if(even_odd == 0)
    {
        cout << "Your number, " << num << ", is even." << endl;
    }
    else
    {
        cout << "Your number is odd" << endl;
    }
}
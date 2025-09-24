//@author: Erik Kosior
//@date: 9/24/2025
//@purpose: print a table of numbers and their squares upto 100

#include <iostream>

using namespace std;

int main()
{
    int minNum = 0;
    int maxNum = 100;

    cout << "Number | Number Squared\n";
    cout << "-----------------------\n";

    for(int count = minNum; count <= maxNum; count++)
    {
        cout << count << "\t\t" << count * count << endl;
    }
}
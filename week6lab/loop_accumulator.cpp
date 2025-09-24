//@author: Erik Kosior
//@date: 9/24/2025
//@purpose: use accumulator to count iteration of for loop

#include <iostream>

using namespace std;

int main()
{
    int count = 0;

    for(int i = 0; i < 100; i++)
    {
        count++;
    }

    cout << "The accumulator value is: " << count << endl;
}
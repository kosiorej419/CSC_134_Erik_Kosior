//@author: Erik Kosior
//@date: 9/29/2025
//@purpose: create a for loop that sums the index with 10 and loops 50 times

#include <iostream>

using namespace std;

int main()
{
    int sumOp = 0;
    int adder = 10;

    for(int i = 0; i < 50; i++)
    {
        sumOp = i + adder;
        cout << sumOp << endl;
    }
}
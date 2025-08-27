//@author: Erik Kosior
//@date: 8/27/2025
//@purpose: divide a number by 0

#include <iostream>

using namespace std;

int main()
{
    int num1 = 5;
    int divide_by_zero = num1 / 0;

    std::cout << divide_by_zero << std::endl;
}
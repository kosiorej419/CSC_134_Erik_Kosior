//@author: Erik Kosior
//@date: 10/27/2025
//@purpose: initialize a 5 value int array and total the values

#include <iostream>

using namespace std;

int main()
{
    int nums[5] = {10, 20, 30, 40, 5};
    int num_total = 0;

    for (int i = 0; i < 5; i++){
        num_total += nums[i];
    }

    cout << "Total is: " << num_total << endl;
}
//@author: Erik Kosior
//@date: 9/17/2025
//@purpose: count to 100 with a while loop

#include <iostream>

using namespace std;

int main()
{
    int count = 1;

    while(count <= 100){
        cout << "Count: " << count << endl;

        count++;
    }

    cout << "The loop went through " << (count - 1) << " iterations." << endl;
}
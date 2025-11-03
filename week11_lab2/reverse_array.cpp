//@author: Erik Kosior
//@date: 11/2/2025
//@purpose: reverse the order of a user input array

#include <iostream>

using namespace std;

int main()
{
    const int SIZE = 5;
    int num_array[SIZE];
    int num = 0;
    bool valid = false;

    for (int i = 0; i < SIZE; i++)
    {
        valid = false;

        while(valid == false) // input validation
        {
            cout << "Enter " << SIZE << " numbers: ";
            cin >> num;

            if (cin.fail()){
                cout << "Invalid input.\n";
                cin.clear();
                cin.ignore(10,'\n');
            }
            else if (num < 0){
                cout << "Invalid input.\n";
            }
            else{
                valid = true;
            }
        }

        num_array[i] = num;
    }

    int reverse_array[SIZE];
    int p = SIZE-1; // for descending position in array
    for (int j = 0; j < SIZE; j++)
    {
        reverse_array[j] = num_array[p]; 
        p--;
    }

    for (int k = 0; k < SIZE; k++)
    {
        cout << reverse_array[k] << endl;
    }
}
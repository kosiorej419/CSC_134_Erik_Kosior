//@author: Erik Kosior
//@date: 11/2/2025
//@purpose: to find the maximum value of a user input integer array

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
    
    int max = num_array[0];
    for (int j = 0; j < SIZE; j++) // iterates through array to find max
    {
        if(num_array[j] > max){
            max = num_array[j];
        }
    }

    cout << "The max value is: " << max << endl;
}
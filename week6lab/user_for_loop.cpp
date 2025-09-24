//@author: Erik Kosior
//@date: 9/24/2025
//@purpose: go through for loop with user inputted amount of loops

#include <iostream>

using namespace std;

int main()
{
    int loop_num = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter a positive number: ";
        cin >> loop_num;

        if (cin.fail()){ // checks if input is an int
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (loop_num < 0){ // checks if input is positive
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }
    
    for(int count = 0; count < loop_num; count++)
    {
        cout << "Loop num is: " << count << endl;
    }
}
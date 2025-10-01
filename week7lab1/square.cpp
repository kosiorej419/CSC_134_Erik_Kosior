//@author: Erik Kosior
//@date: 10/1/2025
//@purpose: print a square using asterisks with size specidied by user

#include <iostream>

using namespace std;

int main()
{
    int side_length = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter side length: ";
        cin >> side_length;

        if (cin.fail()){ // checks if input is an int
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (side_length < 0){ // checks if input is positive
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    for(int i = 0; i < side_length; i++)
    {
        for(int count = 0; count < side_length; count++)
        {
            cout << "*  ";
        }
        cout << endl;
    }
}
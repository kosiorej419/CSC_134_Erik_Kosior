//@author: Erik Kosior
//@date: 10/1/2025
//@purpose: print a chessboard pattern with asterisks and spaces using a user specified size

#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter an odd size: ";
        cin >> size;

        if (cin.fail()){ // checks if input is an int
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (size < 0){ // checks if input is positive
            cout << "Invalid input.\n";
        }
        else if(size % 2 == 0){
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    int count = 1;

    for(int i = 0; i < size; i++)
    {
        for(int index = 0; index < size; index++)
        {
            if (count % 2 != 0){
                cout << "*  ";
            }
            else{
                cout << "   ";
            }

            count++;
        }
        cout << endl;
    }
}
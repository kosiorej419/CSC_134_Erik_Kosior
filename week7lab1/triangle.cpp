//@author: Erik Kosior
//@date: 9/29/2025
//@purpose: print a right triangle with asterisks using for loops

#include <iostream>

using namespace std;

int main()
{
    int rows = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter number of rows: ";
        cin >> rows;

        if (cin.fail()){ // checks if input is an int
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (rows < 0){ // checks if input is positive
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    for(int i = 1; i <= rows; i++) //loops by amount of rows
    {
        for(int count = 0; count < i; count++) //prints the row of "*"
        {
            cout << "*";
        }
        cout << endl;
    }
}
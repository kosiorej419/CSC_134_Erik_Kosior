//@author: Erik Kosior
//@date: 10/1/2025
//@purpose: create a multiplication table through values 0-12 on a user input integer

#include <iostream>

using namespace std;

int main()
{
    int mult_num = 0;
    int multiple = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter a positive number: ";
        cin >> mult_num;

        if (cin.fail()){ // checks if input is an int
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (mult_num < 0){ // checks if input is positive
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    for(int i = 0; i <=12; i++)
    {
        multiple = mult_num * i;
        cout << multiple << "\t";
    }
    cout << endl;
}
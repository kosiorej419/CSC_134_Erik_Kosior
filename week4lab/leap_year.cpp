//@author: Erik Kosior
//@date: 9/14/2025
//@purpose: determine if user input year is a leap year

#include <iostream>

using namespace std;

int main()
{
    int year = 0;
    bool valid = false;
    
    while(valid == false)
    {
        cout << "Enter a year: ";
        cin >> year;

        if (cin.fail()){
            cout << "Invalid.\nEnter a year: ";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (year <= 0){
            cout << "Invalid input.\nEnter a year: ";
        }
        else{
            valid = true;
        }
    }

    if ((year % 4) == 0){   //checks multiple of 4
        if((year % 100) == 0){  //checks multiple of 100
            if((year % 400) == 0){  //checks multiple of 400
                cout << "The year you entered " << year << " is a leap year" << endl;
            }
            else{
                cout << "The year you entered " << year << " is NOT leap year" << endl;
            }
        }
        else{
            cout << "The year you entered " << year << " is a leap year" << endl;
        }
    }
    else{
        cout << "The year you entered " << year << " is NOT leap year" << endl;
    }
}
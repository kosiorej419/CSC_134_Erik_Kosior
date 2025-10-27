//@author: Erik Kosior
//@date: 10/27/2025
//@purpose: get 10 grades from a user to input in an array and then average them

#include <iostream>

using namespace std;

int main()
{
    const int LENGTH = 10;
    int grades[LENGTH];
    bool valid = false;

    for (int i = 0; i < LENGTH; i++) //loop for input by 
    {
        while (valid == false) // validate user input
        {
            cout << "Enter grade " << i + 1 << ": ";
            cin >> grades[i];

            if (cin.fail()){
                cout << "Invalid input.\n";
                cin.clear();
                cin.ignore(10, '\n');
            }
            else if (grades[i] < 0 || grades[i] > 100){
                cout << "Invalid input.\n";
            }
            else{
                valid = true;
            }
        }
        valid = false;
    }

    double grade_total = 0;

    for (int i = 0; i < LENGTH; i++)
    {
        grade_total += grades[i];
    }

    double grade_avg = grade_total / 10.0;

    cout << "The average is: " << grade_avg << endl;
}
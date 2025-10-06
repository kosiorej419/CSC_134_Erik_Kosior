//@author: Erik Kosior
//@date: 10/5/2025
//@purpose: asks user for budget and expenses to calculate how much over or under the budget the user is

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    double budget = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter budget: ";
        cin >> budget;

        if (cin.fail()){ // checks if input is an int
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (budget < 0){ // checks if input is positive
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    bool done = false;
    double expense = 0;
    double total_expenses = 0;
    string fin = "";    // string to check if user is done

    while(done == false)
    {
        valid = false;
        while(valid == false) // input validation
        {
            cout << "Enter expense: ";
            cin >> expense;

            if (cin.fail()){ 
                cout << "Invalid input.\n";
                cin.clear();
                cin.ignore(10,'\n');
            }
            else if (expense < 0){
                cout << "Invalid input.\n";
            }
            else{
                valid = true;
            }
        }
        valid = false;
        total_expenses += expense;

        while(valid == false) // input validation
        {
            cout << "Continue(Y/N): ";
            cin >> fin;

            if (cin.fail()){ 
                cout << "Invalid input.\n";
                cin.clear();
                cin.ignore(10,'\n');
            }
            else if (fin == "Y" || fin == "N" || fin == "n" || fin == "y"){
                valid = true;
            }
            else{
                cout << "Invalid inuput.\n";
            }
        }

        if (fin == "N" || fin == "n"){
            done = true;
        }
    }

    double budget_difference = budget - total_expenses;
    cout << setprecision(2) << fixed << endl;

    if (budget_difference >= 0){
        cout << "You are under the budget by " << budget_difference << endl;
    }
    else{
        cout << "You are over the budget by " << budget_difference << endl;
    }
}
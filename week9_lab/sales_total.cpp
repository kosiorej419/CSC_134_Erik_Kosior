//@author: Erik Kosior
//@date: 10/22/2025
//@purpose: modify sales.cpp to include the total on the file

#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    int day_num = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter the number of days: ";
        cin >> day_num;

        if (cin.fail()){
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (day_num < 0){
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    double sales = 0;
    double sales_total = 0;
    ofstream outputFile; // output file object

    outputFile.open("week9_lab.txt");

    for(int i = 0; i < day_num; i++) //loop through each day
    {
        valid = false;  //reset valid
        while(valid == false)
        {
            cout << "Enter sales for day " << i+1 << ": ";
            cin >> sales;

            if (cin.fail()){
                cout << "Invalid input.\n";
                cin.clear();
                cin.ignore(10, '\n');
            }
            else if (sales < 0){
                cout << "Invalid input.\n";
            }
            else{
                valid = true;
            }
        }

        sales_total += sales;
        outputFile << sales << endl; // write to file
    }

    outputFile << setprecision(2) << fixed;
    outputFile << "===========================" << endl;
    outputFile << "Total Sales: $" << sales_total << endl;
    outputFile << "===========================" << endl;

    outputFile.close();
}
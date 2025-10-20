//@author: Erik Kosior
//@date: 10/20/2025
//@purpose: ask user for the number of days and loop through each day prompting user for sales which are then written to a file

#include <iostream>
#include <fstream>

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

        outputFile << sales << endl; // write to file
    }
    outputFile.close();
}
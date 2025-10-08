//@author: Erik Kosior
//@date: 10/8/2025
//@purpose: get an integer from the user and loop through tht number writing each loop to a file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    int num = 0;
    bool valid = false;

    while(valid == false) // input validation
    {
        cout << "Enter a positive number: ";
        cin >> num;

        if (cin.fail()){
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (num < 0){
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    outputFile.open("lab4.txt");

    for(int i = 0; i < num; i++)
    {
        outputFile << i << endl;
    }
    outputFile.close();

    cout << "Done writing." << endl;
}
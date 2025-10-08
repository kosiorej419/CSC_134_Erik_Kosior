//@author: Erik Kosior
//@date: 10/8/2025
//@purpose: get 3 friend names from user and write them to a file

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    string friend1 = "";
    string friend2 = "";
    string friend3 = "";
    
    cout << "Enter the names of 3 friends: ";
    cin >> friend1 >> friend2 >> friend3;

    outputFile.open("lab5.txt");

    outputFile << friend1 << endl;
    outputFile << friend2 << endl;
    outputFile << friend3 << endl;

    outputFile.close();
}
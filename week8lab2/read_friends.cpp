//@author: Erik Kosior
//@date: 10/14/2025
//@purpose: read data from friends.txt file and print to console

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    string line = "";

    inputFile.open("C:\\CSC_134_Erik_Kosior\\week8lab2\\friends.txt");

    for(line; getline(inputFile, line);)
    {
        cout << line << endl;
    }

    inputFile.close();
}
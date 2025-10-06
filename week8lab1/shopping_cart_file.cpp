//@author: Erik Kosior
//@date: 10/6/2025
//@purpose: create a new file and write a shopping cart to it

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("lab2.txt");

    outputFile << "**************************************\n";
    outputFile << "\t\t\tShopping Cart\n";
    outputFile << "**************************************\n";
    outputFile << "product code     qty     price\n";
    outputFile << "     789         7       $12.00\n";
    outputFile << "\n";
    outputFile << "\t\t\t\t\t\tTotal: $84.00";

    outputFile.close();
}
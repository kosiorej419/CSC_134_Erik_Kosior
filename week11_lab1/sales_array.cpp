//@author: Erik Kosior
//@date: 10/27/2025
//@purpose: get sales from a file to put in an array then total the sales

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    const int SIZE = 5;
    int sales[SIZE];
    int sales_total = 0;

    inputFile.open("C:\\CSC_134_Erik_Kosior\\week11_lab1\\sales.txt");

    int i = 0; // accumulator
    while(inputFile >> sales[i])
    {
        sales_total += sales[i];
        i++;
    }
    inputFile.close();

    cout << "Total sales: " << sales_total << endl;
}
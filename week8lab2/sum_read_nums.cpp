//@author: Erik Kosior
//@date: 10/14/2025
//@purpose: read numbers from a file and sum the values

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile;
    int num = 0;
    int sum = 0;

    inputFile.open("C:\\CSC_134_Erik_Kosior\\week8lab2\\numbers.txt");

    while(inputFile >> num)
    {
        sum += num;
    }
    
    inputFile.close();

    cout << "The sum is: " << sum << endl;
}
//@author: Erik Kosior
//@date: 10/6/2025
//@purpose: create a new file and write movie names to it

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("lab1.txt");

    outputFile << "Bourne Identity\n";
    outputFile << "Star Wars Episode IV\n";
    outputFile << "The Hunger Games\n";
    outputFile << "Dead Pool\n";
    outputFile << "X-Men First Class\n";
    outputFile << "Star Wars Espisode V\n";
    outputFile << "Get Out" << endl;
    
    outputFile.close();
}
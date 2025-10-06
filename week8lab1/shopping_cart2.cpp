//@author: Erik Kosior
//@date: 10/6/2025
//@purpose: use shopping_cart_file.cpp's code but remove the "\n"s

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream outputFile;
    outputFile.open("lab3.txt");

    outputFile << "**************************************";
    outputFile << "\t\t\tShopping Cart";
    outputFile << "**************************************";
    outputFile << "product code     qty     price";
    outputFile << "     789         7       $12.00";
    outputFile << "";
    outputFile << "\t\t\t\t\t\tTotal: $84.00" << endl;

    outputFile.close();
}
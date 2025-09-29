//@author: Erik Kosior
//@date: 9/29/2025
//@purpose: use for loops to print a multiplication table of 1-10

#include <iostream>

using namespace std;

int main()
{
    int multiple = 0;
    int num = 1;

   for(int i = 1; i <=10; i++) // goes through numbers 1-10
   {
        for(int count = 1; count <= 10; count++) //  multiples num by 1-10
        {
            multiple = num * count;
            cout << multiple << "\t";
        }
        cout << endl;

        num++;
   }
}
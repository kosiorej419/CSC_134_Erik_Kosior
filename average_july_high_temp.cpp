//@author: Erik Kosior
//@date: 9/3/2025
//@purpose: find the new average july high temp

#include <iostream>

using namespace std;

int main()
{
    //set original average temps
    int new_york_temp = 85;
    int denver_temp = 88;
    int phoenix_temp = 106;

    //get new average temps
    double new_york_new_temp = new_york_temp * 1.02;
    double denver_new_temp = denver_temp * 1.02;
    double phoenix_new_temp = phoenix_temp * 1.02;

    cout << "New average July high temperatures:\nNew York: " << new_york_new_temp << "\nDenver: " << denver_new_temp << 
    "\nPhoenix: " << phoenix_new_temp;
}
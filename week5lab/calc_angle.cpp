//@author: Erik Kosior
//@date: 9/15/2025
//@purpose: calculate the angle of a right triangle

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    double length = 3.0;
    double height = 4.0;

    double hypotenuse = sqrt(pow(3,2) + pow(4,2));
    double angle = (atan2(height, length)) * (180 / M_PI);

    cout << fixed << setprecision(2) << "Angle: " << angle << "\nHypotenuse: " << hypotenuse << endl;

    if (angle >= 51.13 && angle < 51.14){
        cout << "This is a 3-4-5 triangle." << endl;
    }
    else{
        cout << "This is NOT a 3-4-5 triangle." << endl;
    }
}
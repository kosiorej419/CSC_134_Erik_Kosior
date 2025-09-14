//@author: Erik Kosior
//@date: 9/10/2025
//@purpose: calculate average grade from 3 input grades, then determine the letter grade

#include <iostream>

using namespace std;

int main()
{
    int grade1 = 0;
    int grade2 = 0;
    int grade3 = 0;

    cout << "Enter 3 grades: ";
    cin >> grade1 >> grade2 >> grade3;

    double avg_grade = (grade1 + grade2 + grade3) / 3.0;

    if (avg_grade >= 90 && avg_grade <= 100){
        cout << avg_grade << " is an A." << endl;
    }
    if (avg_grade >= 80 && avg_grade <= 89){
        cout << avg_grade << " is a B." << endl;
    }
    if (avg_grade >= 70 && avg_grade <= 79){
        cout << avg_grade << " is a C." << endl;
    }
    if (avg_grade >= 60 && avg_grade <= 69){
        cout << avg_grade << " is a D." << endl;
    }
    if (avg_grade < 60){
        cout << avg_grade << " is a F." << endl;
    }
}
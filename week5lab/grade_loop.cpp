//@author: Erik Kosior
//@date: 9/17/2025
//@purpose: prompt user for 10 grades with while loop, then average them

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int grade = 0;
    int grade_total = 0;
    int check = 0;
    bool valid = false;

    while(check < 10){
        //validates input
        while(valid == false){
            cout << "Enter a grade: ";
            cin >> grade;

            if (cin.fail()){
                cout << "Invalid.\n";
                cin.clear();
                cin.ignore(10,'\n');
            }
            else if (grade <= 0 || grade > 100){
                cout << "Invalid input.\n";
            }
            else{
                valid = true;
            }
        }
        
        grade_total += grade;

        check++;
        valid = false;
    }

    double grade_avg = static_cast<double>(grade_total) / check;

    cout << fixed << setprecision(2) << "The grade average is: " << grade_avg << endl;
}
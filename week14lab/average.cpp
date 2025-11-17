//@author: Erik Kosior
//@date: 11/17/2025
//@purpose: use a function to get the average of three numbers

#include <iostream>

using namespace std;

double averageValues(int num1, int num2, int num3){
    double avg = (num1 + num2 + num3) / 3.0;
    return avg;
}

int main(){
    int num1 = 54;
    int num2 = 120;
    int num3 = 7;

    double avg = averageValues(num1, num2, num3);

    cout << "The average is: " << avg << endl;
}
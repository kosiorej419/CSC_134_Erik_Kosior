//@author: Erik Kosior
//@date: 11/17/2025
//@purpose: call both squareNumber and averageValues functions in another function

#include <iostream>

using namespace std;

int squareNumber(int num){
    int square = num * num;
    return square;
}

double averageValues(int num1, int num2, int num3){
    double avg = (num1 + num2 + num3) / 3.0;
    return avg;
}

void multipleFuncs(){
    int num1 = 13;
    int num2 = 89;
    int num3 = 340;

    int sqr = squareNumber(num1);
    double avg = averageValues(num1, num2, num3);

    cout << "Square: " << sqr << endl;
    cout << "Average: " << avg << endl;
}

int main(){
    multipleFuncs();
}


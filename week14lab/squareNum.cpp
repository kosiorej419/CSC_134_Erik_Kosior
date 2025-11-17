//@author: Erik Kosior
//@date: 11/17/2025
//@purpose: get user input for a number then square it in a seperate function

#include <iostream>

using namespace std;

int squareNumber(int num){
    int square = num * num;
    return square;
}

int main()
{
    int num = 0;
    bool valid = false;

    while (valid == false)
    {
        cout << "Enter a positive whole number: ";
        cin >> num;

        if (cin.fail()){
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10, '\n');
        }
        else if (num < 0){
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    int square = squareNumber(num);

    cout << "The square of your number is: " << square << endl;
}
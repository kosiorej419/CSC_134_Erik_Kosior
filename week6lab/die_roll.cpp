//@author:Erik Kosior
//@date: 10/1/2025
//@purpose: roll a 6 sided die using the rand function a user specified number of times

#include <iostream>
#include <random>

using namespace std;

int main()
{
    int roll_count = 0;
    bool valid = false;

    random_device engine; //random number engine
    uniform_int_distribution<int> dice_value(1, 6); //distribution object

    while(valid == false) // input validation
    {
        cout << "Enter the number of die rolls: ";
        cin >> roll_count;

        if (cin.fail()){ // checks if input is an int
            cout << "Invalid input.\n";
            cin.clear();
            cin.ignore(10,'\n');
        }
        else if (roll_count < 0){ // checks if input is positive
            cout << "Invalid input.\n";
        }
        else{
            valid = true;
        }
    }

    cout << "Dice roll: " << endl;
    
    for(int i = 0; i < roll_count; i++)
    {
        
        cout << dice_value(engine) << endl;
    }
}
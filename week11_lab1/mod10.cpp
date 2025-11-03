//@author: Erik Kosior
//@date: 10/27/2025
//@purpose: use the Luhn algorithm to determine the validity of a credit card

#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

int main()
{
    string card_num = "4012888888881881";
    string ch;
    int num;
    const int SIZE = card_num.length();
    int reverse_num[SIZE];
    int p = 0; // for position in array

    for (int i = SIZE - 1; i >= 0; i--)
    {
        ch = card_num[i];
        num = stoi(ch);
        reverse_num[p] = num;
        p++;
    }
    
    int mult_num = 0;
    int total = 0; //keep total to divide at end
    for (int j = 1; j <= SIZE; j++)
    {
        if((j % 2) == 0){
            mult_num = reverse_num[j-1] * 2;  // multiplies every 2nd number

            if(mult_num >= 10){
                mult_num = mult_num - 9;
                total += mult_num;
            }
            else{
                total += mult_num;
            }
            //reverse_num[j-1] = mult_num;
        }
        else{
            total += reverse_num[j-1]; // adds unmultiplied numbers to total
        }
        
    }

    /*for (int i = 0; i < SIZE; i++){
        cout << reverse_num[i] << endl;
    }*/

    //cout << total << endl;

    if((total % 10) == 0){ // if multiple of 10 then valid
        cout << "Card is valid." << endl;
    }
    else{
        cout << "Card is not valid." << endl;
    }
}
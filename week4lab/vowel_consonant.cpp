//@author: Erik Kosior
//@date: 9/10/2025
//@purpose: determine if a user entered character is a vowel or consonant

#include <iostream>

using namespace std;

int main()
{
    char letter;
    bool isValid = false;

    while(isValid == false)
    {
        cout << "Enter a letter: ";
        cin >> letter;

        if(letter >= 'A' && letter <= 'Z'){
            isValid = true;
        }
        else if (letter >= 'a' && letter <= 'z'){
            isValid = true;
        }
        else{
            cout << "Invalid input." << endl;
        }
    }

    if (letter == 'A' || letter == 'E'|| letter == 'I' || letter == 'O' || letter == 'U'){
        cout << "Letter " << letter << " is a vowel." << endl;
    }
    else if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u'){
        cout << "letter " << letter << " is a vowel." << endl;
    }
    else{
        cout << "Letter " << letter << " is a consonant." << endl;
    }
}
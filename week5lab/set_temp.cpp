//@author: Erik Kosior
//@date: 9/17/2025
//@purpose: prompt user until they set temp to 212.34

#include <iostream>

using namespace std;

int main()
{
    double temp = 0;
    bool valid = false;

    while(temp != 212.34){
        while(valid == false){
            cout << "Enter a temperature: ";
            cin >> temp;

            if (cin.fail()){
                cout << "Invalid input.\n";
                cin.clear();
                cin.ignore(10,'\n');
            }
            else{
                valid = true;
            }
        }
        
        valid = false;
    }

    cout << "The temperature has been successfully set, thank you." << endl;
}
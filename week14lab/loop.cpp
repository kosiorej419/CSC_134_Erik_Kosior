//@auhtor: Erik Kosior
//@date: 11/17/2025
//@purpose: use a for loop to loop a specified number of times using a function

#include <iostream>

using namespace std;

void loop(int num){
    for (int i = 0; i < num; i++){
        cout << "Loop " << i + 1 << endl;
    }
}

int main(){
    int loopNum = 340;
    loop(loopNum);
}
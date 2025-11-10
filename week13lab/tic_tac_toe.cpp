//@author: Erik Kosior
//@date: 11/10/2025
//@purpose: create a playable tic-tac-toe game

#include <iostream>

using namespace std;

int main()
{
    string x = "X";
    string o = "O";
    string turnSymbol = ""; // symbol for the turn
    int row = 0;
    int column = 0;
    int turn = 1; // counts the turn number
    bool valid = false;
    bool win = false;
    bool open = false;

    string board[5][5] = {
        {" ", " | ", " ", " | ", " "},
        {"-", "---", "-", "---", "-"},
        {" ", " | ", " ", " | ", " "},
        {"-", "---", "-", "---", "-"},
        {" ", " | ", " ", " | ", " "}
    };

    string marks[3][3] = {{"", "", ""}, {"", "", ""}, {"", "", ""}};

    while (win == false)
    {
        open = false;
        while (open == false)
        {
            valid = false;
            while (valid == false) // validate row
            {
                cout << "Enter row: ";
                cin >> row;

                if (cin.fail()){
                    cout << "Invalid input.\n";
                    cin.clear();
                    cin.ignore(10, '\n');
                }
                else if (row > 3 || row < 1){
                    cout << "Invalid input.\n";
                }
                else{
                    valid = true;
                }
            }
            valid = false;

            while (valid == false) // validate columm
            {
                cout << "Enter column: ";
                cin >> column;

                if (cin.fail()){
                    cout << "Invalid input.\n";
                    cin.clear();
                    cin.ignore(10, '\n');
                }
                else if (column > 3 || column < 1){
                    cout << "Invalid input.\n";
                }
                else{
                    valid = true;
                }
            }
            
            if (marks[row - 1][column - 1] != ""){ // checks if something is in that position
                open = false;
                cout << "Invalid position.\n";
            }
            else{
                open = true;
            }
        }
        
        if ((turn % 2) == 0){       // even turns are O
            marks[row - 1][column -1] = "O";
            turnSymbol = "O";
        }
        else{                      // odd turns are X
            marks[row - 1][column - 1] = "X";
            turnSymbol = "X";
        }
        turn++;

        // sets mark positions to positions on the board
        board[0][0] = marks[0][0];
        board[0][2] = marks[0][1];
        board[0][4] = marks[0][2];

        board[2][0] = marks[1][0];
        board[2][2] = marks[1][1];
        board[2][4] = marks[1][2];

        board[4][0] = marks[2][0];
        board[4][2] = marks[2][1];
        board[4][4] = marks[2][2];
        
        // prints board
        for (int i = 0; i < 5; i++) //rows
        {
            for (int j = 0; j < 5; j++) // columns
                {
                    cout << board[i][j];
                }
            cout << endl;
        }

        // win conditions
        if (marks[0][0] == turnSymbol && marks[0][1] == turnSymbol && marks[0][2] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
        if (marks[0][0] == turnSymbol && marks[1][0] == turnSymbol && marks[2][0] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
        if (marks[0][0] == turnSymbol && marks[1][1] == turnSymbol && marks[2][2] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
        if (marks[0][2] == turnSymbol && marks[1][2] == turnSymbol && marks[2][2] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
        if (marks[0][2] == turnSymbol && marks[1][1] == turnSymbol && marks[2][0] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
        if (marks[2][0] == turnSymbol && marks[2][1] == turnSymbol && marks[2][2] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
        if (marks[1][0] == turnSymbol && marks[1][1] == turnSymbol && marks[1][2] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
        if (marks[0][1] == turnSymbol && marks[1][1] == turnSymbol && marks[2][1] == turnSymbol){
            cout << turnSymbol << " wins." << endl;
            win = true;
        }
    }
}
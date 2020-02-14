/**
Lucas Webb, Rebecca Carr
PE 4
This program is a fun and exciting Tic Tac Toe game
*/

#include <vector>
using namespace std;

vector<vector<int> > CreateBoard(){
    vector<vector<int> > board{{0, 0 , 0}, {0, 0 , 0}, {0, 0 ,0}};
    return board;
}

void DisplayBoard(vector<vector<int> > board){
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            switch(board[i][j]){
                case 0: cout << "~";
                case 1: cout << "X";
                case 2: cout << "O";
                default: break;
            }
        }
        cout << endl;
    }
}

int main(){
    vector<vector<int> > board = CreateBoard();
    return 1;
}
/**
Lucas Webb, Rebecca Carr
PE 4
This program is a fun and exciting Tic Tac Toe game
*/

#include <vector>
#include <iostream>
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
                    break;
                case 1: cout << "X";
                    break;
                case 2: cout << "O";
                    break;
                default: break;
            }
        }
        cout << endl;
    }
}

int GetPlayerChoice(){
  cout << "Where would you like to move?(Enter a number 0 - 8)" << endl;
  string user_response;
  getline(cin,user_response);
  return stoi(user_response);
}
    
void PlaceMarker(int location, int mark, vector<vector<int> > &board){
    int i = location / 3;
    int j = location % 3;
    board[i][j] = mark;
}

int main(){
    vector<vector<int> > board = CreateBoard();

    for(int i = 0; i < 9; i++){
        int marker;
        DisplayBoard(board);
        int move = GetPlayerChoice();
        if(i%2){
            marker = 1;
        } else {
            marker = 2;
        }
        PlaceMarker(move, marker, board);
    }
    DisplayBoard(board);
    return 1;
}

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

// prints the board
void DisplayBoard(vector<vector<int>> board)
{
  for(int i = 0; i < 3; i++)
  {
    for(int j = 0; j < 3; j++)
    {
      cout << board[i][j] << " ";
    }
    cout << endl;
  }
}

int main(){
    vector<vector<int> > board = CreateBoard();
    return 1;
}

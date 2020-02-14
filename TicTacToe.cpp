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

int main(){
    vector<vector<int> > board = CreateBoard();
    return 1;
}
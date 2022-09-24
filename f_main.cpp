#include <iostream>
#include<vector>
#include<cstdio>
#include<ctime>
#include<stdio.h>   
#include<stdlib.h>
#include<time.h>
using namespace std;

bool checkWinner(vector<string> board[], string playerO, string playerX) {
    if (board[0] == playerO && board[1] == playerO && board[2] == playerO || board[3] == playerO && board[4] == playerO && board[5] == playerO || board[6] == playerO && board[7] == playerO && board[8] == playerO || board[0] == playerO && board[3] == playerO && board[6] == playerO || board[1] == playerO && board[4] == playerO && board[7] == playerO || board[2] == playerO && board[5] == playerO && board[8] == playerO || board[0] == playerO && board[4] == playerO && board[8] == playerO || board[2] == playerO && board[4] == playerO && board[7] == playerO || board[2] == playerO && board[4] == playerO && board[6] == playerO)
    {
        return true;
    }
    else if (board[0] == playerX && board[1] == playerX && board[2] == playerX || board[3] == playerX && board[4] == playerX && board[5] == playerX || board[6] == playerX && board[7] == playerX && board[8] == playerX || board[0] == playerX && board[3] == playerX && board[6] == playerX || board[1] == playerX && board[4] == playerX && board[7] == playerX || board[2] == playerX && board[5] == playerX && board[8] == playerX || board[0] == playerX && board[4] == playerX && board[8] == playerX || board[2] == playerX && board[4] == playerX && board[7] == playerX || board[2] == playerX && board[4] == playerX && board[6] == playerX)
    {
        return true;
    }
    else
    {
        return false;
    }

}

/*bool checkWinnerO(bool m){

  if(board[0]==playerO && board[1]==playerO && board[2]==playerO || board[3]==playerO && board[4]==playerO && board[5]==playerO || board[6]==playerO && board[7]==playerO && board[8]==playerO || board[0]==playerO && board[3]==playerO && board[6]==playerO || board[1]==playerO && board[4]==playerO && board[7]==playerO ||board[2]==playerO && board[5]==playerO && board[8]==playerO || board[0]==playerO && board[4]==playerO && board[8]==playerO || board[2]==playerO && board[4]==playerO && board[7]==playerO)
  {
    return true;
  }
  else
  {
    return false;
  }
}*/

void draw(vector<string> board) {
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << " \n";
    std::cout << "--- --- ---\n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << " \n";
    std::cout << "--- --- ---\n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << " \n";
}


void playerXmove(vector<string> board, string playerX, int pXmove, bool Xhadturn) {
    Xhadturn = true;
    switch (pXmove) {
    case 1: board[0] = playerX; draw(board[0]); break;
    case 2: board[1] = playerX; draw(board[1]); break;
    case 3: board[2] = playerX; draw(board[2]); break;
    case 4: board[3] = playerX; draw(board[3]); break;
    case 5: board[4] = playerX; draw(board[4]); break;
    case 6: board[5] = playerX; draw(board[5]); break;
    case 7: board[6] = playerX; draw(board[6]); break;
    case 8: board[7] = playerX; draw(board[7]); break;
    case 9: board[8] = playerX; draw(board[8]); break;
    default: cout << "Invalid Input.\n"; draw(board[1]); break;
    }
}

void playerOmove(vector<string> board, string playerO, int pOmove, bool Xhadturn) {
    Xhadturn = false;
    switch (pOmove)
    {
    case 1: board[0] = playerO; draw(board[0]); break;
    case 2: board[1] = playerO; draw(board[1]); break;
    case 3: board[2] = playerO; draw(board[2]); break;
    case 4: board[3] = playerO; draw(board[3]); break;
    case 5: board[4] = playerO; draw(board[4]); break;
    case 6: board[5] = playerO; draw(board[5]); break;
    case 7: board[6] = playerO; draw(board[6]); break;
    case 8: board[7] = playerO; draw(board[7]); break;
    case 9: board[8] = playerO; draw(board[8]); break;
    default: cout << "Invalid Input.\n"; draw(board[2]); break;
    }
}

void endgame(vector<string> board, string playerX, string playerO) {
    if (board[0] == playerX && board[1] == playerX && board[2] == playerX || board[3] == playerX && board[4] == playerX && board[5] == playerX || board[6] == playerX && board[7] == playerX && board[8] == playerX || board[0] == playerX && board[3] == playerX && board[6] == playerX || board[1] == playerX && board[4] == playerX && board[7] == playerX || board[2] == playerX && board[5] == playerX && board[8] == playerX || board[0] == playerX && board[4] == playerX && board[8] == playerX || board[2] == playerX && board[4] == playerX && board[7] == playerX || board[2] == playerX && board[4] == playerX && board[6] == playerX)
    {
        cout << "Player X wins\n";
    }
    else if (board[0] == playerO && board[1] == playerO && board[2] == playerO || board[3] == playerO && board[4] == playerO && board[5] == playerO || board[6] == playerO && board[7] == playerO && board[8] == playerO || board[0] == playerO && board[3] == playerO && board[6] == playerO || board[1] == playerO && board[4] == playerO && board[7] == playerO || board[2] == playerO && board[5] == playerO && board[8] == playerO || board[0] == playerO && board[4] == playerO && board[8] == playerO || board[2] == playerO && board[4] == playerO && board[7] == playerO || board[2] == playerO && board[4] == playerO && board[6] == playerO)
    {
        cout << "Player O wins\n";
    }
    else
    {
        cout << "Nobody wins\n";
    }
}

void starttimer(int delay) //starts a timer
{
    delay *= CLOCKS_PER_SEC;
    clock_t now = clock();
    while (clock() - now < delay);
}

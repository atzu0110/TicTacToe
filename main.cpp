#include <iostream>
#include<vector>
#include<cstdio>
#include<ctime>
#include<stdio.h>   
#include<stdlib.h>
#include<time.h>
using namespace std;
#include "main.h"
#include "f_main.cpp"
using namespace std;

int main()
{
    vector<string> board = { "1","2","3","4","5","6","7","8","9" };
    string playerX = "X", playerO = "O";
    int moves_left = 0;
    int pXmove, pOmove;
    bool Winner = false;
    bool Xhadturn = false;

        while (moves_left != 9)
        {
            checkWinner(board, playerO, playerX);
            if (!Xhadturn && !Winner)
            {
                Xhadturn = true;
                cout << "Player X make your turn\n";
                cin >> pXmove;
                playerXmove(board, playerX, pXmove, Xhadturn);
            }
            else if (Xhadturn && !Winner)
            {
                cout << "Player O make your turn\n";
                cin >> pOmove;
                playerOmove(board, playerO, pOmove, Xhadturn);
            }
            moves_left++;
        }
        endgame(board, playerX, playerO);
        starttimer(10);
        return 0;
}

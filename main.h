#pragma once
#include<iostream>
#include<vector>
#include<cstdio>
#include<ctime>
#include<stdio.h>   
#include<stdlib.h>
#include<time.h>
using namespace std;

bool checkWinner(vector<string> board, string playerO, string playerX);
void draw(vector<string> board);
void playerXmove(vector<string> board[], string playerX, int pXmove, bool Xhadturn);
void playerOmove(vector<string> board[], string playerO, int pOmove, bool Xhadturn);
void endgame(vector<string> board[], string playerX, string playerO);
void starttimer(int delay);

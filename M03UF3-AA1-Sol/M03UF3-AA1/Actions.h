#pragma once

bool PlaceToken(char board[HOR][VER], bool playerX);
bool IsGameOver(char board[HOR][VER], bool playerX); 
void SaveGame(char board[HOR][VER]);
void LoadGame(char board[HOR][VER]);
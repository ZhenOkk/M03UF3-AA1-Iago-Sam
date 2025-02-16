#pragma once

void PlaceToken(char board[SIZE][SIZE]);
void PlaceTokenIA(char board[SIZE][SIZE]);
bool SaveGame(char board[SIZE][SIZE], std::string filename);
bool LoadGame(char board[SIZE][SIZE], std::string filename);
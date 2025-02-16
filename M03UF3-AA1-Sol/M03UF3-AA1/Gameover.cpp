#include "Dictionary.h"

//bool isWin(char board[SIZE][SIZE], bool playerX) {
//
//}

bool IsFull(char board[SIZE][SIZE]) {
	short count = 0;
	for (short y = 0; y < SIZE; y++) {
		for (short x = 0; x < SIZE; x++) { if (board[y][x] == BOX) { count++; } }
	}
	if (count == SIZE * SIZE) {
		std::cout << "\nTablero lleno, GAMEOVER";
		return true;
	}
	return false;
}

void IsGameOver(char board[SIZE][SIZE]) {

}
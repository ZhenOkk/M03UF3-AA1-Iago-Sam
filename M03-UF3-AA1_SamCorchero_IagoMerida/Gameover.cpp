#include "Dictionary.h"

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

bool IsGameOver(char board[SIZE][SIZE]) {
	for (int i = 0; i < SIZE; i++) {
		if (board[i][0] == CROSS && board[i][1] == CROSS && board[i][2] == CROSS) return true;
		if (board[0][i] == CROSS && board[1][i] == CROSS && board[2][i] == CROSS) return true;
	}
	if (board[0][0] == CROSS && board[1][1] == CROSS && board[2][2] == CROSS) return true;
	if (board[0][2] == CROSS && board[1][1] == CROSS && board[2][0] == CROSS) return true;

	for (int i = 0; i < SIZE; i++) {
		if (board[i][0] == CIRCLE && board[i][1] == CIRCLE && board[i][2] == CIRCLE) return true;
		if (board[0][i] == CIRCLE && board[1][i] == CIRCLE && board[2][i] == CIRCLE) return true;
	}
	if (board[0][0] == CIRCLE && board[1][1] == CIRCLE && board[2][2] == CIRCLE) return true;
	if (board[0][2] == CIRCLE && board[1][1] == CIRCLE && board[2][0] == CIRCLE) return true;
	return false;
}
#include "Dictionary.h"
#include "Prints.h"

void main() {
	char board[HOR][VER];
	bool gameOver = false;
	PrintTitle();
	PrintLogic(board);

	while (!gameOver) {
		PrintBoard(board);
	}
}
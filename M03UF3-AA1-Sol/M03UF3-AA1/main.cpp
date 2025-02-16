#include "Dictionary.h"
#include "Prints.h"
#include "Actions.h"
#include "Gameover.h"

void main() {
	char board[SIZE][SIZE];
	bool gameOver = false;

	PrintLogic(board);
	short input = 0;
	gameOver = PrintTitle(board, input);

	std::string filename;

	while (!gameOver) {
		bool correctAnswer = false;
		while (!correctAnswer) {
			system("cls"); 
			PrintBoard(board);
			std::cout << "\n\t[1] - Place token.\n\t[2] - Save game.\n\t[3] - Title screen.\n\n\t";
			std::cin >> input;
			switch (input) {
			case 1:
				PlaceToken(board);
				gameOver = IsFull(board);

				PlaceTokenIA(board);
				gameOver = IsFull(board);
				//gameOver = isWin(board, playerX);
				correctAnswer = true;
				break;
			case 2:
				std::cout << "\nName? -> ";
				std::cin >> filename;
				filename = filename + EXT;
				SaveGame(board, filename);
				correctAnswer = true;
				break;
			case 3:
				gameOver = PrintTitle(board, input);
				correctAnswer = true;
				break;
			default:
				std::cout << "\nPlease choose a correct answer.\n\n";
				break;
			}
		}
	}
}
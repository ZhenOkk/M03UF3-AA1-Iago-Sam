#include "Dictionary.h"
#include "Prints.h"
#include "Actions.h"

void main() {
	char board[HOR][VER];
	bool gameOver = false;
	bool playerX = true;

	PrintLogic(board);
	short input = 0;
	gameOver = PrintTitle(input);

	while (!gameOver) {
		bool correctAnswer = false;
		while (!correctAnswer) {
			system("cls"); 
			PrintBoard(board);
			std::cout << "\n\t[1] - Place token.\n\t[2] - Save game.\n\t[3] - Title screen.\n\n\t";
			std::cin >> input;
			switch (input) {
			case 1:
				playerX = PlaceToken(board, playerX);
				correctAnswer = true;
				break;
			case 2:
				correctAnswer = true;
				break;
			case 3:
				gameOver = PrintTitle(input);
				correctAnswer = true;
				break;
			default:
				std::cout << "\nPlease choose a correct answer.\n\n";
				break;
			}
		}
	}
}
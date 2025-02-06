#include "Dictionary.h"
#include "Prints.h"

void main() {
	char board[HOR][VER];
	bool gameOver = false;
	
	PrintLogic(board);

	while (!gameOver) {
		short input = 0;
		bool exit;
		exit = PrintTitle(input);
		
		PrintBoard(board);
		std::cout << "\nOptions:\n[1] - ";
		std::cin >> input;
		switch (input) {
			case 1:
				break;
			default:
				break;
		}
		
		
		
		

		short inputY = 0;
		short inputX = 0;

		std::cout << "\nRow --> ";
		std::cin >> inputX;
		std::cout << "\nColumn --> ";
		std::cin >> inputY;

	}
}
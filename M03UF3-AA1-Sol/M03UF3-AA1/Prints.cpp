#include "Dictionary.h"
#include "Actions.h"

bool PrintTitle(char board[SIZE][SIZE], short input) {
	system("cls");
	//Printear título
	std::cout << " _____ _         _____             _____         \n";
	std::cout << "|_   _|_|___ ___|_   _|___ ___ ___|_   _|___ ___ \n";
	std::cout << "  | | | |  _|___| | | | .'|  _|___| | | | . | -_|\n";
	std::cout << "  |_| |_|___|     |_| |__,|___|     |_| |___|___|\n";
	
	//Printear menú
	std::cout << "\n\t[1] - New game.\n\t[2] - Load game.\n\t[3] - Exit.\n\n\t";
	bool correctAnswer = false;
	std::string filename;
	while (!correctAnswer) {
		std::cin >> input;
		switch (input) {
		case 1:
			correctAnswer = true;
			return false;
			break;
		case 2:
			std::cout << "\nName? -> ";
			std::cin >> filename;
			filename = filename + EXT;
			correctAnswer = LoadGame(board, filename);
			return false;
			break;
		case 3:
			correctAnswer = true;
			return true;
			break;
		default:
			std::cout << "\nPlease choose a correct answer.\n\n";
			break;
		}
	}
	
	system("cls");
	
}
void PrintLogic(char board[SIZE][SIZE]) {
	//Logica tablero
	for (short i = 0; i < SIZE; i++) {
		for (short j = 0; j < SIZE; j++) {
			board[i][j] = BOX;
		}
	}
}

void PrintBoard(char board[SIZE][SIZE]) {
	//Impresion Tablero
	for (short i = 0; i < SIZE; i++) {
		std::cout << H_LINE;
		std::cout << std::endl;
		std::cout << V_LINE << ' ';
		for (short j = 0; j < SIZE; j++) {
				std::cout << board[i][j];
				std::cout << ' ' << V_LINE << ' ';
		} 
		if (i == SIZE -1) {
			std::cout << std::endl;
			std::cout << H_LINE;
		}
		std::cout << std::endl;
	}
}
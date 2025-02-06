#include "Dictionary.h"

bool PrintTitle(short input) {
	system("cls");
	//Printear título
	std::cout << " _____ _         _____             _____         \n";
	std::cout << "|_   _|_|___ ___|_   _|___ ___ ___|_   _|___ ___ \n";
	std::cout << "  | | | |  _|___| | | | .'|  _|___| | | | . | -_|\n";
	std::cout << "  |_| |_|___|     |_| |__,|___|     |_| |___|___|\n";
	
	//Printear menú
	std::cout << "\n\t[1] - Nova partida.\n\t[2] - Carregar partida.\n\t[3] - Sortir.\n\n\t";
	bool correctAnswer = false;
	while (!correctAnswer) {
		std::cin >> input;
		switch (input) {
		case 1:
			correctAnswer = true;
			break;
		case 2:
			correctAnswer = true;
			break;
		case 3:
			correctAnswer = true;
			return 3;
		default:
			std::cout << "\nPlease choose a correct answer.\n\n";
			break;
		}
	}
	
	system("cls");
	
}
void PrintLogic(char board[HOR][VER]) {
	//Logica tablero
	for (short i = 0; i < HOR; i++) {
		for (short j = 0; j < VER; j++) {
			board[i][j] = BOX;
		}
	}
}

void PrintBoard(char board[HOR][VER]) {
	//Impresion Tablero
	for (short i = 0; i < HOR; i++) {
		std::cout << H_LINE;
		std::cout << std::endl;
		std::cout << V_LINE << ' ';
		for (short j = 0; j < VER; j++) {
				std::cout << board[i][j];
				std::cout << ' ' << V_LINE << ' ';
		} 
		if (i == HOR -1) {
			std::cout << std::endl;
			std::cout << H_LINE;
		}
		std::cout << std::endl;
	}
}
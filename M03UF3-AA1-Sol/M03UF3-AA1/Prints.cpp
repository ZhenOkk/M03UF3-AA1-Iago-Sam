#include "Dictionary.h"

void PrintTitle() {
	std::cout << " _____ _         _____             _____         \n";
	std::cout << "|_   _|_|___ ___|_   _|___ ___ ___|_   _|___ ___ \n";
	std::cout << "  | | | |  _|___| | | | .'|  _|___| | | | . | -_|\n";
	std::cout << "  |_| |_|___|     |_| |__,|___|     |_| |___|___|\n";
	std::cout << "\nPress enter to start\n";

	//Limpia la pantalla si presiona Enter:
	std::cin.get();
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
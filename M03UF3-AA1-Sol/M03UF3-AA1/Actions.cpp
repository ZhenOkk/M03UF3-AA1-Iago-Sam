#include "Dictionary.h"
#include "Prints.h"

bool PlaceToken(char board[HOR][VER], bool playerX){
	short inputY = 0;
	short inputX = 0;
	char playerChar = (playerX) ? CROSS : CIRCLE;
	bool posCorrecta = false;

	//mientras no se haya escogido una posición correcta - while:
	while (!posCorrecta) {
		std::cout << "Turn of player [" << playerChar << "]" << std::endl;
		std::cout << "\nRow --> "; 
		std::cin >> inputX;
		std::cout << "\nColumn --> ";
		std::cin >> inputY;
		char token = board[inputX - 1][inputY - 1];

		//si se selecciona fuera de los límites o ya hay una pieza en ella - if:
		if (token == BOX) { posCorrecta = true; }
		system("cls");
		PrintBoard(board);
		std::cout << "\nIncorrect position, there's a [" << token << "] blocking the way\n"; 
	}

	//Updates position with the new token depending the player - (playerX)?:
	board[inputX - 1][inputY - 1] = (playerX) ? CROSS : CIRCLE;

	//Changes player's turn - return:
	if (playerX) return false;
	return true;
}

bool IsGameOver(char board[HOR][VER], bool playerX) {

}

void SaveGame(char board[HOR][VER]) {

}
void LoadGame(char board[HOR][VER]) {

}
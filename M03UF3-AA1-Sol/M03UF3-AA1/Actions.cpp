#include "Dictionary.h"
#include "Prints.h"

void PlaceToken(char board[SIZE][SIZE]){
	short inputY = 0;
	short inputX = 0;
	char playerChar = CROSS;
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
	board[inputX - 1][inputY - 1] = CROSS;

}

void PlaceTokenIA(char board[SIZE][SIZE]) {
	srand(time(NULL));
	short inputY = 0;
	short inputX = 0;
	char playerChar = CROSS;
	bool posCorrecta = false;

	//mientras no se haya escogido una posición correcta - while:
	std::cout << "Turn of player [" << playerChar << "]" << std::endl;
	while (!posCorrecta) {
		inputX = rand() % SIZE + 1;
		inputY = rand() % SIZE + 1;

		char token = board[inputX - 1][inputY - 1];

		//si se selecciona fuera de los límites o ya hay una pieza en ella - if:
		if (token == BOX) { posCorrecta = true;	}
		system("cls");
		PrintBoard(board);
	}

	//Updates position with the new token depending the player - (playerX)?:
	board[inputX - 1][inputY - 1] = CIRCLE;
}

bool SaveGame(char board[SIZE][SIZE], std::string filename) {
	std::ofstream file(filename);
	if (file.is_open()) {
		std::cout << "No se pudo cargar/encontrar la partida.\n";
		return false;
	}
	for (int i = 0; i < SIZE; i++) {
		for (int j = 0; j < SIZE; j++) file << board[i][j];
		file << '\n';
	}
	std::cout << "Partida guardada en " << filename << "\n";
	file.close();
	return true;
}

bool LoadGame(char board[SIZE][SIZE], std::string filename) {
	std::ifstream file(filename);
	if (file) {
		std::cout << "No se pudo cargar/encontrar la partida.\n";
		return false;
	}
	for (int i = 0; i < SIZE; i++)
		for (int j = 0; j < SIZE; j++)
			file >> board[i][j];
	file.close();
	std::cout << "Partida cargada desde " << filename << "\n";
	return true;
}
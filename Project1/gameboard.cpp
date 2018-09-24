#include "gameboard.h"

GameBoard::GameBoard() {
	construct_board();
}


GameBoard::~GameBoard() {

}

void GameBoard::construct_board() {
	//0 = red, 1 = purple, 2 = yellow, 3 = blue, 4 = orange, 5 = green, 6 = pink

	GameTile* temp_0 = new GameTile(0, 0, 0);
	GameTile* temp_1 = new GameTile(1, 0, 0);
	GameTile* temp_2 = new GameTile(2, 0, 0);
	GameTile* temp_3 = new GameTile(3, 0, 0);
	GameTile* temp_4 = new GameTile(4, 0, 0);
	GameTile* temp_5 = new GameTile(5, 0, 0);
	GameTile* temp_6 = new GameTile(0, 0, 0);
	GameTile* temp_7 = new GameTile(1, 0, 0);
	GameTile* temp_8 = new GameTile(6, 0, 0);

	
	board.push_back(temp_0);
	board.push_back(temp_1);
	board.push_back(temp_2);
	board.push_back(temp_3);
	board.push_back(temp_4);
	board.push_back(temp_5);
	board.push_back(temp_6);
	board.push_back(temp_7);
	board.push_back(temp_8);

	std::cout << "\n\n";
	for (int i = 0; i < board.size(); i++) {
		std::cout << "Board Spot " << i << ": " << board.at(i)->get_color() << std::endl << std::endl;
	}
}

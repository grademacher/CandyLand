#include "gameboard.h"

GameBoard::GameBoard() {
	construct_board();
}


GameBoard::~GameBoard() {

}

void GameBoard::construct_board() {
	//0 = red, 1 = purple, 2 = yellow, 3 = blue, 4 = orange, 5 = green | special case ---> 6 = pink

	//section 1
	GameTile* temp_0 = new GameTile(0, 0, 0);
	GameTile* temp_1 = new GameTile(1, 0, 0);
	GameTile* temp_2 = new GameTile(2, 0, 0);
	GameTile* temp_3 = new GameTile(3, 0, 0);
	GameTile* temp_4 = new GameTile(4, 58, 0); //warp tile
	GameTile* temp_5 = new GameTile(5, 0, 0);

	board.push_back(temp_0);
	board.push_back(temp_1);
	board.push_back(temp_2);
	board.push_back(temp_3);
	board.push_back(temp_4);
	board.push_back(temp_5);

	//section 2	
	GameTile* temp_6 = new GameTile(0, 0, 0);
	GameTile* temp_7 = new GameTile(1, 0, 0);
	GameTile* temp_8 = new GameTile(6, 0, 0); //gingerbread man
	GameTile* temp_9 = new GameTile(2, 0, 0);
	GameTile* temp_10 = new GameTile(3, 0, 0);
	GameTile* temp_11 = new GameTile(4, 0, 0);
	GameTile* temp_12 = new GameTile(5, 0, 0);

	board.push_back(temp_6);
	board.push_back(temp_7);
	board.push_back(temp_8);
	board.push_back(temp_9);
	board.push_back(temp_10);
	board.push_back(temp_11);
	board.push_back(temp_12);

	//section 3
	GameTile* temp_13 = new GameTile(0, 0, 0);
	GameTile* temp_14 = new GameTile(1, 0, 0);
	GameTile* temp_15 = new GameTile(2, 0, 0);
	GameTile* temp_16 = new GameTile(3, 0, 0);
	GameTile* temp_17 = new GameTile(4, 0, 0);
	GameTile* temp_18 = new GameTile(5, 0, 0);
	GameTile* temp_19 = new GameTile(6, 0, 0); //candy cane

	board.push_back(temp_13);
	board.push_back(temp_14);
	board.push_back(temp_15);
	board.push_back(temp_16);
	board.push_back(temp_17);
	board.push_back(temp_18);
	board.push_back(temp_19);

	//section 4
	GameTile* temp_20 = new GameTile(0, 0, 0);
	GameTile* temp_21 = new GameTile(1, 0, 0);
	GameTile* temp_22 = new GameTile(2, 0, 0);
	GameTile* temp_23 = new GameTile(3, 0, 0);
	GameTile* temp_24 = new GameTile(4, 0, 0);
	GameTile* temp_25 = new GameTile(5, 0, 0);

	board.push_back(temp_20);
	board.push_back(temp_21);
	board.push_back(temp_22);
	board.push_back(temp_23);
	board.push_back(temp_24);
	board.push_back(temp_25);

	//section 5
	GameTile* temp_26 = new GameTile(0, 0, 0);
	GameTile* temp_27 = new GameTile(1, 0, 0);
	GameTile* temp_28 = new GameTile(2, 0, 0);
	GameTile* temp_29 = new GameTile(3, 0, 0);
	GameTile* temp_30 = new GameTile(4, 0, 0);
	GameTile* temp_31 = new GameTile(5, 0, 0);

	board.push_back(temp_26);
	board.push_back(temp_27);
	board.push_back(temp_28);
	board.push_back(temp_29);
	board.push_back(temp_30);
	board.push_back(temp_31);

	//section 6
	GameTile* temp_32 = new GameTile(0, 0, 0);
	GameTile* temp_33 = new GameTile(1, 0, 0);
	GameTile* temp_34 = new GameTile(2, 44, 0); //warp tile
	GameTile* temp_35 = new GameTile(3, 0, 0);
	GameTile* temp_36 = new GameTile(4, 0, 0);
	GameTile* temp_37 = new GameTile(5, 0, 0);

	board.push_back(temp_32);
	board.push_back(temp_33);
	board.push_back(temp_34);
	board.push_back(temp_35);
	board.push_back(temp_36);
	board.push_back(temp_37);

	//section 7
	GameTile* temp_38 = new GameTile(0, 0, 0);
	GameTile* temp_39 = new GameTile(1, 0, 0);
	GameTile* temp_40 = new GameTile(2, 0, 0);
	GameTile* temp_41 = new GameTile(6, 0, 0); //gumdrop
	GameTile* temp_42 = new GameTile(3, 0, 0);
	GameTile* temp_43 = new GameTile(4, 0, 0);
	GameTile* temp_44 = new GameTile(5, 0, 0);

	board.push_back(temp_38);
	board.push_back(temp_39);
	board.push_back(temp_40);
	board.push_back(temp_41);
	board.push_back(temp_42);
	board.push_back(temp_43);
	board.push_back(temp_44);

	//section 8
	GameTile* temp_45 = new GameTile(0, 0, 1); //turn loss
	GameTile* temp_46 = new GameTile(1, 0, 0);
	GameTile* temp_47 = new GameTile(2, 0, 0);
	GameTile* temp_48 = new GameTile(3, 0, 0);
	GameTile* temp_49 = new GameTile(4, 0, 0);
	GameTile* temp_50 = new GameTile(5, 0, 0);

	board.push_back(temp_45);
	board.push_back(temp_46);
	board.push_back(temp_47);
	board.push_back(temp_48);
	board.push_back(temp_49);
	board.push_back(temp_50);












	std::cout << "\n\n";
	for (int i = 0; i < board.size(); i++) {
		//add in id assignment here
		std::cout << "Board Spot " << i << ": " << board.at(i)->get_color() << std::endl << std::endl;
	}
}
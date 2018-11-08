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

	//section 9
	GameTile* temp_51 = new GameTile(0, 0, 0);
	GameTile* temp_52 = new GameTile(1, 0, 0);
	GameTile* temp_53 = new GameTile(2, 0, 0);
	GameTile* temp_54 = new GameTile(3, 0, 0);
	GameTile* temp_55 = new GameTile(4, 0, 0);
	GameTile* temp_56 = new GameTile(5, 0, 0);

	board.push_back(temp_51);
	board.push_back(temp_52);
	board.push_back(temp_53);
	board.push_back(temp_54);
	board.push_back(temp_55);
	board.push_back(temp_56);

	//section 10
	GameTile* temp_57 = new GameTile(0, 0, 0);
	GameTile* temp_58 = new GameTile(1, 0, 0);
	GameTile* temp_59 = new GameTile(2, 0, 0);
	GameTile* temp_60 = new GameTile(3, 0, 0);
	GameTile* temp_61 = new GameTile(4, 0, 0);
	GameTile* temp_62 = new GameTile(5, 0, 0);

	board.push_back(temp_57);
	board.push_back(temp_58);
	board.push_back(temp_59);
	board.push_back(temp_60);
	board.push_back(temp_61);
	board.push_back(temp_62);

	//section 11
	GameTile* temp_63 = new GameTile(0, 0, 0);
	GameTile* temp_64 = new GameTile(1, 0, 0);
	GameTile* temp_65 = new GameTile(2, 0, 0);
	GameTile* temp_66 = new GameTile(3, 0, 0);
	GameTile* temp_67 = new GameTile(4, 0, 0);
	GameTile* temp_68 = new GameTile(6, 0, 0); //peanut
	GameTile* temp_69 = new GameTile(5, 0, 0);

	board.push_back(temp_63);
	board.push_back(temp_64);
	board.push_back(temp_65);
	board.push_back(temp_66);
	board.push_back(temp_67);
	board.push_back(temp_68);
	board.push_back(temp_69);

	//section 12
	GameTile* temp_70 = new GameTile(0, 0, 0);
	GameTile* temp_71 = new GameTile(1, 0, 0);
	GameTile* temp_72 = new GameTile(2, 0, 0);
	GameTile* temp_73 = new GameTile(3, 0, 0);
	GameTile* temp_74 = new GameTile(4, 0, 0);
	GameTile* temp_75 = new GameTile(5, 0, 0);

	board.push_back(temp_70);
	board.push_back(temp_71);
	board.push_back(temp_72);
	board.push_back(temp_73);
	board.push_back(temp_74);
	board.push_back(temp_75);

	//section 13
	GameTile* temp_76 = new GameTile(0, 0, 0);
	GameTile* temp_77 = new GameTile(1, 0, 0);
	GameTile* temp_78 = new GameTile(2, 0, 0);
	GameTile* temp_79 = new GameTile(3, 0, 0);
	GameTile* temp_80 = new GameTile(4, 0, 0);
	GameTile* temp_81 = new GameTile(5, 0, 0);

	board.push_back(temp_76);
	board.push_back(temp_77);
	board.push_back(temp_78);
	board.push_back(temp_79);
	board.push_back(temp_80);
	board.push_back(temp_81);

	//section 14
	GameTile* temp_82 = new GameTile(0, 0, 0);
	GameTile* temp_83 = new GameTile(1, 0, 0);
	GameTile* temp_84 = new GameTile(2, 0, 0);
	GameTile* temp_85 = new GameTile(3, 0, 1); //turn loss
	GameTile* temp_86 = new GameTile(4, 0, 0);
	GameTile* temp_87 = new GameTile(5, 0, 0);

	board.push_back(temp_82);
	board.push_back(temp_83);
	board.push_back(temp_84);
	board.push_back(temp_85);
	board.push_back(temp_86);
	board.push_back(temp_87);

	//section 15
	GameTile* temp_88 = new GameTile(0, 0, 0);
	GameTile* temp_89 = new GameTile(1, 0, 0);
	GameTile* temp_90 = new GameTile(2, 0, 0);
	GameTile* temp_91 = new GameTile(6, 0, 0); //lollipop
	GameTile* temp_92 = new GameTile(3, 0, 0);
	GameTile* temp_93 = new GameTile(4, 0, 0);
	GameTile* temp_94 = new GameTile(5, 0, 0);

	board.push_back(temp_88);
	board.push_back(temp_89);
	board.push_back(temp_90);
	board.push_back(temp_91);
	board.push_back(temp_92);
	board.push_back(temp_93);
	board.push_back(temp_94);

	//section 16
	GameTile* temp_95 = new GameTile(0, 0, 0);
	GameTile* temp_96 = new GameTile(1, 0, 0);
	GameTile* temp_97 = new GameTile(2, 0, 0);
	GameTile* temp_98 = new GameTile(3, 0, 0);
	GameTile* temp_99 = new GameTile(4, 0, 0);
	GameTile* temp_100 = new GameTile(5, 0, 0);
	GameTile* temp_101 = new GameTile(6, 0, 0); //ice cream

	board.push_back(temp_95);
	board.push_back(temp_96);
	board.push_back(temp_97);
	board.push_back(temp_98);
	board.push_back(temp_99);
	board.push_back(temp_100);
	board.push_back(temp_101);

	//section 17
	GameTile* temp_102 = new GameTile(0, 0, 0);
	GameTile* temp_103 = new GameTile(1, 0, 0);
	GameTile* temp_104 = new GameTile(2, 0, 0);
	GameTile* temp_105 = new GameTile(3, 0, 0);
	GameTile* temp_106 = new GameTile(4, 0, 0);
	GameTile* temp_107 = new GameTile(5, 0, 0);

	board.push_back(temp_102);
	board.push_back(temp_103);
	board.push_back(temp_104);
	board.push_back(temp_105);
	board.push_back(temp_106);
	board.push_back(temp_107);

	//section 18
	GameTile* temp_108 = new GameTile(0, 0, 0);
	GameTile* temp_109 = new GameTile(1, 0, 0);
	GameTile* temp_110 = new GameTile(2, 0, 0);
	GameTile* temp_111 = new GameTile(3, 0, 0);
	GameTile* temp_112 = new GameTile(4, 0, 0);
	GameTile* temp_113 = new GameTile(5, 0, 0);

	board.push_back(temp_108);
	board.push_back(temp_109);
	board.push_back(temp_110);
	board.push_back(temp_111);
	board.push_back(temp_112);
	board.push_back(temp_113);

	//section 19
	GameTile* temp_114 = new GameTile(0, 0, 0);
	GameTile* temp_115 = new GameTile(1, 0, 0);
	GameTile* temp_116 = new GameTile(2, 0, 1); //turn loss
	GameTile* temp_117 = new GameTile(3, 0, 0);
	GameTile* temp_118 = new GameTile(4, 0, 0);
	GameTile* temp_119 = new GameTile(5, 0, 0);

	board.push_back(temp_114);
	board.push_back(temp_115);
	board.push_back(temp_116);
	board.push_back(temp_117);
	board.push_back(temp_118);
	board.push_back(temp_119);

	//section 20
	GameTile* temp_120 = new GameTile(0, 0, 0);
	GameTile* temp_121 = new GameTile(1, 0, 0);
	GameTile* temp_122 = new GameTile(2, 0, 0);
	GameTile* temp_123 = new GameTile(3, 0, 0);
	GameTile* temp_124 = new GameTile(4, 0, 0);
	GameTile* temp_125 = new GameTile(5, 0, 0);

	board.push_back(temp_120);
	board.push_back(temp_121);
	board.push_back(temp_122);
	board.push_back(temp_123);
	board.push_back(temp_123);
	board.push_back(temp_125);

	//section 21
	GameTile* temp_126 = new GameTile(0, 0, 0);
	GameTile* temp_127 = new GameTile(1, 0, 0);
	GameTile* temp_128 = new GameTile(2, 0, 0);
	GameTile* temp_129 = new GameTile(3, 0, 0);
	GameTile* temp_130 = new GameTile(4, 0, 0);
	GameTile* temp_131 = new GameTile(5, 0, 0);

	board.push_back(temp_126);
	board.push_back(temp_127);
	board.push_back(temp_128);
	board.push_back(temp_129);
	board.push_back(temp_130);
	board.push_back(temp_131);

	//section 22
	GameTile* temp_132 = new GameTile(0, 0, 0);

	board.push_back(temp_132);

	//add correct id's to every tile on the board
	for (int i = 0; i < board.size(); i++) {
		board.at(i)->set_id(i);
	}

	
	//instead of adding another tile. Just check if you cannot find the next tile with the card you drew, then you win.

	//add ID for every tile. start from 0. should go to 132. 
	//std::cout << "\n\n";
	//for (int i = 0; i < board.size(); i++) {
		//std::cout << "ID: " << board.at(i)->get_id() << " Board Spot " << i << ": " << board.at(i)->get_color() << std::endl << std::endl;
	//}
}
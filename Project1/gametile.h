#pragma once
#include <iostream>

class GameTile
{
public:
	GameTile(int temp_color, int temp_jump, int temp_turn);
	~GameTile();

	//getter methods
	int get_color();
	int get_jump();
	int get_turn();

private:
	//0 = red, 1 = purple, 2 = yellow, 3 = blue, 4 = orange, 5 = green, 6 = pink
	
	int color;
	int jump;
	int turn_loss;


};

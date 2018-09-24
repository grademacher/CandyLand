#include "gametile.h"

GameTile::GameTile(int temp_color, int temp_jump, int temp_turn) {
	color = temp_color;
	jump = temp_jump;
	turn_loss = temp_turn;
}


GameTile::~GameTile() {

}

/* Getter methods */

int GameTile::get_color() {
	return color;
}

int GameTile::get_jump() {
	return jump;
}

int GameTile::get_turn() {
	return turn_loss;
}

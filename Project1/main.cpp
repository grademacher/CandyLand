
#include <stdio.h>
#include <iostream>
#include "simulation.h"

int main(int argc, const char* argv[])
{
  std::cout << ("\nHello World\n\n");

  //Simulation* sim1 = new Simulation();
  Game* game = new Game(4);
  game->play_game();

  std::getchar();
}



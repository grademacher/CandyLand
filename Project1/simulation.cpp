#include "simulation.h"



Simulation::Simulation()
{
  player_nums = new std::vector<int>();
  player_nums->push_back(2);
  player_nums->push_back(3);
  player_nums->push_back(4);

  trial_nums = new std::vector<int>();
  trial_nums->push_back(1000);

  winning_players = new std::vector<std::vector<int>*>;
  turns_taken = new std::vector<std::vector<int>*>();

  RunSimulation();


}


Simulation::~Simulation()
{
}

void Simulation::RunSimulation() {
  for (int i = 0; i < player_nums->size(); i++) {
    for (int j = 0; j < trial_nums->size(); j++) {
      for (int k = 0; k < trial_nums->at(j); k++) {
        Game* current_game = new Game(player_nums->at(i));
        std::vector<int>* return_vector = current_game->play_game();
        //player_nums->at()->push_back(return_vector->at(0));
        //turns_taken->push_back(return_vector->at(1));
      }
      
    }
  }
}

void Simulation::CalculateStatistics() {

}

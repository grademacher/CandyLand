#include "simulation.h"



Simulation::Simulation()
{
  player_nums = new std::vector<int>();
  player_nums->push_back(2);
  player_nums->push_back(3);
  player_nums->push_back(4);

  trial_nums = new std::vector<int>();
  trial_nums->push_back(1);

  winning_players = new std::vector<std::vector<int>>(3, std::vector<int>(0,0));
  turns_taken = new std::vector<std::vector<int>>(3, std::vector<int>(0, 0));

  RunSimulation();
  CalculateStatistics();

}


Simulation::~Simulation()
{
}

void Simulation::RunSimulation() {
  for (int i = 0; i < player_nums->size(); i++) {
    for (int j = 0; j < trial_nums->size(); j++) {
      for (int k = 0; k < trial_nums->at(j); k++) {
        Game* current_game = new Game(player_nums->at(i));
        std::vector<int> return_vector = current_game->play_game();
        //std::cout << "return vector size: " << return_vector.size();
        turns_taken->at(i).push_back(return_vector.at(0));
        winning_players->at(i).push_back(return_vector.at(1));
      }
      
    }
  }
}

void Simulation::CalculateStatistics() {
  for (int i = 0; i < player_nums->size(); i++) {
    
    for (int j = 0; j < trial_nums->size(); j++) {
      std::vector<int>* win_counts = new std::vector<int>(1000, 0);
      int total_turns_taken = 0;
      for (int k = 0; k < trial_nums->at(j); k++) {
        win_counts->at(winning_players->at(i).at(k) - 1) = win_counts->at(winning_players->at(i).at(k) - 1) + 1;
        total_turns_taken += turns_taken->at(i).at(k);
      }
      std::cout << "total turns : " << total_turns_taken << "\n\n";
      int avg_turns = total_turns_taken / trial_nums->at(j);
      std::cout << "Average Number of turns taken: " << avg_turns << "\n\n";
      for (int l = 0; l < player_nums->at(i); l++) {
        std::cout << "Player " << (l + 1) << " won " << win_counts->at(l) << "\n\n";
      }
    }
  }
}

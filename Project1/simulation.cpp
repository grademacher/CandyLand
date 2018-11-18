#include "simulation.h"
#include "deck.h"
#include "gameboard.h"



Simulation::Simulation()
{
  player_nums = new std::vector<int>();
  player_nums->push_back(2);
  player_nums->push_back(3);
  player_nums->push_back(4);

  trial_nums = new std::vector<int>();
  trial_nums->push_back(1000);
  trial_nums->push_back(10000);
  trial_nums->push_back(100000);
  trial_nums->push_back(1000000);

  winning_players = new std::vector<std::vector<int>>(3, std::vector<int>(0,0));
  turns_taken = new std::vector<std::vector<int>>(3, std::vector<int>(0, 0));

  //create deck
  std::vector<int>* deck = new std::vector<int>();
  deck->push_back(6); //red 1 -- 0
  deck->push_back(4); //red 2 -- 1
  deck->push_back(6); //orange 1 -- 2
  deck->push_back(3); //orange 2 -- 3
  deck->push_back(6); //yellow 1 -- 4
  deck->push_back(4); //yellow 2 -- 5
  deck->push_back(6); //green 1 -- 6
  deck->push_back(3); //green 2 -- 7
  deck->push_back(6); //blue 1 -- 8
  deck->push_back(4); //blue 2 -- 9
  deck->push_back(6); //purple 1 -- 10
  deck->push_back(4); //purple 2 -- 11
  deck->push_back(1); //gingerbread -- 12
  deck->push_back(1); //candycane -- 13
  deck->push_back(1); //gumdrop -- 14
  deck->push_back(1); //peanut -- 15
  deck->push_back(1); //lollypop -- 16
  deck->push_back(1); //icecream -- 17
  my_deck = new Deck(deck);

  //create board
  game_board = new GameBoard();

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
        Game* current_game = new Game(player_nums->at(i), game_board, my_deck);
        std::vector<int> return_vector = current_game->play_game();
        //std::cout << "return vector size: " << return_vector.size();
        turns_taken->at(i).push_back(return_vector.at(1));
        winning_players->at(i).push_back(return_vector.at(0));
        delete current_game;
        my_deck->Shuffle();
        
      }
      
    }
  }
}

void Simulation::CalculateStatistics() {
  for (int j = 0; j < trial_nums->size(); j++) {

    std::cout << "\n\n\n----------------------- " << trial_nums->at(j) << " Trials -----------------------";
    
    for (int i = 0; i < player_nums->size(); i++) {
      
      std::vector<int>* win_counts = new std::vector<int>(player_nums->at(i), 0);
      int total_turns_taken = 0;
      for (int k = 0; k < trial_nums->at(j); k++) {
        win_counts->at(winning_players->at(i).at(k)) = win_counts->at(winning_players->at(i).at(k)) + 1;
        total_turns_taken += turns_taken->at(i).at(k);
      }
      //std::cout << "total turns : " << total_turns_taken << "\n\n";
      int avg_turns = total_turns_taken / trial_nums->at(j);
      std::cout << "\n\n\n---------------- " << player_nums->at(i) << " Players ----------------\n\n";
      std::cout << "Average Number of turns taken: " << avg_turns << "\n\n";
      for (int l = 0; l < player_nums->at(i); l++) {
        std::cout << "Player " << (l + 1) << " won " << win_counts->at(l) << " games (" << (double(win_counts->at(l))/double(trial_nums->at(j)))*100 << "%)." << "\n";
      }
    }
  }
}

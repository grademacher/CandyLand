#pragma once
#include <vector>
#include <iostream>
#include "game.h"


class Simulation
{
public:
  Simulation();
  ~Simulation();


private:
  void RunSimulation();
  void CalculateStatistics();
  std::vector<int>* player_nums;
  std::vector<int>* trial_nums;
  std::vector<std::vector<int>>* turns_taken;
  std::vector<std::vector<int>>* winning_players;
};


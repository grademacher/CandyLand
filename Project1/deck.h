#pragma once
#include <vector>
#include <iostream>
class Deck
{
public:
  Deck(std::vector<int>* deck_layout);
  ~Deck();
  
  int DrawCard();

private:
  int current_idex;

  std::vector<int>* my_deck;

  void Shuffle();
  void Print();

};


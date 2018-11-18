#pragma once
#include <vector>
#include <iostream>
class Deck
{
public:
  Deck(std::vector<int>* deck_layout);
  ~Deck();
  
  int DrawCard();
  void Shuffle();

private:
  int current_idex;

  std::vector<int>* my_deck;

  
  void Print();

};


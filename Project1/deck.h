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
  int total_cards;
  int cards_left;
  int used_cards;

  std::vector<int>* my_deck;
};


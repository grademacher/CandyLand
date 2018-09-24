#include "deck.h"
#include <random>




Deck::Deck(std::vector<int>* deck_layout)
{
  my_deck = new std::vector<int>();
  for (int i = 0; i < deck_layout->size(); i++) {
    for (int j = 0; j < deck_layout->at(i); j++) {
      my_deck->push_back(i);
    }
  }

  //print out the deck
  for (int i = 0; i < my_deck->size(); i++) {
    std::cout << my_deck->at(i);
  }

  //do an in place shuffle on the deck
  for (int i = 0; i < my_deck->size() - 2; i++) {
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 eng(rd()); // seed the generator
    std::uniform_int_distribution<> distr(i, my_deck->size()+1); // define the range

    for (int n = 0; n<40; ++n)
      std::cout << distr(eng) << ' '; // generate numbers

  }

  //print out the deck again
  for (int i = 0; i < my_deck->size(); i++) {
    std::cout << my_deck->at(i);
  }
}


Deck::~Deck()
{
}

int Deck::DrawCard() {
  return 0;
}

#include "deck.h"
#include <random>


Deck::~Deck()
{
}

Deck::Deck(std::vector<int>* deck_layout)
{
  //initialize any private variables
  current_idex = 0;


  //create and populate the deck with cards
  my_deck = new std::vector<int>();
  for (int i = 0; i < deck_layout->size(); i++) {
    for (int j = 0; j < deck_layout->at(i); j++) {
      my_deck->push_back(i);
    }
  }

  //print out the deck
  Print();

  //shuffle the deck
  Shuffle();

  //print out the deck again
  //Print();
}




int Deck::DrawCard() {
  int return_card = my_deck->at(current_idex);
  current_idex++;
  if (current_idex >= my_deck->size()) {
    //suffle the deck
    Shuffle();
    //reset the index to the beginning of the deck
    current_idex = 0;
  }
  return return_card;
}

//do an in place shuffle on the deck using modified Fisher-Yates
void Deck::Shuffle() {
  for (int i = 0; i < my_deck->size() - 2; i++) {
    // obtain a random number from hardware
    std::random_device rd;
    // seed the Mersenne Twister pseudo-random generator
    std::mt19937 eng(rd()); 
    // define the range
    std::uniform_int_distribution<> distr(i, my_deck->size() - 1); 
    //swap the card at i, with the card at the randomly selected index
    std::swap(my_deck->at(i), my_deck->at(distr(eng)));
  }

  Print();
}

void Deck::Print() {
  std::cout << "\n\n";
  for (int i = 0; i < my_deck->size(); i++) {
    std::cout << my_deck->at(i) << " ";
  }
}

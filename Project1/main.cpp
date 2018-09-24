
#include <stdio.h>
#include <iostream>
#include "deck.h"
#include <vector>

int main(int argc, const char* argv[])
{
  std::cout << ("\nHello World\n\n");

  std::vector<int>* test_deck = new std::vector<int>();
  test_deck->push_back(1);
  test_deck->push_back(5);
  test_deck->push_back(2);
  test_deck->push_back(10);
  Deck* my_deck = new Deck(test_deck);
  std::getchar();
}



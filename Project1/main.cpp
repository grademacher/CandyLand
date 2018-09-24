
#include <stdio.h>
#include <iostream>
#include "deck.h"
#include <vector>

int main(int argc, const char* argv[])
{
  std::cout << ("\nHello World\n\n");

  std::vector<int>* test_deck = new std::vector<int>();
  test_deck->push_back(6); //red 1 -- 0
  test_deck->push_back(4); //red 2 -- 1
  test_deck->push_back(6); //orange 1 -- 2
  test_deck->push_back(3); //orange 2 -- 3
  test_deck->push_back(6); //yellow 1 -- 4
  test_deck->push_back(4); //yellow 2 -- 5
  test_deck->push_back(6); //green 1 -- 6
  test_deck->push_back(3); //green 2 -- 7
  test_deck->push_back(6); //blue 1 -- 8
  test_deck->push_back(4); //blue 2 -- 9
  test_deck->push_back(6); //purple 1 -- 10
  test_deck->push_back(4); //purple 2 -- 11
  test_deck->push_back(1); //gingerbread -- 12
  test_deck->push_back(1); //candycane -- 13
  test_deck->push_back(1); //gumdrop -- 14
  test_deck->push_back(1); //peanut -- 15
  test_deck->push_back(1); //lollypop -- 16
  test_deck->push_back(1); //icecream -- 17
  Deck* my_deck = new Deck(test_deck);

  for (int i = 0; i < 100; i++) {
    std::cout << my_deck->DrawCard() << "\n";
  }
  std::getchar();
}



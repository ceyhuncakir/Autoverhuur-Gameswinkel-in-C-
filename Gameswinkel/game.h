#ifndef GAME_H
#define GAME_H

using namespace std;

#include <iostream>
#include <string>

class Game {

private:
  string game;
  int release;
  double price;
public:
  Game(string game, int release, double price);
  int getRelease();
  double getPrice();
  string getGame();
};

#endif

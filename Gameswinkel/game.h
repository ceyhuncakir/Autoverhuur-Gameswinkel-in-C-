#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <string>

class Game {

private:
  std::string game;
  int release;
  double price;
public:
  Game(std::string game, int release, double price);
  int getRelease() const;
  double getPrice() const;
  std::string getGame() const;
};

#endif

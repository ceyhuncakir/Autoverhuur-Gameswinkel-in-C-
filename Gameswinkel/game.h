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

  bool operator==(const Game &other) const {
      return game == other.game && release == other.release && price == other.price;
  }

  friend std::ostream& operator<<(std::ostream& out, const Game& k);
};

#endif

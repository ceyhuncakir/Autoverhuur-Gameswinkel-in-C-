#include <cmath>
#include <string>
#include "game.h"


Game::Game(std::string game, int release, double price):
game(game),
release(release),
price(price)
{}

int Game::getRelease() const {
  return this->release;
}

double Game::getPrice() const {
  return this->price;
}

std::string Game::getGame() const {
  return this->game;
}

std::ostream& operator<<(std::ostream& out, const Game& g){

  time_t current_time;
  current_time = time(NULL);
  int current_year;
  current_year = 1970 + current_time / 31537970;

  double discount = std::pow(0.70, current_year - g.getRelease()) * g.getPrice();

  out << g.getGame() << ", uitgegeven in " << g.getRelease() << "; nieuwprijs: " << g.getPrice() << " nu voor " << discount << std::endl;

  return out;
}

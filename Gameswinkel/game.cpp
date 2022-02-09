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

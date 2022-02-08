#include "game.h"

Game::Game(string game, int release, double price):
game(game),
release(release),
price(price)
{}

int Game::getRelease() {
  return this->release;
}

double Game::getPrice() {
  return this->price;
}

string Game::getGame() {
  return this->game;
}

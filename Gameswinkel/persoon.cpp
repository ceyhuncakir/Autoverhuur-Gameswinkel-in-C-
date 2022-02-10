#include <string>
#include "persoon.h"
#include <cmath>

Persoon::Persoon(std::string name, double money):
name(name),
money(money)
{}

bool Persoon::koop(const Game &game) {

  time_t current_time;
  current_time = time(NULL);
  int current_year;
  current_year = 1970 + current_time / 31537970;

  double discount = std::pow(0.70, current_year - game.getRelease()) * game.getPrice();

  std::vector<Game>::iterator position = std::find(this->boughtgames.begin(), this->boughtgames.end(), game);

  if(this->money > discount && position == this->boughtgames.end()) {
    this->boughtgames.push_back(game);
    this->money = (this->money - discount);
    return true;
  }
  else
  {
    return false;
  }
}

bool Persoon::verkoop(const Game &game, Persoon &persoon) {

  time_t current_time;
  current_time = time(NULL);
  int current_year;
  current_year = 1970 + current_time / 31537970;

  double discount = std::pow(0.70, current_year - game.getRelease()) * game.getPrice();

  std::vector<Game>::iterator position = std::find(this->boughtgames.begin(), this->boughtgames.end(), game);

  if(position != this->boughtgames.end() && persoon.koop(game)) {
    this->money = (this->money + discount);
    this->boughtgames.erase(position);

    std::cout << this->name << " verkoopt " << game.getGame() << " aan " << persoon.name << ":" << " gelukt" << std::endl;
    return true;
  } else {
    std::cout << this->name << " verkoopt " << game.getGame() << " aan " << persoon.name << ":" << " niet gelukt" << std::endl;
    return false;
  }
}

std::ostream& operator<<(std::ostream& out, const Persoon& p){

  out << p.name << " heeft een budget van " << p.money << " en bezit de volgende games:" << std::endl;

  for(auto elem : p.boughtgames) {

    out << elem;
  }

  return out;
}

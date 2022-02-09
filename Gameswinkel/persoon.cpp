#include "persoon.h"

Persoon::Persoon(std::string name, double money):
name(name),
money(money)
{}

void Persoon::getPerson(std::string name) {

  std::string games = " ";

  if(this->boughtgames.empty()) {
    std::cout << this->name << " Heeft een budget van " << this->money << " en bezig de volgende games: \n geen games";
  } else {
    std::cout << "heeft een game";
  }
}

void Persoon::koop(const Game game) {

  std::vector<Game>::iterator position = std::find(this->boughtgames.begin(), this->boughtgames.end(), game);

  if(money >= game.getPrice() && position != this->boughtgames.end()) {
    std::cout << this->name << " koopt " << game.getGame() << ": gelukt";
    this->boughtgames.insert(this->boughtgames.begin(), game);
    this->money = (this->money - game.getPrice());
  }
  else
  {
    std::cout << this->name << " koopt " << game.getGame() << ": niet gelukt";
  }
}

void Persoon::verkoop(const Game game, Persoon persoon) {

  std::vector<Game>::iterator position = std::find(this->boughtgames.begin(), this->boughtgames.end(), game);

  if(persoon.money >= game.getPrice() && position != this->boughtgames.end()) {
    std::cout << this->name << " verkoopt " << game.getGame() << " aan " << persoon.name << ": gelukt";
    persoon.money = (persoon.money - game.getPrice());
    this->money = (this->money + game.getPrice());
    persoon.boughtgames.insert(persoon.boughtgames.begin(), game);

    if (position != this->boughtgames.end())
      this->boughtgames.erase(position);
  } else {
    std::cout << this->name << " verkoopt " << game.getGame() << " aan " << persoon.name << ": niet gelukt";
  }
}

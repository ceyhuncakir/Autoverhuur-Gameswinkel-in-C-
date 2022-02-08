#include <algorithm>
#include "persoon.h"

Persoon::Persoon(string name, double money):
name(name),
money(money)
{}

void Persoon::getPerson(std::string name) {

  string games = " ";

  if(this->boughtgames.empty()) {
    cout << this->name << " Heeft een budget van " << this->money << " en bezig de volgende games: \n geen games";
  } else {
    cout << "heeft een game";
  }
}

void Persoon::koop(Game game) {

  if(money >= game.getPrice() && find(this->boughtgames.begin(), this->boughtgames.end(), game) != this->boughtgames.end()) {
    cout << this->name << " koopt " << game.getGame() << ": gelukt";
    this->boughtgames.insert(this->boughtgames.begin(), game);
    this->money = (this->money - game.getPrice());
  }
  else
  {
    cout << this->name << " koopt " << game.getGame() << ": niet gelukt";
  }
}

void Persoon::verkoop(Game game, Persoon persoon) {

  if(persoon.money >= game.getPrice() && find(this->boughtgames.begin(), this->boughtgames.end(), game) == this->boughtgames.end()) {
    cout << this->name << " verkoopt " << game.getGame() << " aan " << persoon.name << ": gelukt";
    persoon.money = (persoon.money - game.getPrice());
    this->money = (this->money + game.getPrice());
    persoon.boughtgames.insert(persoon.boughtgames.begin(), game);
    this->boughtgames.remove(this->boughtgames.begin(), this->boughtgames.end(), game);
  } else {
    cout << this->name << " verkoopt " << game.getGame() << " aan " << persoon.name << ": niet gelukt";
  }
}

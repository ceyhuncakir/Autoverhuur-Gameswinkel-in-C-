#ifndef PERSOON_H
#define PERSOON_H

#include <iostream>
#include <string>
#include <vector>
#include "game.h"

class Persoon {

  private:
    std::string name;
    double money;
    std::vector<Game> boughtgames;
  public:
    Persoon(std::string name, double money);
    bool koop(const Game &game);
    bool verkoop(const Game &game, Persoon &persoon);
    friend std::ostream& operator<<(std::ostream& out, const Persoon& k);
};

#endif

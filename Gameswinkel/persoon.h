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
    void getPerson(std::string name);
    void koop(Game game);
    void verkoop(Game game, Persoon persoon);
};

#endif
